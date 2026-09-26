#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texTEX_ANIME_DATA_END__FP9SPI_STACKi
// Address: 0x13e1a0 - 0x13e33c
void texTEX_ANIME_DATA_END__FP9SPI_STACKi_0x13e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texTEX_ANIME_DATA_END__FP9SPI_STACKi_0x13e1a0");
#endif

    switch (ctx->pc) {
        case 0x13e1d0u: goto label_13e1d0;
        case 0x13e218u: goto label_13e218;
        case 0x13e228u: goto label_13e228;
        case 0x13e23cu: goto label_13e23c;
        case 0x13e268u: goto label_13e268;
        case 0x13e288u: goto label_13e288;
        case 0x13e2b8u: goto label_13e2b8;
        case 0x13e2d4u: goto label_13e2d4;
        case 0x13e2ecu: goto label_13e2ec;
        case 0x13e324u: goto label_13e324;
        default: break;
    }

    ctx->pc = 0x13e1a0u;

    // 0x13e1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e1ac: 0x8f858748  lw          $a1, -0x78B8($gp)
    ctx->pc = 0x13e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936392)));
    // 0x13e1b0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E1B0u;
    {
        const bool branch_taken_0x13e1b0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x13e1b0) {
            ctx->pc = 0x13E1C4u;
            goto label_13e1c4;
        }
    }
    ctx->pc = 0x13E1B8u;
    // 0x13e1b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e1bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x13E1BCu;
    {
        const bool branch_taken_0x13e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e1bc) {
            ctx->pc = 0x13E328u;
            goto label_13e328;
        }
    }
    ctx->pc = 0x13E1C4u;
label_13e1c4:
    // 0x13e1c4: 0x8f848738  lw          $a0, -0x78C8($gp)
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x13e1c8: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x13E1C8u;
    SET_GPR_U32(ctx, 31, 0x13E1D0u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E1D0u; }
        if (ctx->pc != 0x13E1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E1D0u; }
        if (ctx->pc != 0x13E1D0u) { return; }
    }
    ctx->pc = 0x13E1D0u;
label_13e1d0:
    // 0x13e1d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e1d4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E1D4u;
    {
        const bool branch_taken_0x13e1d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1d4) {
            ctx->pc = 0x13E1E8u;
            goto label_13e1e8;
        }
    }
    ctx->pc = 0x13E1DCu;
    // 0x13e1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e1e0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x13E1E0u;
    {
        const bool branch_taken_0x13e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e1e0) {
            ctx->pc = 0x13E328u;
            goto label_13e328;
        }
    }
    ctx->pc = 0x13E1E8u;
label_13e1e8:
    // 0x13e1e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e1ec: 0xaf82872c  sw          $v0, -0x78D4($gp)
    ctx->pc = 0x13e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 2));
    // 0x13e1f0: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e1f4: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13E1F4u;
    {
        const bool branch_taken_0x13e1f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1f4) {
            ctx->pc = 0x13E274u;
            goto label_13e274;
        }
    }
    ctx->pc = 0x13E1FCu;
    // 0x13e1fc: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x13e200: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13E200u;
    {
        const bool branch_taken_0x13e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e200) {
            ctx->pc = 0x13E250u;
            goto label_13e250;
        }
    }
    ctx->pc = 0x13E208u;
    // 0x13e208: 0x8f84873c  lw          $a0, -0x78C4($gp)
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x13e20c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x13e210: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13E210u;
    SET_GPR_U32(ctx, 31, 0x13E218u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E218u; }
        if (ctx->pc != 0x13E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E218u; }
        if (ctx->pc != 0x13E218u) { return; }
    }
    ctx->pc = 0x13E218u;
label_13e218:
    // 0x13e218: 0x240401e4  addiu       $a0, $zero, 0x1E4
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x13e21c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e220: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x13E220u;
    SET_GPR_U32(ctx, 31, 0x13E228u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E228u; }
        if (ctx->pc != 0x13E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E228u; }
        if (ctx->pc != 0x13E228u) { return; }
    }
    ctx->pc = 0x13E228u;
