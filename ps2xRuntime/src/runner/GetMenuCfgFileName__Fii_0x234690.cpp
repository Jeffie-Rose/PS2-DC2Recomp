#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuCfgFileName__Fii
// Address: 0x234690 - 0x2346ec
void GetMenuCfgFileName__Fii_0x234690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuCfgFileName__Fii_0x234690");
#endif

    switch (ctx->pc) {
        case 0x2346b8u: goto label_2346b8;
        case 0x2346d4u: goto label_2346d4;
        default: break;
    }

    ctx->pc = 0x234690u;

    // 0x234690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234694: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23469c: 0x24a5a808  addiu       $a1, $a1, -0x57F8
    ctx->pc = 0x23469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944776));
    // 0x2346a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2346a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2346a4: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2346a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2346a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2346a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2346b0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2346B0u;
    SET_GPR_U32(ctx, 31, 0x2346B8u);
    ctx->pc = 0x2346B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2346B0u;
            // 0x2346b4: 0x2484d6b0  addiu       $a0, $a0, -0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346B8u; }
        if (ctx->pc != 0x2346B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346B8u; }
        if (ctx->pc != 0x2346B8u) { return; }
    }
    ctx->pc = 0x2346B8u;
label_2346b8:
    // 0x2346b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2346b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2346bc: 0x27828318  addiu       $v0, $gp, -0x7CE8
    ctx->pc = 0x2346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935320));
    // 0x2346c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2346c4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2346c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2346c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2346cc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2346CCu;
    SET_GPR_U32(ctx, 31, 0x2346D4u);
    ctx->pc = 0x2346D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2346CCu;
            // 0x2346d0: 0x2484d6b0  addiu       $a0, $a0, -0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346D4u; }
        if (ctx->pc != 0x2346D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346D4u; }
        if (ctx->pc != 0x2346D4u) { return; }
    }
    ctx->pc = 0x2346D4u;
label_2346d4:
    // 0x2346d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2346d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346d8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2346d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2346dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2346dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2346e0: 0x2442d6b0  addiu       $v0, $v0, -0x2950
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956720));
    // 0x2346e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2346E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2346E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2346E4u;
            // 0x2346e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2346ECu;
}
