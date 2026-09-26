#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterBookDraw__Fv
// Address: 0x2bfb90 - 0x2bfc24
void MonsterBookDraw__Fv_0x2bfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterBookDraw__Fv_0x2bfb90");
#endif

    switch (ctx->pc) {
        case 0x2bfba0u: goto label_2bfba0;
        case 0x2bfbdcu: goto label_2bfbdc;
        case 0x2bfbe4u: goto label_2bfbe4;
        case 0x2bfbf4u: goto label_2bfbf4;
        case 0x2bfc04u: goto label_2bfc04;
        case 0x2bfc18u: goto label_2bfc18;
        default: break;
    }

    ctx->pc = 0x2bfb90u;

    // 0x2bfb90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bfb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2bfb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfb98: 0xc0af978  jal         func_2BE5E0
    ctx->pc = 0x2BFB98u;
    SET_GPR_U32(ctx, 31, 0x2BFBA0u);
    ctx->pc = 0x2BFB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB98u;
            // 0x2bfb9c: 0x8f849c48  lw          $a0, -0x63B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE5E0u;
    if (runtime->hasFunction(0x2BE5E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBA0u; }
        if (ctx->pc != 0x2BFBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CMosBookMenuFv_0x2be5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBA0u; }
        if (ctx->pc != 0x2BFBA0u) { return; }
    }
    ctx->pc = 0x2BFBA0u;
label_2bfba0:
    // 0x2bfba0: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2bfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2bfba4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2BFBA4u;
    {
        const bool branch_taken_0x2bfba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBA4u;
            // 0x2bfba8: 0x3c034220  lui         $v1, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfba4) {
            ctx->pc = 0x2BFC18u;
            goto label_2bfc18;
        }
    }
    ctx->pc = 0x2BFBACu;
    // 0x2bfbac: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bfbb0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2bfbb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bfbb4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2bfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bfbb8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2bfbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2bfbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bfbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbc0: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2bfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2bfbc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bfbcc: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2bfbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2bfbd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bfbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bfbd4: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2BFBD4u;
    SET_GPR_U32(ctx, 31, 0x2BFBDCu);
    ctx->pc = 0x2BFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBD4u;
            // 0x2bfbd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBDCu; }
        if (ctx->pc != 0x2BFBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBDCu; }
        if (ctx->pc != 0x2BFBDCu) { return; }
    }
    ctx->pc = 0x2BFBDCu;
label_2bfbdc:
    // 0x2bfbdc: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2BFBDCu;
    SET_GPR_U32(ctx, 31, 0x2BFBE4u);
    ctx->pc = 0x2BFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBDCu;
            // 0x2bfbe0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBE4u; }
        if (ctx->pc != 0x2BFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBE4u; }
        if (ctx->pc != 0x2BFBE4u) { return; }
    }
    ctx->pc = 0x2BFBE4u;
label_2bfbe4:
    // 0x2bfbe4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2bfbe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bfbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfbec: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2BFBECu;
    SET_GPR_U32(ctx, 31, 0x2BFBF4u);
    ctx->pc = 0x2BFBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBECu;
            // 0x2bfbf0: 0x24a5f800  addiu       $a1, $a1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBF4u; }
        if (ctx->pc != 0x2BFBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBF4u; }
        if (ctx->pc != 0x2BFBF4u) { return; }
    }
    ctx->pc = 0x2BFBF4u;
label_2bfbf4:
    // 0x2bfbf4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bfbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfbf8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2bfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bfbfc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2BFBFCu;
    SET_GPR_U32(ctx, 31, 0x2BFC04u);
    ctx->pc = 0x2BFC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBFCu;
            // 0x2bfc00: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC04u; }
        if (ctx->pc != 0x2BFC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC04u; }
        if (ctx->pc != 0x2BFC04u) { return; }
    }
    ctx->pc = 0x2BFC04u;
label_2bfc04:
    // 0x2bfc04: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x2bfc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2bfc08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bfc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfc0c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2bfc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bfc10: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2BFC10u;
    SET_GPR_U32(ctx, 31, 0x2BFC18u);
    ctx->pc = 0x2BFC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC10u;
            // 0x2bfc14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC18u; }
        if (ctx->pc != 0x2BFC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC18u; }
        if (ctx->pc != 0x2BFC18u) { return; }
    }
    ctx->pc = 0x2BFC18u;
label_2bfc18:
    // 0x2bfc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC1Cu;
            // 0x2bfc20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFC24u;
}