label_13e228:
    // 0x13e228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E228u;
    {
        const bool branch_taken_0x13e228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e228) {
            ctx->pc = 0x13E23Cu;
            goto label_13e23c;
        }
    }
    ctx->pc = 0x13E230u;
    // 0x13e230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e234: 0xc04f498  jal         func_13D260
    ctx->pc = 0x13E234u;
    SET_GPR_U32(ctx, 31, 0x13E23Cu);
    ctx->pc = 0x13D260u;
    if (runtime->hasFunction(0x13D260u)) {
        auto targetFn = runtime->lookupFunction(0x13D260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E23Cu; }
        if (ctx->pc != 0x13E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCTextureAnimeFv_0x13d260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E23Cu; }
        if (ctx->pc != 0x13E23Cu) { return; }
    }
    ctx->pc = 0x13E23Cu;
label_13e23c:
    // 0x13e23c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13e240: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e244: 0xaf82872c  sw          $v0, -0x78D4($gp)
    ctx->pc = 0x13e244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 2));
    // 0x13e248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E248u;
    {
        const bool branch_taken_0x13e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e248) {
            ctx->pc = 0x13E254u;
            goto label_13e254;
        }
    }
    ctx->pc = 0x13E250u;
label_13e250:
    // 0x13e250: 0xaf82872c  sw          $v0, -0x78D4($gp)
    ctx->pc = 0x13e250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 2));
label_13e254:
    // 0x13e254: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e258: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E258u;
    {
        const bool branch_taken_0x13e258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e258) {
            ctx->pc = 0x13E28Cu;
            goto label_13e28c;
        }
    }
    ctx->pc = 0x13E260u;
    // 0x13e260: 0xc04f4b4  jal         func_13D2D0
    ctx->pc = 0x13E260u;
    SET_GPR_U32(ctx, 31, 0x13E268u);
    ctx->pc = 0x13D2D0u;
    if (runtime->hasFunction(0x13D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E268u; }
        if (ctx->pc != 0x13E268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmptyGroup__15mgCTextureAnimeFv_0x13d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E268u; }
        if (ctx->pc != 0x13E268u) { return; }
    }
    ctx->pc = 0x13E268u;
label_13e268:
    // 0x13e268: 0xaf828734  sw          $v0, -0x78CC($gp)
    ctx->pc = 0x13e268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 2));
    // 0x13e26c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13E26Cu;
    {
        const bool branch_taken_0x13e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e26c) {
            ctx->pc = 0x13E28Cu;
            goto label_13e28c;
        }
    }
    ctx->pc = 0x13E274u;
label_13e274:
    // 0x13e274: 0x8f828734  lw          $v0, -0x78CC($gp)
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
    // 0x13e278: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E278u;
    {
        const bool branch_taken_0x13e278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13e278) {
            ctx->pc = 0x13E28Cu;
            goto label_13e28c;
        }
    }
    ctx->pc = 0x13E280u;
    // 0x13e280: 0xc04f4b4  jal         func_13D2D0
    ctx->pc = 0x13E280u;
    SET_GPR_U32(ctx, 31, 0x13E288u);
    ctx->pc = 0x13D2D0u;
    if (runtime->hasFunction(0x13D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E288u; }
        if (ctx->pc != 0x13E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmptyGroup__15mgCTextureAnimeFv_0x13d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E288u; }
        if (ctx->pc != 0x13E288u) { return; }
    }
    ctx->pc = 0x13E288u;
label_13e288:
    // 0x13e288: 0xaf828734  sw          $v0, -0x78CC($gp)
    ctx->pc = 0x13e288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 2));
label_13e28c:
    // 0x13e28c: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e290: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13E290u;
    {
        const bool branch_taken_0x13e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e290) {
            ctx->pc = 0x13E324u;
            goto label_13e324;
        }
    }
    ctx->pc = 0x13E298u;
    // 0x13e298: 0x8f858734  lw          $a1, -0x78CC($gp)
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
    // 0x13e29c: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x13E29Cu;
    {
        const bool branch_taken_0x13e29c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13e29c) {
            ctx->pc = 0x13E324u;
            goto label_13e324;
        }
    }
    ctx->pc = 0x13E2A4u;
    // 0x13e2a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e2a8: 0xa0250e71  sb          $a1, 0xE71($at)
    ctx->pc = 0x13e2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3697), (uint8_t)GPR_U32(ctx, 5));
    // 0x13e2ac: 0x8f868740  lw          $a2, -0x78C0($gp)
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x13e2b0: 0xc04f4a4  jal         func_13D290
    ctx->pc = 0x13E2B0u;
    SET_GPR_U32(ctx, 31, 0x13E2B8u);
    ctx->pc = 0x13D290u;
    if (runtime->hasFunction(0x13D290u)) {
        auto targetFn = runtime->lookupFunction(0x13D290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2B8u; }
        if (ctx->pc != 0x13E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGroupName__15mgCTextureAnimeFiPc_0x13d290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2B8u; }
        if (ctx->pc != 0x13E2B8u) { return; }
    }
    ctx->pc = 0x13E2B8u;
