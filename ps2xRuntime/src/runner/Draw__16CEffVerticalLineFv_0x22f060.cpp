#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__16CEffVerticalLineFv
// Address: 0x22f060 - 0x22f2ac
void Draw__16CEffVerticalLineFv_0x22f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__16CEffVerticalLineFv_0x22f060");
#endif

    switch (ctx->pc) {
        case 0x22f088u: goto label_22f088;
        case 0x22f094u: goto label_22f094;
        case 0x22f0a0u: goto label_22f0a0;
        case 0x22f0acu: goto label_22f0ac;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0c4u: goto label_22f0c4;
        case 0x22f0e0u: goto label_22f0e0;
        case 0x22f0f0u: goto label_22f0f0;
        case 0x22f118u: goto label_22f118;
        case 0x22f124u: goto label_22f124;
        case 0x22f130u: goto label_22f130;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f154u: goto label_22f154;
        case 0x22f164u: goto label_22f164;
        case 0x22f170u: goto label_22f170;
        case 0x22f180u: goto label_22f180;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f1c4u: goto label_22f1c4;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f218u: goto label_22f218;
        case 0x22f224u: goto label_22f224;
        case 0x22f230u: goto label_22f230;
        case 0x22f248u: goto label_22f248;
        case 0x22f258u: goto label_22f258;
        case 0x22f264u: goto label_22f264;
        case 0x22f274u: goto label_22f274;
        case 0x22f280u: goto label_22f280;
        case 0x22f28cu: goto label_22f28c;
        default: break;
    }

    ctx->pc = 0x22f060u;

    // 0x22f060: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x22f064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22f068: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22f06c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22f06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22f070: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22f070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22f074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22f078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f07c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f080: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22F080u;
    SET_GPR_U32(ctx, 31, 0x22F088u);
    ctx->pc = 0x22F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F080u;
            // 0x22f084: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F088u; }
        if (ctx->pc != 0x22F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F088u; }
        if (ctx->pc != 0x22F088u) { return; }
    }
    ctx->pc = 0x22F088u;
label_22f088:
    // 0x22f088: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f08c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x22F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F08Cu;
            // 0x22f090: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F094u; }
        if (ctx->pc != 0x22F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F094u; }
        if (ctx->pc != 0x22F094u) { return; }
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f098: 0xc04d44c  jal         func_135130
    ctx->pc = 0x22F098u;
    SET_GPR_U32(ctx, 31, 0x22F0A0u);
    ctx->pc = 0x22F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F098u;
            // 0x22f09c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0A0u; }
        if (ctx->pc != 0x22F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0A0u; }
        if (ctx->pc != 0x22F0A0u) { return; }
    }
    ctx->pc = 0x22F0A0u;
label_22f0a0:
    // 0x22f0a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f0a4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x22F0A4u;
    SET_GPR_U32(ctx, 31, 0x22F0ACu);
    ctx->pc = 0x22F0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0A4u;
            // 0x22f0a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0ACu; }
        if (ctx->pc != 0x22F0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0ACu; }
        if (ctx->pc != 0x22F0ACu) { return; }
    }
    ctx->pc = 0x22F0ACu;
label_22f0ac:
    // 0x22f0ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f0b0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22F0B0u;
    SET_GPR_U32(ctx, 31, 0x22F0B8u);
    ctx->pc = 0x22F0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0B0u;
            // 0x22f0b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0B8u; }
        if (ctx->pc != 0x22F0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0B8u; }
        if (ctx->pc != 0x22F0B8u) { return; }
    }
    ctx->pc = 0x22F0B8u;
label_22f0b8:
    // 0x22f0b8: 0x8f85947c  lw          $a1, -0x6B84($gp)
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939772)));
    // 0x22f0bc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22F0BCu;
    SET_GPR_U32(ctx, 31, 0x22F0C4u);
    ctx->pc = 0x22F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0BCu;
            // 0x22f0c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0C4u; }
        if (ctx->pc != 0x22F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0C4u; }
        if (ctx->pc != 0x22F0C4u) { return; }
    }
    ctx->pc = 0x22F0C4u;
