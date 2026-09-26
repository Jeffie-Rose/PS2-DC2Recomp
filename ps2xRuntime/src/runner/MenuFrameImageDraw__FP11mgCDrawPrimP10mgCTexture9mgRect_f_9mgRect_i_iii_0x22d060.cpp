#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFrameImageDraw__FP11mgCDrawPrimP10mgCTexture9mgRect<f>9mgRect<i>iii
// Address: 0x22d060 - 0x22d3ac
void MenuFrameImageDraw__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_iii_0x22d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFrameImageDraw__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_iii_0x22d060");
#endif

    switch (ctx->pc) {
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d108u: goto label_22d108;
        case 0x22d114u: goto label_22d114;
        case 0x22d120u: goto label_22d120;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d238u: goto label_22d238;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d264u: goto label_22d264;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d298u: goto label_22d298;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d324u: goto label_22d324;
        case 0x22d344u: goto label_22d344;
        case 0x22d368u: goto label_22d368;
        case 0x22d374u: goto label_22d374;
        case 0x22d380u: goto label_22d380;
        default: break;
    }

    ctx->pc = 0x22d060u;

    // 0x22d060: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22d064: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22d068: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22d06c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22d070: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22d074: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22d078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22d07c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d084: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22d084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d08c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22d090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d094: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22d098: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x22d098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22d09c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x22d09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x22d0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x22d0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x22d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x22d0ac: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x22d0acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22d0b0: 0x126000b3  beqz        $s3, . + 4 + (0xB3 << 2)
    ctx->pc = 0x22D0B0u;
    {
        const bool branch_taken_0x22d0b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0B0u;
            // 0x22d0b4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0b0) {
            ctx->pc = 0x22D380u;
            goto label_22d380;
        }
    }
    ctx->pc = 0x22D0B8u;
    // 0x22d0b8: 0x128000b1  beqz        $s4, . + 4 + (0xB1 << 2)
    ctx->pc = 0x22D0B8u;
    {
        const bool branch_taken_0x22d0b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0B8u;
            // 0x22d0bc: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0b8) {
            ctx->pc = 0x22D380u;
            goto label_22d380;
        }
    }
    ctx->pc = 0x22D0C0u;
    // 0x22d0c0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22d0c4: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D0C4u;
    {
        const bool branch_taken_0x22d0c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0C4u;
            // 0x22d0c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0c4) {
            ctx->pc = 0x22D0D0u;
            goto label_22d0d0;
        }
    }
    ctx->pc = 0x22D0CCu;
    // 0x22d0cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22d0d0:
    // 0x22d0d0: 0x2602ffd1  addiu       $v0, $s0, -0x2F
    ctx->pc = 0x22d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967249));
    // 0x22d0d4: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x22d0d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22d0d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D0D8u;
    {
        const bool branch_taken_0x22d0d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0D8u;
            // 0x22d0dc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d8) {
            ctx->pc = 0x22D0E8u;
            goto label_22d0e8;
        }
    }
    ctx->pc = 0x22D0E0u;
    // 0x22d0e0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D0E0u;
    {
        const bool branch_taken_0x22d0e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0E0u;
            // 0x22d0e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0e0) {
            ctx->pc = 0x22D0F4u;
            goto label_22d0f4;
        }
    }
    ctx->pc = 0x22D0E8u;
label_22d0e8:
    // 0x22d0e8: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22d0ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22d0f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22d0f4:
    // 0x22d0f4: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22D0F4u;
    SET_GPR_U32(ctx, 31, 0x22D0FCu);
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0FCu; }
        if (ctx->pc != 0x22D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0FCu; }
        if (ctx->pc != 0x22D0FCu) { return; }
    }
    ctx->pc = 0x22D0FCu;
label_22d0fc:
    // 0x22d0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d100: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x22D100u;
    SET_GPR_U32(ctx, 31, 0x22D108u);
    ctx->pc = 0x22D104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D100u;
            // 0x22d104: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D108u; }
        if (ctx->pc != 0x22D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D108u; }
        if (ctx->pc != 0x22D108u) { return; }
    }
    ctx->pc = 0x22D108u;