label_13e2b8:
    // 0x13e2b8: 0x8f828744  lw          $v0, -0x78BC($gp)
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x13e2bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E2BCu;
    {
        const bool branch_taken_0x13e2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2bc) {
            ctx->pc = 0x13E2DCu;
            goto label_13e2dc;
        }
    }
    ctx->pc = 0x13E2C4u;
    // 0x13e2c4: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e2c8: 0x8f858734  lw          $a1, -0x78CC($gp)
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
    // 0x13e2cc: 0xc04f600  jal         func_13D800
    ctx->pc = 0x13E2CCu;
    SET_GPR_U32(ctx, 31, 0x13E2D4u);
    ctx->pc = 0x13D800u;
    if (runtime->hasFunction(0x13D800u)) {
        auto targetFn = runtime->lookupFunction(0x13D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2D4u; }
        if (ctx->pc != 0x13E2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enable__15mgCTextureAnimeFi_0x13d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2D4u; }
        if (ctx->pc != 0x13E2D4u) { return; }
    }
    ctx->pc = 0x13E2D4u;
label_13e2d4:
    // 0x13e2d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E2D4u;
    {
        const bool branch_taken_0x13e2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2d4) {
            ctx->pc = 0x13E2ECu;
            goto label_13e2ec;
        }
    }
    ctx->pc = 0x13E2DCu;
label_13e2dc:
    // 0x13e2dc: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e2e0: 0x8f858734  lw          $a1, -0x78CC($gp)
    ctx->pc = 0x13e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
    // 0x13e2e4: 0xc04f610  jal         func_13D840
    ctx->pc = 0x13E2E4u;
    SET_GPR_U32(ctx, 31, 0x13E2ECu);
    ctx->pc = 0x13D840u;
    if (runtime->hasFunction(0x13D840u)) {
        auto targetFn = runtime->lookupFunction(0x13D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2ECu; }
        if (ctx->pc != 0x13E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Disable__15mgCTextureAnimeFi_0x13d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2ECu; }
        if (ctx->pc != 0x13E2ECu) { return; }
    }
    ctx->pc = 0x13E2ECu;
label_13e2ec:
    // 0x13e2ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e2f0: 0x8c220e74  lw          $v0, 0xE74($at)
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3700)));
    // 0x13e2f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13E2F4u;
    {
        const bool branch_taken_0x13e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2f4) {
            ctx->pc = 0x13E324u;
            goto label_13e324;
        }
    }
    ctx->pc = 0x13E2FCu;
    // 0x13e2fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e300: 0x8c220e78  lw          $v0, 0xE78($at)
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3704)));
    // 0x13e304: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E304u;
    {
        const bool branch_taken_0x13e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e304) {
            ctx->pc = 0x13E324u;
            goto label_13e324;
        }
    }
    ctx->pc = 0x13E30Cu;
    // 0x13e30c: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e310: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x13e310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x13e314: 0x24a50e70  addiu       $a1, $a1, 0xE70
    ctx->pc = 0x13e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
    // 0x13e318: 0x8f86873c  lw          $a2, -0x78C4($gp)
    ctx->pc = 0x13e318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x13e31c: 0xc04f560  jal         func_13D580
    ctx->pc = 0x13E31Cu;
    SET_GPR_U32(ctx, 31, 0x13E324u);
    ctx->pc = 0x13D580u;
    if (runtime->hasFunction(0x13D580u)) {
        auto targetFn = runtime->lookupFunction(0x13D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E324u; }
        if (ctx->pc != 0x13E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexAnime__15mgCTextureAnimeFP15mgCTexAnimeDataP9mgCMemory_0x13d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E324u; }
        if (ctx->pc != 0x13E324u) { return; }
    }
    ctx->pc = 0x13E324u;
label_13e324:
    // 0x13e324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e328:
    // 0x13e328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e334: 0x3e00008  jr          $ra
    ctx->pc = 0x13E334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E33Cu;
}
