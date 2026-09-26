#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _peepBit
// Address: 0x10ae30 - 0x10af38
void _peepBit_0x10ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_peepBit_0x10ae30");
#endif

    switch (ctx->pc) {
        case 0x10ae90u: goto label_10ae90;
        case 0x10aea8u: goto label_10aea8;
        case 0x10af00u: goto label_10af00;
        default: break;
    }

    ctx->pc = 0x10ae30u;

    // 0x10ae30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ae34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ae38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ae3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ae40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ae40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ae48: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x10ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x10ae4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AE4Cu;
    {
        const bool branch_taken_0x10ae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE4Cu;
            // 0x10ae50: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae4c) {
            ctx->pc = 0x10AE64u;
            goto label_10ae64;
        }
    }
    ctx->pc = 0x10AE54u;
    // 0x10ae54: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x10ae58: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x10ae58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10ae5c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x10AE5Cu;
    {
        const bool branch_taken_0x10ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ae5c) {
            ctx->pc = 0x10AE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE5Cu;
            // 0x10ae60: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AF18u;
            goto label_10af18;
        }
    }
    ctx->pc = 0x10AE64u;
label_10ae64:
    // 0x10ae64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10ae6c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10ae70: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x10ae70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x10ae74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ae78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10ae7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10ae80: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10AE80u;
    {
        const bool branch_taken_0x10ae80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE80u;
            // 0x10ae84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae80) {
            ctx->pc = 0x10AED8u;
            goto label_10aed8;
        }
    }
    ctx->pc = 0x10AE88u;
    // 0x10ae88: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x10ae88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x10ae8c: 0x0  nop
    ctx->pc = 0x10ae8cu;
    // NOP
label_10ae90:
    // 0x10ae90: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae94: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10ae94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10ae98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AE98u;
    {
        const bool branch_taken_0x10ae98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE98u;
            // 0x10ae9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae98) {
            ctx->pc = 0x10AEACu;
            goto label_10aeac;
        }
    }
    ctx->pc = 0x10AEA0u;
    // 0x10aea0: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10AEA0u;
    SET_GPR_U32(ctx, 31, 0x10AEA8u);
    ctx->pc = 0x10AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEA0u;
            // 0x10aea4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEA8u; }
        if (ctx->pc != 0x10AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEA8u; }
        if (ctx->pc != 0x10AEA8u) { return; }
    }
    ctx->pc = 0x10AEA8u;
label_10aea8:
    // 0x10aea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10aea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aeac:
    // 0x10aeac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10aeb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10aeb4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10aeb8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x10aeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x10aebc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10aec0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10aec4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10aec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10aec8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x10AEC8u;
    {
        const bool branch_taken_0x10aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10AECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEC8u;
            // 0x10aecc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aec8) {
            ctx->pc = 0x10AE90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ae90;
        }
    }
    ctx->pc = 0x10AED0u;
    // 0x10aed0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AED0u;
    {
        const bool branch_taken_0x10aed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AED0u;
            // 0x10aed4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aed0) {
            ctx->pc = 0x10AEE4u;
            goto label_10aee4;
        }
    }
    ctx->pc = 0x10AED8u;
label_10aed8:
    // 0x10aed8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x10aed8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x10aedc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10aee0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_10aee4:
    // 0x10aee4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10aee8: 0x26250490  addiu       $a1, $s1, 0x490
    ctx->pc = 0x10aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x10aeec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10aef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aef4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x10aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10aef8: 0xc042b02  jal         func_10AC08
    ctx->pc = 0x10AEF8u;
    SET_GPR_U32(ctx, 31, 0x10AF00u);
    ctx->pc = 0x10AEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEF8u;
            // 0x10aefc: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AC08u;
    if (runtime->hasFunction(0x10AC08u)) {
        auto targetFn = runtime->lookupFunction(0x10AC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF00u; }
        if (ctx->pc != 0x10AF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x10ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF00u; }
        if (ctx->pc != 0x10AF00u) { return; }
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10af04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10af04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10af08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x10af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10af0c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x10af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x10af10: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x10af10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x10af14: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x10af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
label_10af18:
    // 0x10af18: 0x121023  negu        $v0, $s2
    ctx->pc = 0x10af18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x10af1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10af20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10af20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af24: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x10af24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x10af28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10af28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af30: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF30u;
            // 0x10af34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AF38u;
}
