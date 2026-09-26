#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleDraw__Fv
// Address: 0x2a0ab0 - 0x2a0b64
void TitleDraw__Fv_0x2a0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleDraw__Fv_0x2a0ab0");
#endif

    switch (ctx->pc) {
        case 0x2a0ad4u: goto label_2a0ad4;
        case 0x2a0b08u: goto label_2a0b08;
        case 0x2a0b18u: goto label_2a0b18;
        case 0x2a0b28u: goto label_2a0b28;
        case 0x2a0b38u: goto label_2a0b38;
        case 0x2a0b48u: goto label_2a0b48;
        case 0x2a0b58u: goto label_2a0b58;
        default: break;
    }

    ctx->pc = 0x2a0ab0u;

    // 0x2a0ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a0ab4: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x2a0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x2a0ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0abc: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x2a0abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2a0ac0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2a0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2a0ac4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2a0ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a0ac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0acc: 0xc050d80  jal         func_143600
    ctx->pc = 0x2A0ACCu;
    SET_GPR_U32(ctx, 31, 0x2A0AD4u);
    ctx->pc = 0x2A0AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0ACCu;
            // 0x2a0ad0: 0xc78c9960  lwc1        $f12, -0x66A0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (runtime->hasFunction(0x143600u)) {
        auto targetFn = runtime->lookupFunction(0x143600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0AD4u; }
        if (ctx->pc != 0x2A0AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRenderInfo__Ffff_0x143600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0AD4u; }
        if (ctx->pc != 0x2A0AD4u) { return; }
    }
    ctx->pc = 0x2A0AD4u;
label_2a0ad4:
    // 0x2a0ad4: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0ad8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0adc: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2a0adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a0ae0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A0AE0u;
    {
        const bool branch_taken_0x2a0ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AE0u;
            // 0x2a0ae4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ae0) {
            ctx->pc = 0x2A0B58u;
            goto label_2a0b58;
        }
    }
    ctx->pc = 0x2A0AE8u;
    // 0x2a0ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0aec: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x2a0af0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0af4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0af8: 0x600008  jr          $v1
    ctx->pc = 0x2A0AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0B00u: goto label_2a0b00;
            case 0x2A0B10u: goto label_2a0b10;
            case 0x2A0B20u: goto label_2a0b20;
            case 0x2A0B30u: goto label_2a0b30;
            case 0x2A0B40u: goto label_2a0b40;
            case 0x2A0B50u: goto label_2a0b50;
            case 0x2A0B58u: goto label_2a0b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0B00u;
label_2a0b00:
    // 0x2a0b00: 0xc0a8bf4  jal         func_2A2FD0
    ctx->pc = 0x2A0B00u;
    SET_GPR_U32(ctx, 31, 0x2A0B08u);
    ctx->pc = 0x2A2FD0u;
    if (runtime->hasFunction(0x2A2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B08u; }
        if (ctx->pc != 0x2A0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckDraw__Fv_0x2a2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B08u; }
        if (ctx->pc != 0x2A0B08u) { return; }
    }
    ctx->pc = 0x2A0B08u;
label_2a0b08:
    // 0x2a0b08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A0B08u;
    {
        const bool branch_taken_0x2a0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B08u;
            // 0x2a0b0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b08) {
            ctx->pc = 0x2A0B5Cu;
            goto label_2a0b5c;
        }
    }
    ctx->pc = 0x2A0B10u;
label_2a0b10:
    // 0x2a0b10: 0xc0a8d04  jal         func_2A3410
    ctx->pc = 0x2A0B10u;
    SET_GPR_U32(ctx, 31, 0x2A0B18u);
    ctx->pc = 0x2A3410u;
    if (runtime->hasFunction(0x2A3410u)) {
        auto targetFn = runtime->lookupFunction(0x2A3410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B18u; }
        if (ctx->pc != 0x2A0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleCopyRightDraw__Fv_0x2a3410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B18u; }
        if (ctx->pc != 0x2A0B18u) { return; }
    }
    ctx->pc = 0x2A0B18u;
label_2a0b18:
    // 0x2a0b18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A0B18u;
    {
        const bool branch_taken_0x2a0b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b18) {
            ctx->pc = 0x2A0B58u;
            goto label_2a0b58;
        }
    }
    ctx->pc = 0x2A0B20u;
label_2a0b20:
    // 0x2a0b20: 0xc0a83ac  jal         func_2A0EB0
    ctx->pc = 0x2A0B20u;
    SET_GPR_U32(ctx, 31, 0x2A0B28u);
    ctx->pc = 0x2A0EB0u;
    if (runtime->hasFunction(0x2A0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B28u; }
        if (ctx->pc != 0x2A0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RushMovieDraw__Fv_0x2a0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B28u; }
        if (ctx->pc != 0x2A0B28u) { return; }
    }
    ctx->pc = 0x2A0B28u;
label_2a0b28:
    // 0x2a0b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A0B28u;
    {
        const bool branch_taken_0x2a0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b28) {
            ctx->pc = 0x2A0B58u;
            goto label_2a0b58;
        }
    }
    ctx->pc = 0x2A0B30u;
label_2a0b30:
    // 0x2a0b30: 0xc0a86d8  jal         func_2A1B60
    ctx->pc = 0x2A0B30u;
    SET_GPR_U32(ctx, 31, 0x2A0B38u);
    ctx->pc = 0x2A1B60u;
    if (runtime->hasFunction(0x2A1B60u)) {
        auto targetFn = runtime->lookupFunction(0x2A1B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B38u; }
        if (ctx->pc != 0x2A0B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleModeDraw__Fv_0x2a1b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B38u; }
        if (ctx->pc != 0x2A0B38u) { return; }
    }
    ctx->pc = 0x2A0B38u;
label_2a0b38:
    // 0x2a0b38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0B38u;
    {
        const bool branch_taken_0x2a0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b38) {
            ctx->pc = 0x2A0B58u;
            goto label_2a0b58;
        }
    }
    ctx->pc = 0x2A0B40u;
label_2a0b40:
    // 0x2a0b40: 0xc08d0a4  jal         func_234290
    ctx->pc = 0x2A0B40u;
    SET_GPR_U32(ctx, 31, 0x2A0B48u);
    ctx->pc = 0x234290u;
    if (runtime->hasFunction(0x234290u)) {
        auto targetFn = runtime->lookupFunction(0x234290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B48u; }
        if (ctx->pc != 0x2A0B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainDraw__Fv_0x234290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B48u; }
        if (ctx->pc != 0x2A0B48u) { return; }
    }
    ctx->pc = 0x2A0B48u;
label_2a0b48:
    // 0x2a0b48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0B48u;
    {
        const bool branch_taken_0x2a0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b48) {
            ctx->pc = 0x2A0B58u;
            goto label_2a0b58;
        }
    }
    ctx->pc = 0x2A0B50u;
label_2a0b50:
    // 0x2a0b50: 0xc0a923c  jal         func_2A48F0
    ctx->pc = 0x2A0B50u;
    SET_GPR_U32(ctx, 31, 0x2A0B58u);
    ctx->pc = 0x2A48F0u;
    if (runtime->hasFunction(0x2A48F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A48F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B58u; }
        if (ctx->pc != 0x2A0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleHDDInstallDraw__Fv_0x2a48f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B58u; }
        if (ctx->pc != 0x2A0B58u) { return; }
    }
    ctx->pc = 0x2A0B58u;
label_2a0b58:
    // 0x2a0b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0b5c:
    // 0x2a0b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B5Cu;
            // 0x2a0b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0B64u;
}