label_22f0c4:
    // 0x22f0c4: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x22f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f0c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22f0cc: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x22f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22f0d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f0d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22f0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0d8: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x22F0D8u;
    SET_GPR_U32(ctx, 31, 0x22F0E0u);
    ctx->pc = 0x22F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0D8u;
            // 0x22f0dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0E0u; }
        if (ctx->pc != 0x22F0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0E0u; }
        if (ctx->pc != 0x22F0E0u) { return; }
    }
    ctx->pc = 0x22F0E0u;
label_22f0e0:
    // 0x22f0e0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22F0E0u;
    {
        const bool branch_taken_0x22f0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0e0) {
            ctx->pc = 0x22F18Cu;
            goto label_22f18c;
        }
    }
    ctx->pc = 0x22F0E8u;
    // 0x22f0e8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22F0E8u;
    SET_GPR_U32(ctx, 31, 0x22F0F0u);
    ctx->pc = 0x22F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0E8u;
            // 0x22f0ec: 0xc60c002c  lwc1        $f12, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0F0u; }
        if (ctx->pc != 0x22F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0F0u; }
        if (ctx->pc != 0x22F0F0u) { return; }
    }
    ctx->pc = 0x22F0F0u;
label_22f0f0:
    // 0x22f0f0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x22f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22f0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f0f8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x22f0f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f0fc: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x22f0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f100: 0x0  nop
    ctx->pc = 0x22f100u;
    // NOP
    // 0x22f104: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22F104u;
    {
        const bool branch_taken_0x22f104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f104) {
            ctx->pc = 0x22F110u;
            goto label_22f110;
        }
    }
    ctx->pc = 0x22F10Cu;
    // 0x22f10c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x22f10cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_22f110:
    // 0x22f110: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F110u;
    SET_GPR_U32(ctx, 31, 0x22F118u);
    ctx->pc = 0x22F114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F110u;
            // 0x22f114: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F118u; }
        if (ctx->pc != 0x22F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F118u; }
        if (ctx->pc != 0x22F118u) { return; }
    }
    ctx->pc = 0x22F118u;
label_22f118:
    // 0x22f118: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x22f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f11c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F11Cu;
    SET_GPR_U32(ctx, 31, 0x22F124u);
    ctx->pc = 0x22F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F11Cu;
            // 0x22f120: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F124u; }
        if (ctx->pc != 0x22F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F124u; }
        if (ctx->pc != 0x22F124u) { return; }
    }
    ctx->pc = 0x22F124u;
label_22f124:
    // 0x22f124: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x22f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f128: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F128u;
    SET_GPR_U32(ctx, 31, 0x22F130u);
    ctx->pc = 0x22F12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F128u;
            // 0x22f12c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F130u; }
        if (ctx->pc != 0x22F130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F130u; }
        if (ctx->pc != 0x22F130u) { return; }
    }
    ctx->pc = 0x22F130u;
label_22f130:
    // 0x22f130: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f134: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F134u;
    SET_GPR_U32(ctx, 31, 0x22F13Cu);
    ctx->pc = 0x22F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F134u;
            // 0x22f138: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F13Cu; }
        if (ctx->pc != 0x22F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F13Cu; }
        if (ctx->pc != 0x22F13Cu) { return; }
    }
    ctx->pc = 0x22F13Cu;
label_22f13c:
    // 0x22f13c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22f13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f140: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f144: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22f144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f148: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22f148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f14c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22F14Cu;
    SET_GPR_U32(ctx, 31, 0x22F154u);
    ctx->pc = 0x22F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F14Cu;
            // 0x22f150: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F154u; }
        if (ctx->pc != 0x22F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F154u; }
        if (ctx->pc != 0x22F154u) { return; }
    }
    ctx->pc = 0x22F154u;
