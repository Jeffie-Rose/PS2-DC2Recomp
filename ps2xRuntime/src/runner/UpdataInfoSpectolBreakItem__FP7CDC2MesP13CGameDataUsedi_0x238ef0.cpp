#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdataInfoSpectolBreakItem__FP7CDC2MesP13CGameDataUsedi
// Address: 0x238ef0 - 0x238f9c
void UpdataInfoSpectolBreakItem__FP7CDC2MesP13CGameDataUsedi_0x238ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdataInfoSpectolBreakItem__FP7CDC2MesP13CGameDataUsedi_0x238ef0");
#endif

    switch (ctx->pc) {
        case 0x238f3cu: goto label_238f3c;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f74u: goto label_238f74;
        default: break;
    }

    ctx->pc = 0x238ef0u;

    // 0x238ef0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x238ef4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x238ef8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x238efc: 0x2442dde0  addiu       $v0, $v0, -0x2220
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958560));
    // 0x238f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x238f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238f08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x238f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238f10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x238f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x238f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238f18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x238f1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x238f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238f24: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x238f24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x238f28: 0x87829614  lh          $v0, -0x69EC($gp)
    ctx->pc = 0x238f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940180)));
    // 0x238f2c: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x238f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x238f30: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x238f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x238f34: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x238F34u;
    SET_GPR_U32(ctx, 31, 0x238F3Cu);
    ctx->pc = 0x238F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F34u;
            // 0x238f38: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F3Cu; }
        if (ctx->pc != 0x238F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F3Cu; }
        if (ctx->pc != 0x238F3Cu) { return; }
    }
    ctx->pc = 0x238F3Cu;
label_238f3c:
    // 0x238f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x238f40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x238f44: 0xc065c24  jal         func_197090
    ctx->pc = 0x238F44u;
    SET_GPR_U32(ctx, 31, 0x238F4Cu);
    ctx->pc = 0x238F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F44u;
            // 0x238f48: 0xae420184  sw          $v0, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F4Cu; }
        if (ctx->pc != 0x238F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F4Cu; }
        if (ctx->pc != 0x238F4Cu) { return; }
    }
    ctx->pc = 0x238F4Cu;
label_238f4c:
    // 0x238f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x238f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f54: 0xc066284  jal         func_198A10
    ctx->pc = 0x238F54u;
    SET_GPR_U32(ctx, 31, 0x238F5Cu);
    ctx->pc = 0x238F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F54u;
            // 0x238f58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198A10u;
    if (runtime->hasFunction(0x198A10u)) {
        auto targetFn = runtime->lookupFunction(0x198A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F5Cu; }
        if (ctx->pc != 0x238F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F5Cu; }
        if (ctx->pc != 0x238F5Cu) { return; }
    }
    ctx->pc = 0x238F5Cu;
label_238f5c:
    // 0x238f5c: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x238f60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x238f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x238f64: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x238f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
    // 0x238f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f6c: 0xc08fdf8  jal         func_23F7E0
    ctx->pc = 0x238F6Cu;
    SET_GPR_U32(ctx, 31, 0x238F74u);
    ctx->pc = 0x238F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F6Cu;
            // 0x238f70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (runtime->hasFunction(0x23F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x23F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F74u; }
        if (ctx->pc != 0x238F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F74u; }
        if (ctx->pc != 0x238F74u) { return; }
    }
    ctx->pc = 0x238F74u;
label_238f74:
    // 0x238f74: 0x8f84959c  lw          $a0, -0x6A64($gp)
    ctx->pc = 0x238f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940060)));
    // 0x238f78: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x238F78u;
    {
        const bool branch_taken_0x238f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F78u;
            // 0x238f7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f78) {
            ctx->pc = 0x238F84u;
            goto label_238f84;
        }
    }
    ctx->pc = 0x238F80u;
    // 0x238f80: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x238f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_238f84:
    // 0x238f84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238f88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f94: 0x3e00008  jr          $ra
    ctx->pc = 0x238F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F94u;
            // 0x238f98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238F9Cu;
}
