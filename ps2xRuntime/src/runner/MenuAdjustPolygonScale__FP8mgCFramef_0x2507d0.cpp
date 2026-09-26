#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAdjustPolygonScale__FP8mgCFramef
// Address: 0x2507d0 - 0x250820
void MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0");
#endif

    switch (ctx->pc) {
        case 0x2507d0u: goto label_2507d0;
        case 0x2507d4u: goto label_2507d4;
        case 0x2507d8u: goto label_2507d8;
        case 0x2507dcu: goto label_2507dc;
        case 0x2507e0u: goto label_2507e0;
        case 0x2507e4u: goto label_2507e4;
        case 0x2507e8u: goto label_2507e8;
        case 0x2507ecu: goto label_2507ec;
        case 0x2507f0u: goto label_2507f0;
        case 0x2507f4u: goto label_2507f4;
        case 0x2507f8u: goto label_2507f8;
        case 0x2507fcu: goto label_2507fc;
        case 0x250800u: goto label_250800;
        case 0x250804u: goto label_250804;
        case 0x250808u: goto label_250808;
        case 0x25080cu: goto label_25080c;
        case 0x250810u: goto label_250810;
        case 0x250814u: goto label_250814;
        case 0x250818u: goto label_250818;
        case 0x25081cu: goto label_25081c;
        default: break;
    }

    ctx->pc = 0x2507d0u;

label_2507d0:
    // 0x2507d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2507d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2507d4:
    // 0x2507d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2507d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2507d8:
    // 0x2507d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2507d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2507dc:
    // 0x2507dc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2507e0:
    if (ctx->pc == 0x2507E0u) {
        ctx->pc = 0x2507E0u;
            // 0x2507e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2507E4u;
        goto label_2507e4;
    }
    ctx->pc = 0x2507DCu;
    {
        const bool branch_taken_0x2507dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2507E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2507DCu;
            // 0x2507e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507dc) {
            ctx->pc = 0x2507F4u;
            goto label_2507f4;
        }
    }
    ctx->pc = 0x2507E4u;
label_2507e4:
    // 0x2507e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2507e8:
    // 0x2507e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2507e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2507ec:
    // 0x2507ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_2507f0:
    if (ctx->pc == 0x2507F0u) {
        ctx->pc = 0x2507F0u;
            // 0x2507f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2507F4u;
        goto label_2507f4;
    }
    ctx->pc = 0x2507ECu;
    {
        const bool branch_taken_0x2507ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2507ECu;
            // 0x2507f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507ec) {
            ctx->pc = 0x250814u;
            goto label_250814;
        }
    }
    ctx->pc = 0x2507F4u;
label_2507f4:
    // 0x2507f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2507f8:
    // 0x2507f8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2507f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2507fc:
    // 0x2507fc: 0x320f809  jalr        $t9
label_250800:
    if (ctx->pc == 0x250800u) {
        ctx->pc = 0x250800u;
            // 0x250800: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x250804u;
        goto label_250804;
    }
    ctx->pc = 0x2507FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x250804u);
        ctx->pc = 0x250800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2507FCu;
            // 0x250800: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x250804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x250804u; }
            if (ctx->pc != 0x250804u) { return; }
        }
        }
    }
    ctx->pc = 0x250804u;
label_250804:
    // 0x250804: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x250804u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_250808:
    // 0x250808: 0xc094208  jal         func_250820
label_25080c:
    if (ctx->pc == 0x25080Cu) {
        ctx->pc = 0x25080Cu;
            // 0x25080c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x250810u;
        goto label_250810;
    }
    ctx->pc = 0x250808u;
    SET_GPR_U32(ctx, 31, 0x250810u);
    ctx->pc = 0x25080Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250808u;
            // 0x25080c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250820u;
    if (runtime->hasFunction(0x250820u)) {
        auto targetFn = runtime->lookupFunction(0x250820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250810u; }
        if (ctx->pc != 0x250810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__F9mgVu0FBOXf_0x250820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250810u; }
        if (ctx->pc != 0x250810u) { return; }
    }
    ctx->pc = 0x250810u;
label_250810:
    // 0x250810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250814:
    // 0x250814: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x250814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_250818:
    // 0x250818: 0x3e00008  jr          $ra
label_25081c:
    if (ctx->pc == 0x25081Cu) {
        ctx->pc = 0x25081Cu;
            // 0x25081c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x250820u;
        goto label_fallthrough_0x250818;
    }
    ctx->pc = 0x250818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250818u;
            // 0x25081c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x250818:
    ctx->pc = 0x250820u;
}