label_22f154:
    // 0x22f154: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f15c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F15Cu;
    SET_GPR_U32(ctx, 31, 0x22F164u);
    ctx->pc = 0x22F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F15Cu;
            // 0x22f160: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F164u; }
        if (ctx->pc != 0x22F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F164u; }
        if (ctx->pc != 0x22F164u) { return; }
    }
    ctx->pc = 0x22F164u;
label_22f164:
    // 0x22f164: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f168: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22F168u;
    SET_GPR_U32(ctx, 31, 0x22F170u);
    ctx->pc = 0x22F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F168u;
            // 0x22f16c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F170u; }
        if (ctx->pc != 0x22F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F170u; }
        if (ctx->pc != 0x22F170u) { return; }
    }
    ctx->pc = 0x22F170u;
label_22f170:
    // 0x22f170: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f174: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f178: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F178u;
    SET_GPR_U32(ctx, 31, 0x22F180u);
    ctx->pc = 0x22F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F178u;
            // 0x22f17c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F180u; }
        if (ctx->pc != 0x22F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F180u; }
        if (ctx->pc != 0x22F180u) { return; }
    }
    ctx->pc = 0x22F180u;
label_22f180:
    // 0x22f180: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f184: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22F184u;
    SET_GPR_U32(ctx, 31, 0x22F18Cu);
    ctx->pc = 0x22F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F184u;
            // 0x22f188: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F18Cu; }
        if (ctx->pc != 0x22F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F18Cu; }
        if (ctx->pc != 0x22F18Cu) { return; }
    }
    ctx->pc = 0x22F18Cu;
label_22f18c:
    // 0x22f18c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x22f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f190: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
    // 0x22f194: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x22f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f198: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x22f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22f19c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x22f1a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22f1a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22f1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22f1a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f1ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22f1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1b8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x22f1b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x22f1bc: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x22F1BCu;
    SET_GPR_U32(ctx, 31, 0x22F1C4u);
    ctx->pc = 0x22F1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1BCu;
            // 0x22f1c0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1C4u; }
        if (ctx->pc != 0x22F1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1C4u; }
        if (ctx->pc != 0x22F1C4u) { return; }
    }
    ctx->pc = 0x22F1C4u;
label_22f1c4:
    // 0x22f1c4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22F1C4u;
    {
        const bool branch_taken_0x22f1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1C4u;
            // 0x22f1c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1c4) {
            ctx->pc = 0x22F284u;
            goto label_22f284;
        }
    }
    ctx->pc = 0x22F1CCu;
    // 0x22f1cc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22F1CCu;
    SET_GPR_U32(ctx, 31, 0x22F1D4u);
    ctx->pc = 0x22F1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1CCu;
            // 0x22f1d0: 0xc60c002c  lwc1        $f12, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1D4u; }
        if (ctx->pc != 0x22F1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1D4u; }
        if (ctx->pc != 0x22F1D4u) { return; }
    }
    ctx->pc = 0x22F1D4u;
label_22f1d4:
    // 0x22f1d4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x22f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f1d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22f1d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f1dc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x22f1dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f1e0: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x22f1e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f1e4: 0x0  nop
    ctx->pc = 0x22f1e4u;
    // NOP
    // 0x22f1e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22F1E8u;
    {
        const bool branch_taken_0x22f1e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1E8u;
            // 0x22f1ec: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1e8) {
            ctx->pc = 0x22F1F8u;
            goto label_22f1f8;
        }
    }
    ctx->pc = 0x22F1F0u;
    // 0x22f1f0: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x22f1f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x22f1f4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_22f1f8:
    // 0x22f1f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22f1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f200: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x22f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f204: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F204u;
    SET_GPR_U32(ctx, 31, 0x22F20Cu);
    ctx->pc = 0x22F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F204u;
            // 0x22f208: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F20Cu; }
        if (ctx->pc != 0x22F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F20Cu; }
        if (ctx->pc != 0x22F20Cu) { return; }
    }
    ctx->pc = 0x22F20Cu;
