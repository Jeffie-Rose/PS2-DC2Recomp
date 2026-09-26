#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureData0
// Address: 0x109e28 - 0x109f30
void _pictureData0_0x109e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureData0_0x109e28");
#endif

    switch (ctx->pc) {
        case 0x109e78u: goto label_109e78;
        case 0x109e7cu: goto label_109e7c;
        case 0x109e84u: goto label_109e84;
        case 0x109ea0u: goto label_109ea0;
        case 0x109ea8u: goto label_109ea8;
        case 0x109ec0u: goto label_109ec0;
        case 0x109ef4u: goto label_109ef4;
        case 0x109f0cu: goto label_109f0c;
        default: break;
    }

    ctx->pc = 0x109e28u;

    // 0x109e28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x109e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x109e2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109e30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109e34: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x109e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109e3c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x109e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109e40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x109e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109e50: 0xae400810  sw          $zero, 0x810($s2)
    ctx->pc = 0x109e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 0));
    // 0x109e54: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x109e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x109e58: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x109e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x109e5c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x109e60: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x109e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x109e64: 0xae400814  sw          $zero, 0x814($s2)
    ctx->pc = 0x109e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 0));
    // 0x109e68: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x109e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x109e6c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x109e6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x109e70: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x109e70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
    // 0x109e74: 0x0  nop
    ctx->pc = 0x109e74u;
    // NOP
label_109e78:
    // 0x109e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109e7c:
    // 0x109e7c: 0xc042818  jal         func_10A060
    ctx->pc = 0x109E7Cu;
    SET_GPR_U32(ctx, 31, 0x109E84u);
    ctx->pc = 0x109E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109E7Cu;
            // 0x109e80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A060u;
    if (runtime->hasFunction(0x10A060u)) {
        auto targetFn = runtime->lookupFunction(0x10A060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109E84u; }
        if (ctx->pc != 0x109E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x10a060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109E84u; }
        if (ctx->pc != 0x109E84u) { return; }
    }
    ctx->pc = 0x109E84u;
label_109e84:
    // 0x109e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e88: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x109E88u;
    {
        const bool branch_taken_0x109e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x109E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109E88u;
            // 0x109e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e88) {
            ctx->pc = 0x109E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109e7c;
        }
    }
    ctx->pc = 0x109E90u;
    // 0x109e90: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109E90u;
    {
        const bool branch_taken_0x109e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x109e90) {
            ctx->pc = 0x109E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E98u;
    // 0x109e98: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x109E98u;
    SET_GPR_U32(ctx, 31, 0x109EA0u);
    ctx->pc = 0x109E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109E98u;
            // 0x109e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EA0u; }
        if (ctx->pc != 0x109EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EA0u; }
        if (ctx->pc != 0x109EA0u) { return; }
    }
    ctx->pc = 0x109EA0u;
label_109ea0:
    // 0x109ea0: 0xc042660  jal         func_109980
    ctx->pc = 0x109EA0u;
    SET_GPR_U32(ctx, 31, 0x109EA8u);
    ctx->pc = 0x109EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109EA0u;
            // 0x109ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109980u;
    if (runtime->hasFunction(0x109980u)) {
        auto targetFn = runtime->lookupFunction(0x109980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EA8u; }
        if (ctx->pc != 0x109EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x109980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EA8u; }
        if (ctx->pc != 0x109EA8u) { return; }
    }
    ctx->pc = 0x109EA8u;
label_109ea8:
    // 0x109ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x109ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109eac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109eb0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x109eb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x109eb4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x109eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x109eb8: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x109ebc: 0x2e130001  sltiu       $s3, $s0, 0x1
    ctx->pc = 0x109ebcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_109ec0:
    // 0x109ec0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109ec4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x109ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x109ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x109ecc: 0x0  nop
    ctx->pc = 0x109eccu;
    // NOP
    // 0x109ed0: 0x0  nop
    ctx->pc = 0x109ed0u;
    // NOP
    // 0x109ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109ED4u;
    {
        const bool branch_taken_0x109ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109ed4) {
            ctx->pc = 0x109EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109ec0;
        }
    }
    ctx->pc = 0x109EDCu;
    // 0x109edc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109EDCu;
    {
        const bool branch_taken_0x109edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x109EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109EDCu;
            // 0x109ee0: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109edc) {
            ctx->pc = 0x109EF8u;
            goto label_109ef8;
        }
    }
    ctx->pc = 0x109EE4u;
    // 0x109ee4: 0x8e450810  lw          $a1, 0x810($s2)
    ctx->pc = 0x109ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2064)));
    // 0x109ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eec: 0xc042262  jal         func_108988
    ctx->pc = 0x109EECu;
    SET_GPR_U32(ctx, 31, 0x109EF4u);
    ctx->pc = 0x109EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109EECu;
            // 0x109ef0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x108988u;
    if (runtime->hasFunction(0x108988u)) {
        auto targetFn = runtime->lookupFunction(0x108988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EF4u; }
        if (ctx->pc != 0x109EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x108988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109EF4u; }
        if (ctx->pc != 0x109EF4u) { return; }
    }
    ctx->pc = 0x109EF4u;
label_109ef4:
    // 0x109ef4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_109ef8:
    // 0x109ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109EF8u;
    {
        const bool branch_taken_0x109ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109EF8u;
            // 0x109efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ef8) {
            ctx->pc = 0x109F0Cu;
            goto label_109f0c;
        }
    }
    ctx->pc = 0x109F00u;
    // 0x109f00: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x109f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x109f04: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x109F04u;
    SET_GPR_U32(ctx, 31, 0x109F0Cu);
    ctx->pc = 0x109F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109F04u;
            // 0x109f08: 0x24a50660  addiu       $a1, $a1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F0Cu; }
        if (ctx->pc != 0x109F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109F0Cu; }
        if (ctx->pc != 0x109F0Cu) { return; }
    }
    ctx->pc = 0x109F0Cu;
label_109f0c:
    // 0x109f0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x109f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109f14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109f18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109f1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109f20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109f28: 0x3e00008  jr          $ra
    ctx->pc = 0x109F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F28u;
            // 0x109f2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109F30u;
}
