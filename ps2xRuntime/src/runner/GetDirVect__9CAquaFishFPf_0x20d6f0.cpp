#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDirVect__9CAquaFishFPf
// Address: 0x20d6f0 - 0x20d764
void GetDirVect__9CAquaFishFPf_0x20d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDirVect__9CAquaFishFPf_0x20d6f0");
#endif

    switch (ctx->pc) {
        case 0x20d6f0u: goto label_20d6f0;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d6f8u: goto label_20d6f8;
        case 0x20d6fcu: goto label_20d6fc;
        case 0x20d700u: goto label_20d700;
        case 0x20d704u: goto label_20d704;
        case 0x20d708u: goto label_20d708;
        case 0x20d70cu: goto label_20d70c;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d718u: goto label_20d718;
        case 0x20d71cu: goto label_20d71c;
        case 0x20d720u: goto label_20d720;
        case 0x20d724u: goto label_20d724;
        case 0x20d728u: goto label_20d728;
        case 0x20d72cu: goto label_20d72c;
        case 0x20d730u: goto label_20d730;
        case 0x20d734u: goto label_20d734;
        case 0x20d738u: goto label_20d738;
        case 0x20d73cu: goto label_20d73c;
        case 0x20d740u: goto label_20d740;
        case 0x20d744u: goto label_20d744;
        case 0x20d748u: goto label_20d748;
        case 0x20d74cu: goto label_20d74c;
        case 0x20d750u: goto label_20d750;
        case 0x20d754u: goto label_20d754;
        case 0x20d758u: goto label_20d758;
        case 0x20d75cu: goto label_20d75c;
        case 0x20d760u: goto label_20d760;
        default: break;
    }

    ctx->pc = 0x20d6f0u;

label_20d6f0:
    // 0x20d6f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20d6f4:
    // 0x20d6f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20d6f8:
    // 0x20d6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d6fc:
    // 0x20d6fc: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x20d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
label_20d700:
    // 0x20d700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d704:
    // 0x20d704: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d708:
    // 0x20d708: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20d708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d70c:
    // 0x20d70c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20d70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20d710:
    // 0x20d710: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20d710u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_20d714:
    // 0x20d714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20d714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d718:
    // 0x20d718: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20d718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20d71c:
    // 0x20d71c: 0x320f809  jalr        $t9
label_20d720:
    if (ctx->pc == 0x20D720u) {
        ctx->pc = 0x20D720u;
            // 0x20d720: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20D724u;
        goto label_20d724;
    }
    ctx->pc = 0x20D71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D724u);
        ctx->pc = 0x20D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D71Cu;
            // 0x20d720: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D724u; }
            if (ctx->pc != 0x20D724u) { return; }
        }
        }
    }
    ctx->pc = 0x20D724u;
label_20d724:
    // 0x20d724: 0xc041c7a  jal         func_1071E8
label_20d728:
    if (ctx->pc == 0x20D728u) {
        ctx->pc = 0x20D728u;
            // 0x20d728: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20D72Cu;
        goto label_20d72c;
    }
    ctx->pc = 0x20D724u;
    SET_GPR_U32(ctx, 31, 0x20D72Cu);
    ctx->pc = 0x20D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D724u;
            // 0x20d728: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D72Cu; }
        if (ctx->pc != 0x20D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D72Cu; }
        if (ctx->pc != 0x20D72Cu) { return; }
    }
    ctx->pc = 0x20D72Cu;
label_20d72c:
    // 0x20d72c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x20d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d730:
    // 0x20d730: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d734:
    // 0x20d734: 0xc041cf6  jal         func_1073D8
label_20d738:
    if (ctx->pc == 0x20D738u) {
        ctx->pc = 0x20D738u;
            // 0x20d738: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D73Cu;
        goto label_20d73c;
    }
    ctx->pc = 0x20D734u;
    SET_GPR_U32(ctx, 31, 0x20D73Cu);
    ctx->pc = 0x20D738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D734u;
            // 0x20d738: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D73Cu; }
        if (ctx->pc != 0x20D73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D73Cu; }
        if (ctx->pc != 0x20D73Cu) { return; }
    }
    ctx->pc = 0x20D73Cu;
label_20d73c:
    // 0x20d73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d740:
    // 0x20d740: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d744:
    // 0x20d744: 0xc041bb0  jal         func_106EC0
label_20d748:
    if (ctx->pc == 0x20D748u) {
        ctx->pc = 0x20D748u;
            // 0x20d748: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20D74Cu;
        goto label_20d74c;
    }
    ctx->pc = 0x20D744u;
    SET_GPR_U32(ctx, 31, 0x20D74Cu);
    ctx->pc = 0x20D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D744u;
            // 0x20d748: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D74Cu; }
        if (ctx->pc != 0x20D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D74Cu; }
        if (ctx->pc != 0x20D74Cu) { return; }
    }
    ctx->pc = 0x20D74Cu;
label_20d74c:
    // 0x20d74c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20d750:
    // 0x20d750: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20d750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_20d754:
    // 0x20d754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d758:
    // 0x20d758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d75c:
    // 0x20d75c: 0x3e00008  jr          $ra
label_20d760:
    if (ctx->pc == 0x20D760u) {
        ctx->pc = 0x20D760u;
            // 0x20d760: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20D764u;
        goto label_fallthrough_0x20d75c;
    }
    ctx->pc = 0x20D75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D75Cu;
            // 0x20d760: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d75c:
    ctx->pc = 0x20D764u;
}
