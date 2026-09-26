#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _nextBit
// Address: 0x10b028 - 0x10b178
void _nextBit_0x10b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextBit_0x10b028");
#endif

    switch (ctx->pc) {
        case 0x10b078u: goto label_10b078;
        case 0x10b08cu: goto label_10b08c;
        case 0x10b0f8u: goto label_10b0f8;
        case 0x10b14cu: goto label_10b14c;
        default: break;
    }

    ctx->pc = 0x10b028u;

    // 0x10b028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b02c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b030: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b034: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10b038: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b03c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x10b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x10b040: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b044: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x10b044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x10b048: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b054: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b05c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b060: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10b064: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10b064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10b068: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10B068u;
    {
        const bool branch_taken_0x10b068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B068u;
            // 0x10b06c: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b068) {
            ctx->pc = 0x10B0BCu;
            goto label_10b0bc;
        }
    }
    ctx->pc = 0x10B070u;
    // 0x10b070: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10b070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b074: 0x0  nop
    ctx->pc = 0x10b074u;
    // NOP
label_10b078:
    // 0x10b078: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10b078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10b07c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B07Cu;
    {
        const bool branch_taken_0x10b07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B07Cu;
            // 0x10b080: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b07c) {
            ctx->pc = 0x10B090u;
            goto label_10b090;
        }
    }
    ctx->pc = 0x10B084u;
    // 0x10b084: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10B084u;
    SET_GPR_U32(ctx, 31, 0x10B08Cu);
    ctx->pc = 0x10B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B084u;
            // 0x10b088: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B08Cu; }
        if (ctx->pc != 0x10B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B08Cu; }
        if (ctx->pc != 0x10B08Cu) { return; }
    }
    ctx->pc = 0x10B08Cu;
label_10b08c:
    // 0x10b08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b090:
    // 0x10b090: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b094: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10b098: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b09c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x10b09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x10b0a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b0a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10b0a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10b0ac: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x10B0ACu;
    {
        const bool branch_taken_0x10b0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10B0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0ACu;
            // 0x10b0b0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0ac) {
            ctx->pc = 0x10B078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b078;
        }
    }
    ctx->pc = 0x10B0B4u;
    // 0x10b0b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B0B4u;
    {
        const bool branch_taken_0x10b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0B4u;
            // 0x10b0b8: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0b4) {
            ctx->pc = 0x10B0C0u;
            goto label_10b0c0;
        }
    }
    ctx->pc = 0x10B0BCu;
label_10b0bc:
    // 0x10b0bc: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x10b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_10b0c0:
    // 0x10b0c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B0C0u;
    {
        const bool branch_taken_0x10b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0C0u;
            // 0x10b0c4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0c0) {
            ctx->pc = 0x10B0D8u;
            goto label_10b0d8;
        }
    }
    ctx->pc = 0x10B0C8u;
    // 0x10b0c8: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x10b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x10b0cc: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x10b0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10b0d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B0D0u;
    {
        const bool branch_taken_0x10b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0D0u;
            // 0x10b0d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0d0) {
            ctx->pc = 0x10B104u;
            goto label_10b104;
        }
    }
    ctx->pc = 0x10B0D8u;
label_10b0d8:
    // 0x10b0d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10b0dc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b0e0: 0x26650490  addiu       $a1, $s3, 0x490
    ctx->pc = 0x10b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x10b0e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10b0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0ec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10b0f0: 0xc042b02  jal         func_10AC08
    ctx->pc = 0x10B0F0u;
    SET_GPR_U32(ctx, 31, 0x10B0F8u);
    ctx->pc = 0x10B0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0F0u;
            // 0x10b0f4: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AC08u;
    if (runtime->hasFunction(0x10AC08u)) {
        auto targetFn = runtime->lookupFunction(0x10AC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0F8u; }
        if (ctx->pc != 0x10B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x10ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0F8u; }
        if (ctx->pc != 0x10B0F8u) { return; }
    }
    ctx->pc = 0x10B0F8u;
label_10b0f8:
    // 0x10b0f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10b0fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10b0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10b100: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x10b100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_10b104:
    // 0x10b104: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10b104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10b108: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x10b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x10b10c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b110: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x10b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x10b114: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x10b114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x10b118: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b11c: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x10b120: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x10b124: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10b124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10b128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10b128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10b12c: 0x26620490  addiu       $v0, $s3, 0x490
    ctx->pc = 0x10b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x10b130: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x10b134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b138: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x10b13c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b144: 0xc042b02  jal         func_10AC08
    ctx->pc = 0x10B144u;
    SET_GPR_U32(ctx, 31, 0x10B14Cu);
    ctx->pc = 0x10B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B144u;
            // 0x10b148: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AC08u;
    if (runtime->hasFunction(0x10AC08u)) {
        auto targetFn = runtime->lookupFunction(0x10AC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B14Cu; }
        if (ctx->pc != 0x10B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x10ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B14Cu; }
        if (ctx->pc != 0x10B14Cu) { return; }
    }
    ctx->pc = 0x10B14Cu;
label_10b14c:
    // 0x10b14c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10b14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10b150: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10b150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10b154: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b158: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x10b158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    // 0x10b15c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10b15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b160: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b164: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b168: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b170: 0x3e00008  jr          $ra
    ctx->pc = 0x10B170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B170u;
            // 0x10b174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B178u;
}