label_22d108:
    // 0x22d108: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22d108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d10c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22D10Cu;
    SET_GPR_U32(ctx, 31, 0x22D114u);
    ctx->pc = 0x22D110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D10Cu;
            // 0x22d110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D114u; }
        if (ctx->pc != 0x22D114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D114u; }
        if (ctx->pc != 0x22D114u) { return; }
    }
    ctx->pc = 0x22D114u;
label_22d114:
    // 0x22d114: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d118: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22D118u;
    SET_GPR_U32(ctx, 31, 0x22D120u);
    ctx->pc = 0x22D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D118u;
            // 0x22d11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D120u; }
        if (ctx->pc != 0x22D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D120u; }
        if (ctx->pc != 0x22D120u) { return; }
    }
    ctx->pc = 0x22D120u;
label_22d120:
    // 0x22d120: 0xc780946c  lwc1        $f0, -0x6B94($gp)
    ctx->pc = 0x22d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d124: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x22d124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22d128: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x22d12c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x22d130: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x22d134: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x22d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22d138: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x22d138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x22d13c: 0xc7809470  lwc1        $f0, -0x6B90($gp)
    ctx->pc = 0x22d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d140: 0xa3b200b0  sb          $s2, 0xB0($sp)
    ctx->pc = 0x22d140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d144: 0xa3b200b1  sb          $s2, 0xB1($sp)
    ctx->pc = 0x22d144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 177), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d148: 0xa3b200b2  sb          $s2, 0xB2($sp)
    ctx->pc = 0x22d148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 178), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d14c: 0xa3b100b3  sb          $s1, 0xB3($sp)
    ctx->pc = 0x22d14cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 17));
    // 0x22d150: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x22d150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x22d154: 0xc7809474  lwc1        $f0, -0x6B8C($gp)
    ctx->pc = 0x22d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d158: 0xa3b200b4  sb          $s2, 0xB4($sp)
    ctx->pc = 0x22d158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 180), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d15c: 0xa3b200b5  sb          $s2, 0xB5($sp)
    ctx->pc = 0x22d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 181), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d160: 0xa3b200b6  sb          $s2, 0xB6($sp)
    ctx->pc = 0x22d160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 182), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d164: 0xa3b100b7  sb          $s1, 0xB7($sp)
    ctx->pc = 0x22d164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 17));
    // 0x22d168: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x22d168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22d16c: 0xc7809478  lwc1        $f0, -0x6B88($gp)
    ctx->pc = 0x22d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d170: 0xa3b200b8  sb          $s2, 0xB8($sp)
    ctx->pc = 0x22d170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d174: 0xa3b200b9  sb          $s2, 0xB9($sp)
    ctx->pc = 0x22d174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 185), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d178: 0xa3b200ba  sb          $s2, 0xBA($sp)
    ctx->pc = 0x22d178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 186), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d17c: 0xa3b100bb  sb          $s1, 0xBB($sp)
    ctx->pc = 0x22d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 187), (uint8_t)GPR_U32(ctx, 17));
    // 0x22d180: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22d180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22d184: 0xa3b200bc  sb          $s2, 0xBC($sp)
    ctx->pc = 0x22d184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 188), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d188: 0xa3b200bd  sb          $s2, 0xBD($sp)
    ctx->pc = 0x22d188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 189), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d18c: 0xa3b200be  sb          $s2, 0xBE($sp)
    ctx->pc = 0x22d18cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 190), (uint8_t)GPR_U32(ctx, 18));
    // 0x22d190: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D190u;
    {
        const bool branch_taken_0x22d190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D190u;
            // 0x22d194: 0xa3b100bf  sb          $s1, 0xBF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d190) {
            ctx->pc = 0x22D1A4u;
            goto label_22d1a4;
        }
    }
    ctx->pc = 0x22D198u;
    // 0x22d198: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x22d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x22d19c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22D19Cu;
    {
        const bool branch_taken_0x22d19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D19Cu;
            // 0x22d1a0: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d19c) {
            ctx->pc = 0x22D1D4u;
            goto label_22d1d4;
        }
    }
    ctx->pc = 0x22D1A4u;