label_22f20c:
    // 0x22f20c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x22f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f210: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F210u;
    SET_GPR_U32(ctx, 31, 0x22F218u);
    ctx->pc = 0x22F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F210u;
            // 0x22f214: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F218u; }
        if (ctx->pc != 0x22F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F218u; }
        if (ctx->pc != 0x22F218u) { return; }
    }
    ctx->pc = 0x22F218u;
label_22f218:
    // 0x22f218: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x22f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f21c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F21Cu;
    SET_GPR_U32(ctx, 31, 0x22F224u);
    ctx->pc = 0x22F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F21Cu;
            // 0x22f220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F224u; }
        if (ctx->pc != 0x22F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F224u; }
        if (ctx->pc != 0x22F224u) { return; }
    }
    ctx->pc = 0x22F224u;
label_22f224:
    // 0x22f224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f228: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F228u;
    SET_GPR_U32(ctx, 31, 0x22F230u);
    ctx->pc = 0x22F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F228u;
            // 0x22f22c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F230u; }
        if (ctx->pc != 0x22F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F230u; }
        if (ctx->pc != 0x22F230u) { return; }
    }
    ctx->pc = 0x22F230u;
label_22f230:
    // 0x22f230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22f234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f238: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22f238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f23c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22f23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f240: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22F240u;
    SET_GPR_U32(ctx, 31, 0x22F248u);
    ctx->pc = 0x22F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F240u;
            // 0x22f244: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F248u; }
        if (ctx->pc != 0x22F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F248u; }
        if (ctx->pc != 0x22F248u) { return; }
    }
    ctx->pc = 0x22F248u;
label_22f248:
    // 0x22f248: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f250: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F250u;
    SET_GPR_U32(ctx, 31, 0x22F258u);
    ctx->pc = 0x22F254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F250u;
            // 0x22f254: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F258u; }
        if (ctx->pc != 0x22F258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F258u; }
        if (ctx->pc != 0x22F258u) { return; }
    }
    ctx->pc = 0x22F258u;
label_22f258:
    // 0x22f258: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f25c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22F25Cu;
    SET_GPR_U32(ctx, 31, 0x22F264u);
    ctx->pc = 0x22F260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F25Cu;
            // 0x22f260: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F264u; }
        if (ctx->pc != 0x22F264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F264u; }
        if (ctx->pc != 0x22F264u) { return; }
    }
    ctx->pc = 0x22F264u;
label_22f264:
    // 0x22f264: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f268: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f26c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F26Cu;
    SET_GPR_U32(ctx, 31, 0x22F274u);
    ctx->pc = 0x22F270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F26Cu;
            // 0x22f270: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F274u; }
        if (ctx->pc != 0x22F274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F274u; }
        if (ctx->pc != 0x22F274u) { return; }
    }
    ctx->pc = 0x22F274u;
label_22f274:
    // 0x22f274: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f278: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22F278u;
    SET_GPR_U32(ctx, 31, 0x22F280u);
    ctx->pc = 0x22F27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F278u;
            // 0x22f27c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F280u; }
        if (ctx->pc != 0x22F280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F280u; }
        if (ctx->pc != 0x22F280u) { return; }
    }
    ctx->pc = 0x22F280u;
label_22f280:
    // 0x22f280: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22f284:
    // 0x22f284: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22F284u;
    SET_GPR_U32(ctx, 31, 0x22F28Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F28Cu; }
        if (ctx->pc != 0x22F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F28Cu; }
        if (ctx->pc != 0x22F28Cu) { return; }
    }
    ctx->pc = 0x22F28Cu;
label_22f28c:
    // 0x22f28c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f290: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f294: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22f294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f298: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22f298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f29c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f2a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22f2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2A4u;
            // 0x22f2a8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F2ACu;
}
