#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CBubbleFv
// Address: 0x20cfd0 - 0x20d124
void Draw__7CBubbleFv_0x20cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CBubbleFv_0x20cfd0");
#endif

    switch (ctx->pc) {
        case 0x20cffcu: goto label_20cffc;
        case 0x20d008u: goto label_20d008;
        case 0x20d014u: goto label_20d014;
        case 0x20d020u: goto label_20d020;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d038u: goto label_20d038;
        case 0x20d044u: goto label_20d044;
        case 0x20d07cu: goto label_20d07c;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0d8u: goto label_20d0d8;
        case 0x20d0e4u: goto label_20d0e4;
        case 0x20d108u: goto label_20d108;
        default: break;
    }

    ctx->pc = 0x20cfd0u;

    // 0x20cfd0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x20cfd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20cfd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20cfdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20cfe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20cfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20cfe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20cfe8: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x20cfec: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x20CFECu;
    {
        const bool branch_taken_0x20cfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFECu;
            // 0x20cff0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfec) {
            ctx->pc = 0x20D108u;
            goto label_20d108;
        }
    }
    ctx->pc = 0x20CFF4u;
    // 0x20cff4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x20CFF4u;
    SET_GPR_U32(ctx, 31, 0x20CFFCu);
    ctx->pc = 0x20CFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFF4u;
            // 0x20cff8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CFFCu; }
        if (ctx->pc != 0x20CFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CFFCu; }
        if (ctx->pc != 0x20CFFCu) { return; }
    }
    ctx->pc = 0x20CFFCu;
label_20cffc:
    // 0x20cffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d000: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x20D000u;
    SET_GPR_U32(ctx, 31, 0x20D008u);
    ctx->pc = 0x20D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D000u;
            // 0x20d004: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D008u; }
        if (ctx->pc != 0x20D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D008u; }
        if (ctx->pc != 0x20D008u) { return; }
    }
    ctx->pc = 0x20D008u;
label_20d008:
    // 0x20d008: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d00c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x20D00Cu;
    SET_GPR_U32(ctx, 31, 0x20D014u);
    ctx->pc = 0x20D010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D00Cu;
            // 0x20d010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D014u; }
        if (ctx->pc != 0x20D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D014u; }
        if (ctx->pc != 0x20D014u) { return; }
    }
    ctx->pc = 0x20D014u;
label_20d014:
    // 0x20d014: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d018: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x20D018u;
    SET_GPR_U32(ctx, 31, 0x20D020u);
    ctx->pc = 0x20D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D018u;
            // 0x20d01c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D020u; }
        if (ctx->pc != 0x20D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D020u; }
        if (ctx->pc != 0x20D020u) { return; }
    }
    ctx->pc = 0x20D020u;
label_20d020:
    // 0x20d020: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d024: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x20D024u;
    SET_GPR_U32(ctx, 31, 0x20D02Cu);
    ctx->pc = 0x20D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D024u;
            // 0x20d028: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D02Cu; }
        if (ctx->pc != 0x20D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D02Cu; }
        if (ctx->pc != 0x20D02Cu) { return; }
    }
    ctx->pc = 0x20D02Cu;
label_20d02c:
    // 0x20d02c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x20d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x20d030: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x20D030u;
    SET_GPR_U32(ctx, 31, 0x20D038u);
    ctx->pc = 0x20D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D030u;
            // 0x20d034: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D038u; }
        if (ctx->pc != 0x20D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D038u; }
        if (ctx->pc != 0x20D038u) { return; }
    }
    ctx->pc = 0x20D038u;
label_20d038:
    // 0x20d038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20d038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d03c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20D03Cu;
    {
        const bool branch_taken_0x20d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D03Cu;
            // 0x20d040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d03c) {
            ctx->pc = 0x20D0F0u;
            goto label_20d0f0;
        }
    }
    ctx->pc = 0x20D044u;
label_20d044:
    // 0x20d044: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x20d048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d04c: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20d050: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x20d050u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x20d054: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20D054u;
    {
        const bool branch_taken_0x20d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D054u;
            // 0x20d058: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d054) {
            ctx->pc = 0x20D0E4u;
            goto label_20d0e4;
        }
    }
    ctx->pc = 0x20D05Cu;
    // 0x20d05c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20d060: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20d064: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x20d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20d068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d06c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x20d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x20d070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d074: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x20D074u;
    SET_GPR_U32(ctx, 31, 0x20D07Cu);
    ctx->pc = 0x20D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D074u;
            // 0x20d078: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D07Cu; }
        if (ctx->pc != 0x20D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D07Cu; }
        if (ctx->pc != 0x20D07Cu) { return; }
    }
    ctx->pc = 0x20D07Cu;