label_22d1a4:
    // 0x22d1a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x22d1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22d1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1b4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D1B4u;
    SET_GPR_U32(ctx, 31, 0x22D1BCu);
    ctx->pc = 0x22D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1B4u;
            // 0x22d1b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1BCu; }
        if (ctx->pc != 0x22D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1BCu; }
        if (ctx->pc != 0x22D1BCu) { return; }
    }
    ctx->pc = 0x22D1BCu;
label_22d1bc:
    // 0x22d1bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22d1c4: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x22D1C4u;
    SET_GPR_U32(ctx, 31, 0x22D1CCu);
    ctx->pc = 0x22D1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1C4u;
            // 0x22d1c8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1CCu; }
        if (ctx->pc != 0x22D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1CCu; }
        if (ctx->pc != 0x22D1CCu) { return; }
    }
    ctx->pc = 0x22D1CCu;
label_22d1cc:
    // 0x22d1cc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x22D1CCu;
    {
        const bool branch_taken_0x22d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1CCu;
            // 0x22d1d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1cc) {
            ctx->pc = 0x22D36Cu;
            goto label_22d36c;
        }
    }
    ctx->pc = 0x22D1D4u;
label_22d1d4:
    // 0x22d1d4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D1D4u;
    {
        const bool branch_taken_0x22d1d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1D4u;
            // 0x22d1d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1d4) {
            ctx->pc = 0x22D1E8u;
            goto label_22d1e8;
        }
    }
    ctx->pc = 0x22D1DCu;
    // 0x22d1dc: 0xa3a000b7  sb          $zero, 0xB7($sp)
    ctx->pc = 0x22d1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d1e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22D1E0u;
    {
        const bool branch_taken_0x22d1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1E0u;
            // 0x22d1e4: 0xa3a000b3  sb          $zero, 0xB3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1e0) {
            ctx->pc = 0x22D220u;
            goto label_22d220;
        }
    }
    ctx->pc = 0x22D1E8u;
label_22d1e8:
    // 0x22d1e8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D1E8u;
    {
        const bool branch_taken_0x22d1e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1E8u;
            // 0x22d1ec: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1e8) {
            ctx->pc = 0x22D1FCu;
            goto label_22d1fc;
        }
    }
    ctx->pc = 0x22D1F0u;
    // 0x22d1f0: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x22d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d1f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22D1F4u;
    {
        const bool branch_taken_0x22d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1F4u;
            // 0x22d1f8: 0xa3a000bb  sb          $zero, 0xBB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 187), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1f4) {
            ctx->pc = 0x22D220u;
            goto label_22d220;
        }
    }
    ctx->pc = 0x22D1FCu;
label_22d1fc:
    // 0x22d1fc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D1FCu;
    {
        const bool branch_taken_0x22d1fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1FCu;
            // 0x22d200: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1fc) {
            ctx->pc = 0x22D210u;
            goto label_22d210;
        }
    }
    ctx->pc = 0x22D204u;
    // 0x22d204: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x22d204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22D208u;
    {
        const bool branch_taken_0x22d208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D208u;
            // 0x22d20c: 0xa3a000b7  sb          $zero, 0xB7($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d208) {
            ctx->pc = 0x22D220u;
            goto label_22d220;
        }
    }
    ctx->pc = 0x22D210u;
label_22d210:
    // 0x22d210: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D210u;
    {
        const bool branch_taken_0x22d210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d210) {
            ctx->pc = 0x22D220u;
            goto label_22d220;
        }
    }
    ctx->pc = 0x22D218u;
    // 0x22d218: 0xa3a000bb  sb          $zero, 0xBB($sp)
    ctx->pc = 0x22d218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 187), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d21c: 0xa3a000b3  sb          $zero, 0xB3($sp)
    ctx->pc = 0x22d21cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 0));
label_22d220:
    // 0x22d220: 0x93a500b0  lbu         $a1, 0xB0($sp)
    ctx->pc = 0x22d220u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22d224: 0x93a600b1  lbu         $a2, 0xB1($sp)
    ctx->pc = 0x22d224u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 177)));
    // 0x22d228: 0x93a700b2  lbu         $a3, 0xB2($sp)
    ctx->pc = 0x22d228u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 178)));
    // 0x22d22c: 0x93a800b3  lbu         $t0, 0xB3($sp)
    ctx->pc = 0x22d22cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    // 0x22d230: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D230u;
    SET_GPR_U32(ctx, 31, 0x22D238u);
    ctx->pc = 0x22D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D230u;
            // 0x22d234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D238u; }
        if (ctx->pc != 0x22D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D238u; }
        if (ctx->pc != 0x22D238u) { return; }
    }
    ctx->pc = 0x22D238u;
