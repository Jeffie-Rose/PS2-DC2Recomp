#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _flushBuf
// Address: 0x10af38 - 0x10b028
void _flushBuf_0x10af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_flushBuf_0x10af38");
#endif

    switch (ctx->pc) {
        case 0x10af80u: goto label_10af80;
        case 0x10af98u: goto label_10af98;
        case 0x10affcu: goto label_10affc;
        default: break;
    }

    ctx->pc = 0x10af38u;

    // 0x10af38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10af3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10af40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10af40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10af44: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10af48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10af4c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x10af50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10af54: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x10af54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x10af58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10af5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10af5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10af60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10af64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10af6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10af70: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10af74: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10AF74u;
    {
        const bool branch_taken_0x10af74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF74u;
            // 0x10af78: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af74) {
            ctx->pc = 0x10AFC8u;
            goto label_10afc8;
        }
    }
    ctx->pc = 0x10AF7Cu;
    // 0x10af7c: 0x0  nop
    ctx->pc = 0x10af7cu;
    // NOP
label_10af80:
    // 0x10af80: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af84: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10af84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10af88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AF88u;
    {
        const bool branch_taken_0x10af88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF88u;
            // 0x10af8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af88) {
            ctx->pc = 0x10AF9Cu;
            goto label_10af9c;
        }
    }
    ctx->pc = 0x10AF90u;
    // 0x10af90: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10AF90u;
    SET_GPR_U32(ctx, 31, 0x10AF98u);
    ctx->pc = 0x10AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF90u;
            // 0x10af94: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF98u; }
        if (ctx->pc != 0x10AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF98u; }
        if (ctx->pc != 0x10AF98u) { return; }
    }
    ctx->pc = 0x10AF98u;
label_10af98:
    // 0x10af98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10af98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10af9c:
    // 0x10af9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10afa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10afa4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10afa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10afa8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x10afa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x10afac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10afb0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10afb4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10afb8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x10AFB8u;
    {
        const bool branch_taken_0x10afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFB8u;
            // 0x10afbc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afb8) {
            ctx->pc = 0x10AF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10af80;
        }
    }
    ctx->pc = 0x10AFC0u;
    // 0x10afc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AFC0u;
    {
        const bool branch_taken_0x10afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFC0u;
            // 0x10afc4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afc0) {
            ctx->pc = 0x10AFD0u;
            goto label_10afd0;
        }
    }
    ctx->pc = 0x10AFC8u;
label_10afc8:
    // 0x10afc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10afcc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10afd0:
    // 0x10afd0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x10afd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x10afd4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x10afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x10afd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10afdc: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x10afdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x10afe0: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x10afe4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10afe8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10afe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10afec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10aff4: 0xc042b02  jal         func_10AC08
    ctx->pc = 0x10AFF4u;
    SET_GPR_U32(ctx, 31, 0x10AFFCu);
    ctx->pc = 0x10AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFF4u;
            // 0x10aff8: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AC08u;
    if (runtime->hasFunction(0x10AC08u)) {
        auto targetFn = runtime->lookupFunction(0x10AC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFFCu; }
        if (ctx->pc != 0x10AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x10ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFFCu; }
        if (ctx->pc != 0x10AFFCu) { return; }
    }
    ctx->pc = 0x10AFFCu;
label_10affc:
    // 0x10affc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10affcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10b000: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10b000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10b004: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x10b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10b008: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x10b008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x10b00c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x10b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x10b010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b020: 0x3e00008  jr          $ra
    ctx->pc = 0x10B020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B020u;
            // 0x10b024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B028u;
}
