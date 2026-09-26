#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPlacedHousePosLinkMes__Fv
// Address: 0x1f7630 - 0x1f769c
void MenuPlacedHousePosLinkMes__Fv_0x1f7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPlacedHousePosLinkMes__Fv_0x1f7630");
#endif

    switch (ctx->pc) {
        case 0x1f7660u: goto label_1f7660;
        case 0x1f768cu: goto label_1f768c;
        default: break;
    }

    ctx->pc = 0x1f7630u;

    // 0x1f7630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7634: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f7634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f763c: 0x27858f78  addiu       $a1, $gp, -0x7088
    ctx->pc = 0x1f763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938488));
    // 0x1f7640: 0x87828f6c  lh          $v0, -0x7094($gp)
    ctx->pc = 0x1f7640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1f7644: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f7644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7648: 0x83888f74  lb          $t0, -0x708C($gp)
    ctx->pc = 0x1f7648u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1f764c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f764cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f7650: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f7654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7658: 0xc094538  jal         func_2514E0
    ctx->pc = 0x1F7658u;
    SET_GPR_U32(ctx, 31, 0x1F7660u);
    ctx->pc = 0x1F765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7658u;
            // 0x1f765c: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2514E0u;
    if (runtime->hasFunction(0x2514E0u)) {
        auto targetFn = runtime->lookupFunction(0x2514E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7660u; }
        if (ctx->pc != 0x1F7660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FiPiiii_0x2514e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7660u; }
        if (ctx->pc != 0x1F7660u) { return; }
    }
    ctx->pc = 0x1F7660u;
label_1f7660:
    // 0x1f7660: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1f7664: 0x27858f84  addiu       $a1, $gp, -0x707C
    ctx->pc = 0x1f7664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938500));
    // 0x1f7668: 0x87828f6c  lh          $v0, -0x7094($gp)
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1f766c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7670: 0x83888f74  lb          $t0, -0x708C($gp)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1f7674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7678: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f7678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f767c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f7680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7684: 0xc094538  jal         func_2514E0
    ctx->pc = 0x1F7684u;
    SET_GPR_U32(ctx, 31, 0x1F768Cu);
    ctx->pc = 0x1F7688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7684u;
            // 0x1f7688: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2514E0u;
    if (runtime->hasFunction(0x2514E0u)) {
        auto targetFn = runtime->lookupFunction(0x2514E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F768Cu; }
        if (ctx->pc != 0x1F768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FiPiiii_0x2514e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F768Cu; }
        if (ctx->pc != 0x1F768Cu) { return; }
    }
    ctx->pc = 0x1F768Cu;
label_1f768c:
    // 0x1f768c: 0xa3808f74  sb          $zero, -0x708C($gp)
    ctx->pc = 0x1f768cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7694: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7694u;
            // 0x1f7698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F769Cu;
}