label_22d238:
    // 0x22d238: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x22d23c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d240: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22d240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d244: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D244u;
    SET_GPR_U32(ctx, 31, 0x22D24Cu);
    ctx->pc = 0x22D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D244u;
            // 0x22d248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D24Cu; }
        if (ctx->pc != 0x22D24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D24Cu; }
        if (ctx->pc != 0x22D24Cu) { return; }
    }
    ctx->pc = 0x22D24Cu;
label_22d24c:
    // 0x22d24c: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x22d24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x22d250: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x22d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d254: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x22d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22d258: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d25c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D25Cu;
    SET_GPR_U32(ctx, 31, 0x22D264u);
    ctx->pc = 0x22D260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D25Cu;
            // 0x22d260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D264u; }
        if (ctx->pc != 0x22D264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D264u; }
        if (ctx->pc != 0x22D264u) { return; }
    }
    ctx->pc = 0x22D264u;
label_22d264:
    // 0x22d264: 0x93a500b4  lbu         $a1, 0xB4($sp)
    ctx->pc = 0x22d264u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x22d268: 0x93a600b5  lbu         $a2, 0xB5($sp)
    ctx->pc = 0x22d268u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 181)));
    // 0x22d26c: 0x93a700b6  lbu         $a3, 0xB6($sp)
    ctx->pc = 0x22d26cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 182)));
    // 0x22d270: 0x93a800b7  lbu         $t0, 0xB7($sp)
    ctx->pc = 0x22d270u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 183)));
    // 0x22d274: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D274u;
    SET_GPR_U32(ctx, 31, 0x22D27Cu);
    ctx->pc = 0x22D278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D274u;
            // 0x22d278: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D27Cu; }
        if (ctx->pc != 0x22D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D27Cu; }
        if (ctx->pc != 0x22D27Cu) { return; }
    }
    ctx->pc = 0x22D27Cu;
label_22d27c:
    // 0x22d27c: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x22d280: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d284: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x22d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22d288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d28c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d290: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D290u;
    SET_GPR_U32(ctx, 31, 0x22D298u);
    ctx->pc = 0x22D294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D290u;
            // 0x22d294: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D298u; }
        if (ctx->pc != 0x22D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D298u; }
        if (ctx->pc != 0x22D298u) { return; }
    }
    ctx->pc = 0x22D298u;
label_22d298:
    // 0x22d298: 0x27b50098  addiu       $s5, $sp, 0x98
    ctx->pc = 0x22d298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x22d29c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d2a0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x22d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d2a4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x22d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d2a8: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x22d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22d2ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d2b0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D2B0u;
    SET_GPR_U32(ctx, 31, 0x22D2B8u);
    ctx->pc = 0x22D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2B0u;
            // 0x22d2b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2B8u; }
        if (ctx->pc != 0x22D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2B8u; }
        if (ctx->pc != 0x22D2B8u) { return; }
    }
    ctx->pc = 0x22D2B8u;
label_22d2b8:
    // 0x22d2b8: 0x93a500b8  lbu         $a1, 0xB8($sp)
    ctx->pc = 0x22d2b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22d2bc: 0x93a600b9  lbu         $a2, 0xB9($sp)
    ctx->pc = 0x22d2bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 185)));
    // 0x22d2c0: 0x93a700ba  lbu         $a3, 0xBA($sp)
    ctx->pc = 0x22d2c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 186)));
    // 0x22d2c4: 0x93a800bb  lbu         $t0, 0xBB($sp)
    ctx->pc = 0x22d2c4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 187)));
    // 0x22d2c8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D2C8u;
    SET_GPR_U32(ctx, 31, 0x22D2D0u);
    ctx->pc = 0x22D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2C8u;
            // 0x22d2cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2D0u; }
        if (ctx->pc != 0x22D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2D0u; }
        if (ctx->pc != 0x22D2D0u) { return; }
    }
    ctx->pc = 0x22D2D0u;
