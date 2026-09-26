#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuDebugModeDraw__Fv
// Address: 0x236e00 - 0x236e98
void MenuDebugModeDraw__Fv_0x236e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuDebugModeDraw__Fv_0x236e00");
#endif

    switch (ctx->pc) {
        case 0x236e20u: goto label_236e20;
        case 0x236e50u: goto label_236e50;
        case 0x236e58u: goto label_236e58;
        case 0x236e68u: goto label_236e68;
        case 0x236e78u: goto label_236e78;
        case 0x236e8cu: goto label_236e8c;
        default: break;
    }

    ctx->pc = 0x236e00u;

    // 0x236e00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x236e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x236e04: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x236e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x236e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236e0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x236e10: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x236e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x236e14: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x236e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x236e18: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x236E18u;
    SET_GPR_U32(ctx, 31, 0x236E20u);
    ctx->pc = 0x236E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E18u;
            // 0x236e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E20u; }
        if (ctx->pc != 0x236E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E20u; }
        if (ctx->pc != 0x236E20u) { return; }
    }
    ctx->pc = 0x236E20u;
label_236e20:
    // 0x236e20: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x236e24: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x236e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x236e28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x236e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236e2c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x236e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x236e30: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x236e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x236e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e38: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x236e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x236e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e40: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x236e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x236e44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e48: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x236E48u;
    SET_GPR_U32(ctx, 31, 0x236E50u);
    ctx->pc = 0x236E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E48u;
            // 0x236e4c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E50u; }
        if (ctx->pc != 0x236E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E50u; }
        if (ctx->pc != 0x236E50u) { return; }
    }
    ctx->pc = 0x236E50u;
label_236e50:
    // 0x236e50: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x236E50u;
    SET_GPR_U32(ctx, 31, 0x236E58u);
    ctx->pc = 0x236E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E50u;
            // 0x236e54: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E58u; }
        if (ctx->pc != 0x236E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E58u; }
        if (ctx->pc != 0x236E58u) { return; }
    }
    ctx->pc = 0x236E58u;
label_236e58:
    // 0x236e58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236e5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x236e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236e60: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x236E60u;
    SET_GPR_U32(ctx, 31, 0x236E68u);
    ctx->pc = 0x236E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E60u;
            // 0x236e64: 0x24a5aaf8  addiu       $a1, $a1, -0x5508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E68u; }
        if (ctx->pc != 0x236E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E68u; }
        if (ctx->pc != 0x236E68u) { return; }
    }
    ctx->pc = 0x236E68u;
label_236e68:
    // 0x236e68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x236e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236e6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236e70: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x236E70u;
    SET_GPR_U32(ctx, 31, 0x236E78u);
    ctx->pc = 0x236E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E70u;
            // 0x236e74: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E78u; }
        if (ctx->pc != 0x236E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E78u; }
        if (ctx->pc != 0x236E78u) { return; }
    }
    ctx->pc = 0x236E78u;
label_236e78:
    // 0x236e78: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x236e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x236e7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x236e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236e80: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x236e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x236e84: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x236E84u;
    SET_GPR_U32(ctx, 31, 0x236E8Cu);
    ctx->pc = 0x236E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E84u;
            // 0x236e88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E8Cu; }
        if (ctx->pc != 0x236E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E8Cu; }
        if (ctx->pc != 0x236E8Cu) { return; }
    }
    ctx->pc = 0x236E8Cu;
label_236e8c:
    // 0x236e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236e90: 0x3e00008  jr          $ra
    ctx->pc = 0x236E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236E90u;
            // 0x236e94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236E98u;
}