label_20d07c:
    // 0x20d07c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20D07Cu;
    {
        const bool branch_taken_0x20d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d07c) {
            ctx->pc = 0x20D0E4u;
            goto label_20d0e4;
        }
    }
    ctx->pc = 0x20D084u;
    // 0x20d084: 0xc0a248c  jal         func_289230
    ctx->pc = 0x20D084u;
    SET_GPR_U32(ctx, 31, 0x20D08Cu);
    ctx->pc = 0x20D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D084u;
            // 0x20d088: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D08Cu; }
        if (ctx->pc != 0x20D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D08Cu; }
        if (ctx->pc != 0x20D08Cu) { return; }
    }
    ctx->pc = 0x20D08Cu;
label_20d08c:
    // 0x20d08c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20d090: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20d090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d094: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d098: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20d098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d09c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x20D09Cu;
    SET_GPR_U32(ctx, 31, 0x20D0A4u);
    ctx->pc = 0x20D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D09Cu;
            // 0x20d0a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0A4u; }
        if (ctx->pc != 0x20D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0A4u; }
        if (ctx->pc != 0x20D0A4u) { return; }
    }
    ctx->pc = 0x20D0A4u;
label_20d0a4:
    // 0x20d0a4: 0x8665002c  lh          $a1, 0x2C($s3)
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x20d0a8: 0x8666002e  lh          $a2, 0x2E($s3)
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x20d0ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x20D0ACu;
    SET_GPR_U32(ctx, 31, 0x20D0B4u);
    ctx->pc = 0x20D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0ACu;
            // 0x20d0b0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0B4u; }
        if (ctx->pc != 0x20D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0B4u; }
        if (ctx->pc != 0x20D0B4u) { return; }
    }
    ctx->pc = 0x20D0B4u;
label_20d0b4:
    // 0x20d0b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d0b8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x20D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0B8u;
            // 0x20d0bc: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0C0u; }
        if (ctx->pc != 0x20D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0C0u; }
        if (ctx->pc != 0x20D0C0u) { return; }
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0x8663002c  lh          $v1, 0x2C($s3)
    ctx->pc = 0x20d0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x20d0c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d0c8: 0x8662002e  lh          $v0, 0x2E($s3)
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x20d0cc: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x20d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20d0d0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x20D0D0u;
    SET_GPR_U32(ctx, 31, 0x20D0D8u);
    ctx->pc = 0x20D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0D0u;
            // 0x20d0d4: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0D8u; }
        if (ctx->pc != 0x20D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0D8u; }
        if (ctx->pc != 0x20D0D8u) { return; }
    }
    ctx->pc = 0x20D0D8u;
label_20d0d8:
    // 0x20d0d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d0dc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x20D0DCu;
    SET_GPR_U32(ctx, 31, 0x20D0E4u);
    ctx->pc = 0x20D0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0DCu;
            // 0x20d0e0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0E4u; }
        if (ctx->pc != 0x20D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0E4u; }
        if (ctx->pc != 0x20D0E4u) { return; }
    }
    ctx->pc = 0x20D0E4u;
label_20d0e4:
    // 0x20d0e4: 0x0  nop
    ctx->pc = 0x20d0e4u;
    // NOP
    // 0x20d0e8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x20d0ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20d0f0:
    // 0x20d0f0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x20d0f4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x20d0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20d0f8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x20D0F8u;
    {
        const bool branch_taken_0x20d0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0F8u;
            // 0x20d0fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0f8) {
            ctx->pc = 0x20D044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d044;
        }
    }
    ctx->pc = 0x20D100u;
    // 0x20d100: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x20D100u;
    SET_GPR_U32(ctx, 31, 0x20D108u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D108u; }
        if (ctx->pc != 0x20D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D108u; }
        if (ctx->pc != 0x20D108u) { return; }
    }
    ctx->pc = 0x20D108u;
label_20d108:
    // 0x20d108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d10c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20d10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D11Cu;
            // 0x20d120: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D124u;
}