label_22d2d0:
    // 0x22d2d0: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x22d2d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x22d2d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d2d8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x22d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22d2dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d2e0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d2e4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D2E4u;
    SET_GPR_U32(ctx, 31, 0x22D2ECu);
    ctx->pc = 0x22D2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2E4u;
            // 0x22d2e8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2ECu; }
        if (ctx->pc != 0x22D2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2ECu; }
        if (ctx->pc != 0x22D2ECu) { return; }
    }
    ctx->pc = 0x22D2ECu;
label_22d2ec:
    // 0x22d2ec: 0x27b2009c  addiu       $s2, $sp, 0x9C
    ctx->pc = 0x22d2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x22d2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d2f4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d2f8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d2fc: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x22d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d300: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d304: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D304u;
    SET_GPR_U32(ctx, 31, 0x22D30Cu);
    ctx->pc = 0x22D308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D304u;
            // 0x22d308: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D30Cu; }
        if (ctx->pc != 0x22D30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D30Cu; }
        if (ctx->pc != 0x22D30Cu) { return; }
    }
    ctx->pc = 0x22D30Cu;
label_22d30c:
    // 0x22d30c: 0x93a500bc  lbu         $a1, 0xBC($sp)
    ctx->pc = 0x22d30cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x22d310: 0x93a600bd  lbu         $a2, 0xBD($sp)
    ctx->pc = 0x22d310u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 189)));
    // 0x22d314: 0x93a700be  lbu         $a3, 0xBE($sp)
    ctx->pc = 0x22d314u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x22d318: 0x93a800bf  lbu         $t0, 0xBF($sp)
    ctx->pc = 0x22d318u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 191)));
    // 0x22d31c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D31Cu;
    SET_GPR_U32(ctx, 31, 0x22D324u);
    ctx->pc = 0x22D320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D31Cu;
            // 0x22d320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D324u; }
        if (ctx->pc != 0x22D324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D324u; }
        if (ctx->pc != 0x22D324u) { return; }
    }
    ctx->pc = 0x22D324u;
label_22d324:
    // 0x22d324: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x22d324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22d328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d32c: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x22d32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d330: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d334: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x22d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22d338: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x22d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22d33c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D33Cu;
    SET_GPR_U32(ctx, 31, 0x22D344u);
    ctx->pc = 0x22D340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D33Cu;
            // 0x22d340: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D344u; }
        if (ctx->pc != 0x22D344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D344u; }
        if (ctx->pc != 0x22D344u) { return; }
    }
    ctx->pc = 0x22D344u;
label_22d344:
    // 0x22d344: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x22d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d348: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d34c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x22d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d350: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d354: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d358: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d35c: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x22d35cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x22d360: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D360u;
    SET_GPR_U32(ctx, 31, 0x22D368u);
    ctx->pc = 0x22D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D360u;
            // 0x22d364: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D368u; }
        if (ctx->pc != 0x22D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D368u; }
        if (ctx->pc != 0x22D368u) { return; }
    }
    ctx->pc = 0x22D368u;
label_22d368:
    // 0x22d368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22d36c:
    // 0x22d36c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22D36Cu;
    SET_GPR_U32(ctx, 31, 0x22D374u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D374u; }
        if (ctx->pc != 0x22D374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D374u; }
        if (ctx->pc != 0x22D374u) { return; }
    }
    ctx->pc = 0x22D374u;
label_22d374:
    // 0x22d374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d378: 0xc04b154  jal         func_12C550
    ctx->pc = 0x22D378u;
    SET_GPR_U32(ctx, 31, 0x22D380u);
    ctx->pc = 0x22D37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D378u;
            // 0x22d37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C550u;
    if (runtime->hasFunction(0x12C550u)) {
        auto targetFn = runtime->lookupFunction(0x12C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D380u; }
        if (ctx->pc != 0x22D380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__10mgCTextureFi_0x12c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D380u; }
        if (ctx->pc != 0x22D380u) { return; }
    }
    ctx->pc = 0x22D380u;
label_22d380:
    // 0x22d380: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22d384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22d388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d38c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22d38cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22d390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22D3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3A4u;
            // 0x22d3a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D3ACu;
}
