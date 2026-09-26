#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDngRoomInfo__FP16DNGMAP_ROOM_INFO
// Address: 0x1ecb50 - 0x1ed67c
void DrawDngRoomInfo__FP16DNGMAP_ROOM_INFO_0x1ecb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDngRoomInfo__FP16DNGMAP_ROOM_INFO_0x1ecb50");
#endif

    switch (ctx->pc) {
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecd04u: goto label_1ecd04;
        case 0x1ecd0cu: goto label_1ecd0c;
        case 0x1ecd18u: goto label_1ecd18;
        case 0x1ecd24u: goto label_1ecd24;
        case 0x1ecd30u: goto label_1ecd30;
        case 0x1ecd48u: goto label_1ecd48;
        case 0x1ecd50u: goto label_1ecd50;
        case 0x1ecd5cu: goto label_1ecd5c;
        case 0x1ecd74u: goto label_1ecd74;
        case 0x1ecd8cu: goto label_1ecd8c;
        case 0x1ecd9cu: goto label_1ecd9c;
        case 0x1ecdc0u: goto label_1ecdc0;
        case 0x1ecdd8u: goto label_1ecdd8;
        case 0x1ece00u: goto label_1ece00;
        case 0x1ece1cu: goto label_1ece1c;
        case 0x1ece30u: goto label_1ece30;
        case 0x1ece38u: goto label_1ece38;
        case 0x1ece44u: goto label_1ece44;
        case 0x1ece50u: goto label_1ece50;
        case 0x1ece68u: goto label_1ece68;
        case 0x1eceb0u: goto label_1eceb0;
        case 0x1eceb8u: goto label_1eceb8;
        case 0x1ecee8u: goto label_1ecee8;
        case 0x1ecef8u: goto label_1ecef8;
        case 0x1ecf04u: goto label_1ecf04;
        case 0x1ecf10u: goto label_1ecf10;
        case 0x1ecf28u: goto label_1ecf28;
        case 0x1ecf40u: goto label_1ecf40;
        case 0x1ecf58u: goto label_1ecf58;
        case 0x1ecf74u: goto label_1ecf74;
        case 0x1ecf88u: goto label_1ecf88;
        case 0x1ed010u: goto label_1ed010;
        case 0x1ed068u: goto label_1ed068;
        case 0x1ed080u: goto label_1ed080;
        case 0x1ed08cu: goto label_1ed08c;
        case 0x1ed0a4u: goto label_1ed0a4;
        case 0x1ed124u: goto label_1ed124;
        case 0x1ed13cu: goto label_1ed13c;
        case 0x1ed14cu: goto label_1ed14c;
        case 0x1ed160u: goto label_1ed160;
        case 0x1ed184u: goto label_1ed184;
        case 0x1ed1c8u: goto label_1ed1c8;
        case 0x1ed204u: goto label_1ed204;
        case 0x1ed24cu: goto label_1ed24c;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed4c0u: goto label_1ed4c0;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed5b8u: goto label_1ed5b8;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed638u: goto label_1ed638;
        default: break;
    }

    ctx->pc = 0x1ecb50u;

    // 0x1ecb50: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1ecb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1ecb54: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ecb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ecb58: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ecb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1ecb5c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ecb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1ecb60: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ecb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1ecb64: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ecb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1ecb68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ecb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ecb6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ecb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ecb70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ecb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ecb74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ecb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ecb78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ecb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ecb7c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1ecb7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ecb80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb84: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1ecb84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ecb88: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ecb88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ecb8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ecb8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ecb90: 0x120002a9  beqz        $s0, . + 4 + (0x2A9 << 2)
    ctx->pc = 0x1ECB90u;
    {
        const bool branch_taken_0x1ecb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB90u;
            // 0x1ecb94: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb90) {
            ctx->pc = 0x1ED638u;
            goto label_1ed638;
        }
    }
    ctx->pc = 0x1ECB98u;
    // 0x1ecb98: 0x8f838ec0  lw          $v1, -0x7140($gp)
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ecb9c: 0x106002a6  beqz        $v1, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x1ECB9Cu;
    {
        const bool branch_taken_0x1ecb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb9c) {
            ctx->pc = 0x1ED638u;
            goto label_1ed638;
        }
    }
    ctx->pc = 0x1ECBA4u;
    // 0x1ecba4: 0x93828eb4  lbu         $v0, -0x714C($gp)
    ctx->pc = 0x1ecba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938292)));
    // 0x1ecba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECBA8u;
    {
        const bool branch_taken_0x1ecba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBA8u;
            // 0x1ecbac: 0x27848ed8  addiu       $a0, $gp, -0x7128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecba8) {
            ctx->pc = 0x1ECBC8u;
            goto label_1ecbc8;
        }
    }
    ctx->pc = 0x1ECBB0u;
    // 0x1ecbb0: 0x27848ed8  addiu       $a0, $gp, -0x7128
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938328));
    // 0x1ecbb4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ecbb8: 0xc094558  jal         func_251560
    ctx->pc = 0x1ECBB8u;
    SET_GPR_U32(ctx, 31, 0x1ECBC0u);
    ctx->pc = 0x1ECBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBB8u;
            // 0x1ecbbc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBC0u; }
        if (ctx->pc != 0x1ECBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBC0u; }
        if (ctx->pc != 0x1ECBC0u) { return; }
    }
    ctx->pc = 0x1ECBC0u;
label_1ecbc0:
    // 0x1ecbc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECBC0u;
    {
        const bool branch_taken_0x1ecbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBC0u;
            // 0x1ecbc4: 0x8f9e8ad0  lw          $fp, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbc0) {
            ctx->pc = 0x1ECBD8u;
            goto label_1ecbd8;
        }
    }
    ctx->pc = 0x1ECBC8u;
label_1ecbc8:
    // 0x1ecbc8: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x1ecbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1ecbcc: 0xc094558  jal         func_251560
    ctx->pc = 0x1ECBCCu;
    SET_GPR_U32(ctx, 31, 0x1ECBD4u);
    ctx->pc = 0x1ECBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBCCu;
            // 0x1ecbd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBD4u; }
        if (ctx->pc != 0x1ECBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBD4u; }
        if (ctx->pc != 0x1ECBD4u) { return; }
    }
    ctx->pc = 0x1ECBD4u;
label_1ecbd4:
    // 0x1ecbd4: 0x8f9e8ad0  lw          $fp, -0x7530($gp)
    ctx->pc = 0x1ecbd4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1ecbd8:
    // 0x1ecbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecbdc: 0x2411019c  addiu       $s1, $zero, 0x19C
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x1ecbe0: 0x17c2000a  bne         $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ECBE0u;
    {
        const bool branch_taken_0x1ecbe0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBE0u;
            // 0x1ecbe4: 0x241200e4  addiu       $s2, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbe0) {
            ctx->pc = 0x1ECC0Cu;
            goto label_1ecc0c;
        }
    }
    ctx->pc = 0x1ECBE8u;
    // 0x1ecbe8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ecbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ecbec: 0x8c228dd4  lw          $v0, -0x722C($at)
    ctx->pc = 0x1ecbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ecbf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECBF0u;
    {
        const bool branch_taken_0x1ecbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBF0u;
            // 0x1ecbf4: 0x241101d6  addiu       $s1, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbf0) {
            ctx->pc = 0x1ECC08u;
            goto label_1ecc08;
        }
    }
    ctx->pc = 0x1ECBF8u;
    // 0x1ecbf8: 0x8c4317e4  lw          $v1, 0x17E4($v0)
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6116)));
    // 0x1ecbfc: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ecbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ecc00: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECC00u;
    {
        const bool branch_taken_0x1ecc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ecc00) {
            ctx->pc = 0x1ECC0Cu;
            goto label_1ecc0c;
        }
    }
    ctx->pc = 0x1ECC08u;
label_1ecc08:
    // 0x1ecc08: 0x26520016  addiu       $s2, $s2, 0x16
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22));
label_1ecc0c:
    // 0x1ecc0c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1ecc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1ecc10: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1ecc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ecc14: 0x8f938ed8  lw          $s3, -0x7128($gp)
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
    // 0x1ecc18: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ecc1c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ecc1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ecc20: 0x3c0442b8  lui         $a0, 0x42B8
    ctx->pc = 0x1ecc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17080 << 16));
    // 0x1ecc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc28: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x1ecc2c: 0x8f858ed4  lw          $a1, -0x712C($gp)
    ctx->pc = 0x1ecc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1ecc30: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1ecc30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ecc34: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1ecc38: 0x26b5dc60  addiu       $s5, $s5, -0x23A0
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958176));
    // 0x1ecc3c: 0x3b843  sra         $s7, $v1, 1
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1ecc40: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ecc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ecc44: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1ecc48: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ecc4c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1ecc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ecc50: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1ecc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1ecc54: 0x0  nop
    ctx->pc = 0x1ecc54u;
    // NOP
    // 0x1ecc58: 0x1010  mfhi        $v0
    ctx->pc = 0x1ecc58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ecc5c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ecc60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ecc64: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ECC64u;
    {
        const bool branch_taken_0x1ecc64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC64u;
            // 0x1ecc68: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc64) {
            ctx->pc = 0x1ECCC8u;
            goto label_1eccc8;
        }
    }
    ctx->pc = 0x1ECC6Cu;
    // 0x1ecc6c: 0x80a20016  lb          $v0, 0x16($a1)
    ctx->pc = 0x1ecc6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x1ecc70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECC70u;
    {
        const bool branch_taken_0x1ecc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC70u;
            // 0x1ecc74: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc70) {
            ctx->pc = 0x1ECC8Cu;
            goto label_1ecc8c;
        }
    }
    ctx->pc = 0x1ECC78u;
    // 0x1ecc78: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x1ecc78u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x1ecc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc80: 0x26b5dc80  addiu       $s5, $s5, -0x2380
    ctx->pc = 0x1ecc80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958208));
    // 0x1ecc84: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x1ecc84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x1ecc88: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1ecc88u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1ecc8c:
    // 0x1ecc8c: 0x80a20015  lb          $v0, 0x15($a1)
    ctx->pc = 0x1ecc8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x1ecc90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC90u;
    {
        const bool branch_taken_0x1ecc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC90u;
            // 0x1ecc94: 0x3c024160  lui         $v0, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc90) {
            ctx->pc = 0x1ECCA8u;
            goto label_1ecca8;
        }
    }
    ctx->pc = 0x1ECC98u;
    // 0x1ecc98: 0x2652ffea  addiu       $s2, $s2, -0x16
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967274));
    // 0x1ecc9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecca0: 0x0  nop
    ctx->pc = 0x1ecca0u;
    // NOP
    // 0x1ecca4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1ecca4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1ecca8:
    // 0x1ecca8: 0x80a20017  lb          $v0, 0x17($a1)
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 23)));
    // 0x1eccac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECCACu;
    {
        const bool branch_taken_0x1eccac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCACu;
            // 0x1eccb0: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccac) {
            ctx->pc = 0x1ECCCCu;
            goto label_1ecccc;
        }
    }
    ctx->pc = 0x1ECCB4u;
    // 0x1eccb4: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1eccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1eccb8: 0x2652ffea  addiu       $s2, $s2, -0x16
    ctx->pc = 0x1eccb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967274));
    // 0x1eccbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eccbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccc0: 0x0  nop
    ctx->pc = 0x1eccc0u;
    // NOP
    // 0x1eccc4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1eccc4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1eccc8:
    // 0x1eccc8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1ecccc:
    // 0x1ecccc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eccd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eccd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eccd4: 0x2623fff8  addiu       $v1, $s1, -0x8
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1eccd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eccd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eccdc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eccdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecce0: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x1ecce4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ecce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccec: 0x0  nop
    ctx->pc = 0x1eccecu;
    // NOP
    // 0x1eccf0: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1eccf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1eccf4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1eccf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1eccf8: 0x46141300  add.s       $f12, $f2, $f20
    ctx->pc = 0x1eccf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x1eccfc: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1ECCFCu;
    SET_GPR_U32(ctx, 31, 0x1ECD04u);
    ctx->pc = 0x1ECD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCFCu;
            // 0x1ecd00: 0x46151340  add.s       $f13, $f2, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD04u; }
        if (ctx->pc != 0x1ECD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD04u; }
        if (ctx->pc != 0x1ECD04u) { return; }
    }
    ctx->pc = 0x1ECD04u;
label_1ecd04:
    // 0x1ecd04: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1ECD04u;
    SET_GPR_U32(ctx, 31, 0x1ECD0Cu);
    ctx->pc = 0x1ECD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD04u;
            // 0x1ecd08: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD0Cu; }
        if (ctx->pc != 0x1ECD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD0Cu; }
        if (ctx->pc != 0x1ECD0Cu) { return; }
    }
    ctx->pc = 0x1ECD0Cu;
label_1ecd0c:
    // 0x1ecd0c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecd10: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1ECD10u;
    SET_GPR_U32(ctx, 31, 0x1ECD18u);
    ctx->pc = 0x1ECD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD10u;
            // 0x1ecd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD18u; }
        if (ctx->pc != 0x1ECD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD18u; }
        if (ctx->pc != 0x1ECD18u) { return; }
    }
    ctx->pc = 0x1ECD18u;
label_1ecd18:
    // 0x1ecd18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecd1c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1ECD1Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD24u);
    ctx->pc = 0x1ECD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD1Cu;
            // 0x1ecd20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD24u; }
        if (ctx->pc != 0x1ECD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD24u; }
        if (ctx->pc != 0x1ECD24u) { return; }
    }
    ctx->pc = 0x1ECD24u;
label_1ecd24:
    // 0x1ecd24: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ecd28: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1ECD28u;
    SET_GPR_U32(ctx, 31, 0x1ECD30u);
    ctx->pc = 0x1ECD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD28u;
            // 0x1ecd2c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD30u; }
        if (ctx->pc != 0x1ECD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD30u; }
        if (ctx->pc != 0x1ECD30u) { return; }
    }
    ctx->pc = 0x1ECD30u;
label_1ecd30:
    // 0x1ecd30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ecd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ecd34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecd38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ecd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ecd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd40: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ECD40u;
    SET_GPR_U32(ctx, 31, 0x1ECD48u);
    ctx->pc = 0x1ECD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD40u;
            // 0x1ecd44: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD48u; }
        if (ctx->pc != 0x1ECD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD48u; }
        if (ctx->pc != 0x1ECD48u) { return; }
    }
    ctx->pc = 0x1ECD48u;
label_1ecd48:
    // 0x1ecd48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECD48u;
    SET_GPR_U32(ctx, 31, 0x1ECD50u);
    ctx->pc = 0x1ECD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD48u;
            // 0x1ecd4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD50u; }
        if (ctx->pc != 0x1ECD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD50u; }
        if (ctx->pc != 0x1ECD50u) { return; }
    }
    ctx->pc = 0x1ECD50u;
label_1ecd50:
    // 0x1ecd50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ecd50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECD54u;
    SET_GPR_U32(ctx, 31, 0x1ECD5Cu);
    ctx->pc = 0x1ECD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD54u;
            // 0x1ecd58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD5Cu; }
        if (ctx->pc != 0x1ECD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD5Cu; }
        if (ctx->pc != 0x1ECD5Cu) { return; }
    }
    ctx->pc = 0x1ECD5Cu;
label_1ecd5c:
    // 0x1ecd5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ecd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd60: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1ecd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1ecd64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ecd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ecd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd6c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ECD6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD74u);
    ctx->pc = 0x1ECD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD6Cu;
            // 0x1ecd70: 0x24080046  addiu       $t0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD74u; }
        if (ctx->pc != 0x1ECD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD74u; }
        if (ctx->pc != 0x1ECD74u) { return; }
    }
    ctx->pc = 0x1ECD74u;
label_1ecd74:
    // 0x1ecd74: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1ecd74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1ecd78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecd7c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1ecd80: 0x24c6dc30  addiu       $a2, $a2, -0x23D0
    ctx->pc = 0x1ecd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958128));
    // 0x1ecd84: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ECD84u;
    SET_GPR_U32(ctx, 31, 0x1ECD8Cu);
    ctx->pc = 0x1ECD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD84u;
            // 0x1ecd88: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD8Cu; }
        if (ctx->pc != 0x1ECD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD8Cu; }
        if (ctx->pc != 0x1ECD8Cu) { return; }
    }
    ctx->pc = 0x1ECD8Cu;
label_1ecd8c:
    // 0x1ecd8c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x1ecd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECD94u;
    SET_GPR_U32(ctx, 31, 0x1ECD9Cu);
    ctx->pc = 0x1ECD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD94u;
            // 0x1ecd98: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD9Cu; }
        if (ctx->pc != 0x1ECD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD9Cu; }
        if (ctx->pc != 0x1ECD9Cu) { return; }
    }
    ctx->pc = 0x1ECD9Cu;
label_1ecd9c:
    // 0x1ecd9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ecd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecda0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ecda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ecda4: 0x8422dc4e  lh          $v0, -0x23B2($at)
    ctx->pc = 0x1ecda4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958158)));
    // 0x1ecda8: 0x2643ffba  addiu       $v1, $s2, -0x46
    ctx->pc = 0x1ecda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967226));
    // 0x1ecdac: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1ecdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1ecdb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ecdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ecdb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdb8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ECDB8u;
    SET_GPR_U32(ctx, 31, 0x1ECDC0u);
    ctx->pc = 0x1ECDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDB8u;
            // 0x1ecdbc: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDC0u; }
        if (ctx->pc != 0x1ECDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDC0u; }
        if (ctx->pc != 0x1ECDC0u) { return; }
    }
    ctx->pc = 0x1ECDC0u;
label_1ecdc0:
    // 0x1ecdc0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1ecdc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecdc8: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1ecdcc: 0x24c6dc48  addiu       $a2, $a2, -0x23B8
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958152));
    // 0x1ecdd0: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ECDD0u;
    SET_GPR_U32(ctx, 31, 0x1ECDD8u);
    ctx->pc = 0x1ECDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDD0u;
            // 0x1ecdd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDD8u; }
        if (ctx->pc != 0x1ECDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDD8u; }
        if (ctx->pc != 0x1ECDD8u) { return; }
    }
    ctx->pc = 0x1ECDD8u;
label_1ecdd8:
    // 0x1ecdd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1ecdd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecddc: 0x0  nop
    ctx->pc = 0x1ecddcu;
    // NOP
    // 0x1ecde0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecde0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecde4: 0x86b20006  lh          $s2, 0x6($s5)
    ctx->pc = 0x1ecde4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1ecde8: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1ecde8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1ecdec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1ecdecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdf0: 0x0  nop
    ctx->pc = 0x1ecdf0u;
    // NOP
    // 0x1ecdf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecdf8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECDF8u;
    SET_GPR_U32(ctx, 31, 0x1ECE00u);
    ctx->pc = 0x1ECDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDF8u;
            // 0x1ecdfc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE00u; }
        if (ctx->pc != 0x1ECE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE00u; }
        if (ctx->pc != 0x1ECE00u) { return; }
    }
    ctx->pc = 0x1ECE00u;
label_1ece00:
    // 0x1ece00: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x1ece00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ece04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ece04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece08: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1ece08u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1ece0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ece0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece10: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1ece14: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ECE14u;
    SET_GPR_U32(ctx, 31, 0x1ECE1Cu);
    ctx->pc = 0x1ECE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE14u;
            // 0x1ece18: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE1Cu; }
        if (ctx->pc != 0x1ECE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE1Cu; }
        if (ctx->pc != 0x1ECE1Cu) { return; }
    }
    ctx->pc = 0x1ECE1Cu;
label_1ece1c:
    // 0x1ece1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ece1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece24: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x1ece24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1ece28: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ECE28u;
    SET_GPR_U32(ctx, 31, 0x1ECE30u);
    ctx->pc = 0x1ECE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE28u;
            // 0x1ece2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE30u; }
        if (ctx->pc != 0x1ECE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE30u; }
        if (ctx->pc != 0x1ECE30u) { return; }
    }
    ctx->pc = 0x1ECE30u;
label_1ece30:
    // 0x1ece30: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1ECE30u;
    SET_GPR_U32(ctx, 31, 0x1ECE38u);
    ctx->pc = 0x1ECE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE30u;
            // 0x1ece34: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE38u; }
        if (ctx->pc != 0x1ECE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE38u; }
        if (ctx->pc != 0x1ECE38u) { return; }
    }
    ctx->pc = 0x1ECE38u;
label_1ece38:
    // 0x1ece38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece3c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1ECE3Cu;
    SET_GPR_U32(ctx, 31, 0x1ECE44u);
    ctx->pc = 0x1ECE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE3Cu;
            // 0x1ece40: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE44u; }
        if (ctx->pc != 0x1ECE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE44u; }
        if (ctx->pc != 0x1ECE44u) { return; }
    }
    ctx->pc = 0x1ECE44u;
label_1ece44:
    // 0x1ece44: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ece44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ece48: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1ECE48u;
    SET_GPR_U32(ctx, 31, 0x1ECE50u);
    ctx->pc = 0x1ECE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE48u;
            // 0x1ece4c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE50u; }
        if (ctx->pc != 0x1ECE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE50u; }
        if (ctx->pc != 0x1ECE50u) { return; }
    }
    ctx->pc = 0x1ECE50u;
label_1ece50:
    // 0x1ece50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ece50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ece54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ece58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece5c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ece5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece60: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ECE60u;
    SET_GPR_U32(ctx, 31, 0x1ECE68u);
    ctx->pc = 0x1ECE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE60u;
            // 0x1ece64: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE68u; }
        if (ctx->pc != 0x1ECE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE68u; }
        if (ctx->pc != 0x1ECE68u) { return; }
    }
    ctx->pc = 0x1ECE68u;
label_1ece68:
    // 0x1ece68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ece68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ece6c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ece6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ece70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ece70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ece74: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1ece74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1ece78: 0x8c238df8  lw          $v1, -0x7208($at)
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938104)));
    // 0x1ece7c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ece84: 0x24a58df0  addiu       $a1, $a1, -0x7210
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938096));
    // 0x1ece88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece8c: 0x0  nop
    ctx->pc = 0x1ece8cu;
    // NOP
    // 0x1ece90: 0x46150340  add.s       $f13, $f0, $f21
    ctx->pc = 0x1ece90u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ece94: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1ece94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1ece98: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1ece98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ece9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecea0: 0x0  nop
    ctx->pc = 0x1ecea0u;
    // NOP
    // 0x1ecea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecea8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ECEA8u;
    SET_GPR_U32(ctx, 31, 0x1ECEB0u);
    ctx->pc = 0x1ECEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEA8u;
            // 0x1eceac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEB0u; }
        if (ctx->pc != 0x1ECEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEB0u; }
        if (ctx->pc != 0x1ECEB0u) { return; }
    }
    ctx->pc = 0x1ECEB0u;
label_1eceb0:
    // 0x1eceb0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1ECEB0u;
    SET_GPR_U32(ctx, 31, 0x1ECEB8u);
    ctx->pc = 0x1ECEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEB0u;
            // 0x1eceb4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEB8u; }
        if (ctx->pc != 0x1ECEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEB8u; }
        if (ctx->pc != 0x1ECEB8u) { return; }
    }
    ctx->pc = 0x1ECEB8u;
label_1eceb8:
    // 0x1eceb8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1eceb8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecebc: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x1ecebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x1ecec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ecec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecec4: 0x0  nop
    ctx->pc = 0x1ecec4u;
    // NOP
    // 0x1ecec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ececc: 0x3c024290  lui         $v0, 0x4290
    ctx->pc = 0x1ececcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17040 << 16));
    // 0x1eced0: 0x4600a580  add.s       $f22, $f20, $f0
    ctx->pc = 0x1eced0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1eced4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eced4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eced8: 0x0  nop
    ctx->pc = 0x1eced8u;
    // NOP
    // 0x1ecedc: 0x46150dc0  add.s       $f23, $f1, $f21
    ctx->pc = 0x1ecedcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1ecee0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECEE0u;
    SET_GPR_U32(ctx, 31, 0x1ECEE8u);
    ctx->pc = 0x1ECEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEE0u;
            // 0x1ecee4: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEE8u; }
        if (ctx->pc != 0x1ECEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEE8u; }
        if (ctx->pc != 0x1ECEE8u) { return; }
    }
    ctx->pc = 0x1ECEE8u;
label_1ecee8:
    // 0x1ecee8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ecee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eceec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecef0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1ECEF0u;
    SET_GPR_U32(ctx, 31, 0x1ECEF8u);
    ctx->pc = 0x1ECEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEF0u;
            // 0x1ecef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEF8u; }
        if (ctx->pc != 0x1ECEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEF8u; }
        if (ctx->pc != 0x1ECEF8u) { return; }
    }
    ctx->pc = 0x1ECEF8u;
label_1ecef8:
    // 0x1ecef8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecefc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1ECEFCu;
    SET_GPR_U32(ctx, 31, 0x1ECF04u);
    ctx->pc = 0x1ECF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEFCu;
            // 0x1ecf00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF04u; }
        if (ctx->pc != 0x1ECF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF04u; }
        if (ctx->pc != 0x1ECF04u) { return; }
    }
    ctx->pc = 0x1ECF04u;
label_1ecf04:
    // 0x1ecf04: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ecf08: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1ECF08u;
    SET_GPR_U32(ctx, 31, 0x1ECF10u);
    ctx->pc = 0x1ECF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF08u;
            // 0x1ecf0c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF10u; }
        if (ctx->pc != 0x1ECF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF10u; }
        if (ctx->pc != 0x1ECF10u) { return; }
    }
    ctx->pc = 0x1ECF10u;
label_1ecf10:
    // 0x1ecf10: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ecf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ecf14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecf18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ecf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf1c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ecf1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf20: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ECF20u;
    SET_GPR_U32(ctx, 31, 0x1ECF28u);
    ctx->pc = 0x1ECF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF20u;
            // 0x1ecf24: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF28u; }
        if (ctx->pc != 0x1ECF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF28u; }
        if (ctx->pc != 0x1ECF28u) { return; }
    }
    ctx->pc = 0x1ECF28u;
label_1ecf28:
    // 0x1ecf28: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x1ecf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ecf2c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1ecf30: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ecf34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ecf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf38: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ECF38u;
    SET_GPR_U32(ctx, 31, 0x1ECF40u);
    ctx->pc = 0x1ECF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF38u;
            // 0x1ecf3c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF40u; }
        if (ctx->pc != 0x1ECF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF40u; }
        if (ctx->pc != 0x1ECF40u) { return; }
    }
    ctx->pc = 0x1ECF40u;
label_1ecf40:
    // 0x1ecf40: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ecf44: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1ecf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1ecf48: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x1ecf4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ecf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf50: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ECF50u;
    SET_GPR_U32(ctx, 31, 0x1ECF58u);
    ctx->pc = 0x1ECF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF50u;
            // 0x1ecf54: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF58u; }
        if (ctx->pc != 0x1ECF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF58u; }
        if (ctx->pc != 0x1ECF58u) { return; }
    }
    ctx->pc = 0x1ECF58u;
label_1ecf58:
    // 0x1ecf58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ecf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ecf5c: 0x8c318dc0  lw          $s1, -0x7240($at)
    ctx->pc = 0x1ecf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x1ecf60: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECF60u;
    {
        const bool branch_taken_0x1ecf60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF60u;
            // 0x1ecf64: 0x3c024218  lui         $v0, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf60) {
            ctx->pc = 0x1ECF88u;
            goto label_1ecf88;
        }
    }
    ctx->pc = 0x1ECF68u;
    // 0x1ecf68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ECF6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF74u);
    ctx->pc = 0x1ECF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF6Cu;
            // 0x1ecf70: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF74u; }
        if (ctx->pc != 0x1ECF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF74u; }
        if (ctx->pc != 0x1ECF74u) { return; }
    }
    ctx->pc = 0x1ECF74u;
label_1ecf74:
    // 0x1ecf74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ecf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ecf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf80: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x1ECF80u;
    SET_GPR_U32(ctx, 31, 0x1ECF88u);
    ctx->pc = 0x1ECF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF80u;
            // 0x1ecf84: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    }
    ctx->pc = 0x1ECF88u;
label_1ecf88:
    // 0x1ecf88: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1ecf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1ecf8c: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ED13Cu;
            goto label_1ed13c;
        }
    }
    ctx->pc = 0x1ECF94u;
    // 0x1ecf94: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ecf94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ecf98: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1ecf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1ecf9c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1ECF9Cu;
    {
        const bool branch_taken_0x1ecf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF9Cu;
            // 0x1ecfa0: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf9c) {
            ctx->pc = 0x1ED140u;
            goto label_1ed140;
        }
    }
    ctx->pc = 0x1ECFA4u;
    // 0x1ecfa4: 0x82020014  lb          $v0, 0x14($s0)
    ctx->pc = 0x1ecfa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ecfa8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ecfa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ecfac: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x1ECFACu;
    {
        const bool branch_taken_0x1ecfac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfac) {
            ctx->pc = 0x1ED13Cu;
            goto label_1ed13c;
        }
    }
    ctx->pc = 0x1ECFB4u;
    // 0x1ecfb4: 0x83828eec  lb          $v0, -0x7114($gp)
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938348)));
    // 0x1ecfb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECFB8u;
    {
        const bool branch_taken_0x1ecfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFB8u;
            // 0x1ecfbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfb8) {
            ctx->pc = 0x1ECFC8u;
            goto label_1ecfc8;
        }
    }
    ctx->pc = 0x1ECFC0u;
    // 0x1ecfc0: 0xaf808ee8  sw          $zero, -0x7118($gp)
    ctx->pc = 0x1ecfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 0));
    // 0x1ecfc4: 0xa3828eec  sb          $v0, -0x7114($gp)
    ctx->pc = 0x1ecfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938348), (uint8_t)GPR_U32(ctx, 2));
label_1ecfc8:
    // 0x1ecfc8: 0xc7818ee8  lwc1        $f1, -0x7118($gp)
    ctx->pc = 0x1ecfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecfcc: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x1ecfd0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x1ecfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1ecfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfd8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ecfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ecfdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ecfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ecfe0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ecfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ecfe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ecfe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ecfe8: 0xe7808ee8  swc1        $f0, -0x7118($gp)
    ctx->pc = 0x1ecfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), bits); }
    // 0x1ecfec: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1ecfecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1ecff0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ecff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecff4: 0x0  nop
    ctx->pc = 0x1ecff4u;
    // NOP
    // 0x1ecff8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECFF8u;
    {
        const bool branch_taken_0x1ecff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecff8) {
            ctx->pc = 0x1ED008u;
            goto label_1ed008;
        }
    }
    ctx->pc = 0x1ED000u;
    // 0x1ed000: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ed000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1ed004: 0xe7808ee8  swc1        $f0, -0x7118($gp)
    ctx->pc = 0x1ed004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), bits); }
label_1ed008:
    // 0x1ed008: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1ED008u;
    SET_GPR_U32(ctx, 31, 0x1ED010u);
    ctx->pc = 0x1ED00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED008u;
            // 0x1ed00c: 0xc78c8ee8  lwc1        $f12, -0x7118($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED010u; }
        if (ctx->pc != 0x1ED010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED010u; }
        if (ctx->pc != 0x1ED010u) { return; }
    }
    ctx->pc = 0x1ED010u;
label_1ed010:
    // 0x1ed010: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1ed010u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed014: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ed014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ed018: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed01c: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x1ed01cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ed020: 0x4602c034  c.lt.s      $f24, $f2
    ctx->pc = 0x1ed020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed024: 0x0  nop
    ctx->pc = 0x1ed024u;
    // NOP
    // 0x1ed028: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED028u;
    {
        const bool branch_taken_0x1ed028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED028u;
            // 0x1ed02c: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed028) {
            ctx->pc = 0x1ED038u;
            goto label_1ed038;
        }
    }
    ctx->pc = 0x1ED030u;
    // 0x1ed030: 0x46001606  mov.s       $f24, $f2
    ctx->pc = 0x1ed030u;
    ctx->f[24] = FPU_MOV_S(ctx->f[2]);
    // 0x1ed034: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1ed038:
    // 0x1ed038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed03c: 0x0  nop
    ctx->pc = 0x1ed03cu;
    // NOP
    // 0x1ed040: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1ed040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed044: 0x0  nop
    ctx->pc = 0x1ed044u;
    // NOP
    // 0x1ed048: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED048u;
    {
        const bool branch_taken_0x1ed048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED048u;
            // 0x1ed04c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed048) {
            ctx->pc = 0x1ED054u;
            goto label_1ed054;
        }
    }
    ctx->pc = 0x1ED050u;
    // 0x1ed050: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1ed050u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1ed054:
    // 0x1ed054: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x1ed058: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x1ed058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1ed05c: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ed060: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ED060u;
    SET_GPR_U32(ctx, 31, 0x1ED068u);
    ctx->pc = 0x1ED064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED060u;
            // 0x1ed064: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED068u; }
        if (ctx->pc != 0x1ED068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED068u; }
        if (ctx->pc != 0x1ED068u) { return; }
    }
    ctx->pc = 0x1ED068u;
label_1ed068:
    // 0x1ed068: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ed06c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1ed070: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1ed074: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1ed078: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ED078u;
    SET_GPR_U32(ctx, 31, 0x1ED080u);
    ctx->pc = 0x1ED07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED078u;
            // 0x1ed07c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED080u; }
        if (ctx->pc != 0x1ED080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED080u; }
        if (ctx->pc != 0x1ED080u) { return; }
    }
    ctx->pc = 0x1ED080u;
label_1ed080:
    // 0x1ed080: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1ed080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1ed084: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED084u;
    SET_GPR_U32(ctx, 31, 0x1ED08Cu);
    ctx->pc = 0x1ED088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED084u;
            // 0x1ed088: 0x27b101f0  addiu       $s1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED08Cu; }
        if (ctx->pc != 0x1ED08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED08Cu; }
        if (ctx->pc != 0x1ED08Cu) { return; }
    }
    ctx->pc = 0x1ED08Cu;
label_1ed08c:
    // 0x1ed08c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ed08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ed090: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ed090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed094: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed098: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ed098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed09c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ED09Cu;
    SET_GPR_U32(ctx, 31, 0x1ED0A4u);
    ctx->pc = 0x1ED0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED09Cu;
            // 0x1ed0a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0A4u; }
        if (ctx->pc != 0x1ED0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0A4u; }
        if (ctx->pc != 0x1ED0A4u) { return; }
    }
    ctx->pc = 0x1ED0A4u;
label_1ed0a4:
    // 0x1ed0a4: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x1ed0a8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ed0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0b0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED0B0u;
    {
        const bool branch_taken_0x1ed0b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ED0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0B0u;
            // 0x1ed0b4: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0b0) {
            ctx->pc = 0x1ED0E8u;
            goto label_1ed0e8;
        }
    }
    ctx->pc = 0x1ED0B8u;
    // 0x1ed0b8: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x1ed0b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed0bc: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x1ed0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x1ed0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ed0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed0c8: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x1ed0c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1ed0cc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ed0d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed0d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed0d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ed0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ed0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed0e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ED0E0u;
    {
        const bool branch_taken_0x1ed0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0E0u;
            // 0x1ed0e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0e0) {
            ctx->pc = 0x1ED118u;
            goto label_1ed118;
        }
    }
    ctx->pc = 0x1ED0E8u;
label_1ed0e8:
    // 0x1ed0e8: 0x82040014  lb          $a0, 0x14($s0)
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed0ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ed0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ed0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0f4: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1ed0f8: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1ed0fc: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x1ed0fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1ed100: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ed104: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed108: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ed108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed10c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ed10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ed110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed114: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1ed114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_1ed118:
    // 0x1ed118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed11c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED11Cu;
    SET_GPR_U32(ctx, 31, 0x1ED124u);
    ctx->pc = 0x1ED120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED11Cu;
            // 0x1ed120: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED124u; }
        if (ctx->pc != 0x1ED124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED124u; }
        if (ctx->pc != 0x1ED124u) { return; }
    }
    ctx->pc = 0x1ED124u;
label_1ed124:
    // 0x1ed124: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ed128: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed12c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ed12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed130: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ed130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed134: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ED134u;
    SET_GPR_U32(ctx, 31, 0x1ED13Cu);
    ctx->pc = 0x1ED138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED134u;
            // 0x1ed138: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED13Cu; }
        if (ctx->pc != 0x1ED13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED13Cu; }
        if (ctx->pc != 0x1ED13Cu) { return; }
    }
    ctx->pc = 0x1ED13Cu;
label_1ed13c:
    // 0x1ed13c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ed140:
    // 0x1ed140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed144: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED144u;
    SET_GPR_U32(ctx, 31, 0x1ED14Cu);
    ctx->pc = 0x1ED148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED144u;
            // 0x1ed148: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED14Cu; }
        if (ctx->pc != 0x1ED14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED14Cu; }
        if (ctx->pc != 0x1ED14Cu) { return; }
    }
    ctx->pc = 0x1ED14Cu;
label_1ed14c:
    // 0x1ed14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed150: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed158: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED158u;
    SET_GPR_U32(ctx, 31, 0x1ED160u);
    ctx->pc = 0x1ED15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED158u;
            // 0x1ed15c: 0x46170300  add.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED160u; }
        if (ctx->pc != 0x1ED160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED160u; }
        if (ctx->pc != 0x1ED160u) { return; }
    }
    ctx->pc = 0x1ED160u;
label_1ed160:
    // 0x1ed160: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ed160u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed164: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ed164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed168: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1ed168u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1ed16c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed170: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ed170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed174: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed178: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1ed17c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED17Cu;
    SET_GPR_U32(ctx, 31, 0x1ED184u);
    ctx->pc = 0x1ED180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED17Cu;
            // 0x1ed180: 0x2612001c  addiu       $s2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED184u; }
        if (ctx->pc != 0x1ED184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED184u; }
        if (ctx->pc != 0x1ED184u) { return; }
    }
    ctx->pc = 0x1ED184u;
label_1ed184:
    // 0x1ed184: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1ed188: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED188u;
    {
        const bool branch_taken_0x1ed188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed188) {
            ctx->pc = 0x1ED1C8u;
            goto label_1ed1c8;
        }
    }
    ctx->pc = 0x1ED190u;
    // 0x1ed190: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ed190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ed194: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ed194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ed198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED198u;
    {
        const bool branch_taken_0x1ed198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed198) {
            ctx->pc = 0x1ED1C8u;
            goto label_1ed1c8;
        }
    }
    ctx->pc = 0x1ED1A0u;
    // 0x1ed1a0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ed1a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed1a8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed1a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed1ac: 0x8422dc98  lh          $v0, -0x2368($at)
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958232)));
    // 0x1ed1b0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed1b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1b4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1ed1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1ed1b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed1bc: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1ed1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1ed1c0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED1C0u;
    SET_GPR_U32(ctx, 31, 0x1ED1C8u);
    ctx->pc = 0x1ED1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1C0u;
            // 0x1ed1c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1C8u; }
        if (ctx->pc != 0x1ED1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1C8u; }
        if (ctx->pc != 0x1ED1C8u) { return; }
    }
    ctx->pc = 0x1ED1C8u;
label_1ed1c8:
    // 0x1ed1c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed1cc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1ed1d0: 0x8c268dc4  lw          $a2, -0x723C($at)
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938052)));
    // 0x1ed1d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1dc: 0xacd21b94  sw          $s2, 0x1B94($a2)
    ctx->pc = 0x1ed1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7060), GPR_U32(ctx, 18));
    // 0x1ed1e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed1e4: 0xacd41b98  sw          $s4, 0x1B98($a2)
    ctx->pc = 0x1ed1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7064), GPR_U32(ctx, 20));
    // 0x1ed1e8: 0xacc31c34  sw          $v1, 0x1C34($a2)
    ctx->pc = 0x1ed1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7220), GPR_U32(ctx, 3));
    // 0x1ed1ec: 0x8c368dc4  lw          $s6, -0x723C($at)
    ctx->pc = 0x1ed1ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938052)));
    // 0x1ed1f0: 0xc6c11e18  lwc1        $f1, 0x1E18($s6)
    ctx->pc = 0x1ed1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 7704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed1f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed1f8: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1ed1f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1ed1fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED1FCu;
    SET_GPR_U32(ctx, 31, 0x1ED204u);
    ctx->pc = 0x1ED200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1FCu;
            // 0x1ed200: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED204u; }
        if (ctx->pc != 0x1ED204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED204u; }
        if (ctx->pc != 0x1ED204u) { return; }
    }
    ctx->pc = 0x1ED204u;
label_1ed204:
    // 0x1ed204: 0xaec21b9c  sw          $v0, 0x1B9C($s6)
    ctx->pc = 0x1ed204u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7068), GPR_U32(ctx, 2));
    // 0x1ed208: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x1ed20c: 0xaed41ba0  sw          $s4, 0x1BA0($s6)
    ctx->pc = 0x1ed20cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7072), GPR_U32(ctx, 20));
    // 0x1ed210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed214: 0xaec21c38  sw          $v0, 0x1C38($s6)
    ctx->pc = 0x1ed214u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7224), GPR_U32(ctx, 2));
    // 0x1ed218: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1ed218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1ed21c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1ED21Cu;
    {
        const bool branch_taken_0x1ed21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED21Cu;
            // 0x1ed220: 0x26940016  addiu       $s4, $s4, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed21c) {
            ctx->pc = 0x1ED300u;
            goto label_1ed300;
        }
    }
    ctx->pc = 0x1ED224u;
    // 0x1ed224: 0x80420017  lb          $v0, 0x17($v0)
    ctx->pc = 0x1ed224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x1ed228: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1ED228u;
    {
        const bool branch_taken_0x1ed228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed228) {
            ctx->pc = 0x1ED300u;
            goto label_1ed300;
        }
    }
    ctx->pc = 0x1ED230u;
    // 0x1ed230: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed230u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed234: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed238: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed238u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed23c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1ed23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1ed240: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed244: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED244u;
    SET_GPR_U32(ctx, 31, 0x1ED24Cu);
    ctx->pc = 0x1ED248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED244u;
            // 0x1ed248: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED24Cu; }
        if (ctx->pc != 0x1ED24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED24Cu; }
        if (ctx->pc != 0x1ED24Cu) { return; }
    }
    ctx->pc = 0x1ED24Cu;
label_1ed24c:
    // 0x1ed24c: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1ed24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1ed250: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ed250u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ed254: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1ed254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ed258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED258u;
    {
        const bool branch_taken_0x1ed258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed258) {
            ctx->pc = 0x1ED288u;
            goto label_1ed288;
        }
    }
    ctx->pc = 0x1ED260u;
    // 0x1ed260: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ed264: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed268: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed268u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed26c: 0x8422dc9c  lh          $v0, -0x2364($at)
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958236)));
    // 0x1ed270: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed270u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed274: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1ed274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1ed278: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed27c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1ed27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1ed280: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED280u;
    SET_GPR_U32(ctx, 31, 0x1ED288u);
    ctx->pc = 0x1ED284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED280u;
            // 0x1ed284: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED288u; }
        if (ctx->pc != 0x1ED288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED288u; }
        if (ctx->pc != 0x1ED288u) { return; }
    }
    ctx->pc = 0x1ED288u;
label_1ed288:
    // 0x1ed288: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed28c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1ed28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1ed290: 0x8c268dcc  lw          $a2, -0x7234($at)
    ctx->pc = 0x1ed290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938060)));
    // 0x1ed294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed29c: 0xacd21b94  sw          $s2, 0x1B94($a2)
    ctx->pc = 0x1ed29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7060), GPR_U32(ctx, 18));
    // 0x1ed2a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed2a4: 0xacd41b98  sw          $s4, 0x1B98($a2)
    ctx->pc = 0x1ed2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7064), GPR_U32(ctx, 20));
    // 0x1ed2a8: 0xacc31c34  sw          $v1, 0x1C34($a2)
    ctx->pc = 0x1ed2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7220), GPR_U32(ctx, 3));
    // 0x1ed2ac: 0x8c368dcc  lw          $s6, -0x7234($at)
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938060)));
    // 0x1ed2b0: 0xc6c11e18  lwc1        $f1, 0x1E18($s6)
    ctx->pc = 0x1ed2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 7704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed2b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed2b8: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1ed2b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1ed2bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED2BCu;
    SET_GPR_U32(ctx, 31, 0x1ED2C4u);
    ctx->pc = 0x1ED2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2BCu;
            // 0x1ed2c0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2C4u; }
        if (ctx->pc != 0x1ED2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2C4u; }
        if (ctx->pc != 0x1ED2C4u) { return; }
    }
    ctx->pc = 0x1ED2C4u;
label_1ed2c4:
    // 0x1ed2c4: 0xaec21b9c  sw          $v0, 0x1B9C($s6)
    ctx->pc = 0x1ed2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7068), GPR_U32(ctx, 2));
    // 0x1ed2c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed2cc: 0xaed41ba0  sw          $s4, 0x1BA0($s6)
    ctx->pc = 0x1ed2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7072), GPR_U32(ctx, 20));
    // 0x1ed2d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed2d4: 0xaec41c38  sw          $a0, 0x1C38($s6)
    ctx->pc = 0x1ed2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7224), GPR_U32(ctx, 4));
    // 0x1ed2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed2dc: 0x8c258dcc  lw          $a1, -0x7234($at)
    ctx->pc = 0x1ed2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938060)));
    // 0x1ed2e0: 0x8ca317e4  lw          $v1, 0x17E4($a1)
    ctx->pc = 0x1ed2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6116)));
    // 0x1ed2e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED2F8u;
            goto label_1ed2f8;
        }
    }
    ctx->pc = 0x1ED2ECu;
    // 0x1ed2ec: 0xacb51b9c  sw          $s5, 0x1B9C($a1)
    ctx->pc = 0x1ed2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7068), GPR_U32(ctx, 21));
    // 0x1ed2f0: 0xacb41ba0  sw          $s4, 0x1BA0($a1)
    ctx->pc = 0x1ed2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7072), GPR_U32(ctx, 20));
    // 0x1ed2f4: 0xaca41c38  sw          $a0, 0x1C38($a1)
    ctx->pc = 0x1ed2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7224), GPR_U32(ctx, 4));
label_1ed2f8:
    // 0x1ed2f8: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x1ed2fc: 0x26940016  addiu       $s4, $s4, 0x16
    ctx->pc = 0x1ed2fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
label_1ed300:
    // 0x1ed300: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1ed300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1ed304: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1ED304u;
    {
        const bool branch_taken_0x1ed304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed304) {
            ctx->pc = 0x1ED3D8u;
            goto label_1ed3d8;
        }
    }
    ctx->pc = 0x1ED30Cu;
    // 0x1ed30c: 0x80420015  lb          $v0, 0x15($v0)
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x1ed310: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1ED310u;
    {
        const bool branch_taken_0x1ed310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed310) {
            ctx->pc = 0x1ED3D8u;
            goto label_1ed3d8;
        }
    }
    ctx->pc = 0x1ED318u;
    // 0x1ed318: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed318u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed31c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed320: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed320u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed324: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1ed324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1ed328: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed32c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED32Cu;
    SET_GPR_U32(ctx, 31, 0x1ED334u);
    ctx->pc = 0x1ED330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED32Cu;
            // 0x1ed330: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED334u; }
        if (ctx->pc != 0x1ED334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED334u; }
        if (ctx->pc != 0x1ED334u) { return; }
    }
    ctx->pc = 0x1ED334u;
label_1ed334:
    // 0x1ed334: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1ed334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1ed338: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ed338u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ed33c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ed33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ed340: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED340u;
    {
        const bool branch_taken_0x1ed340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED340u;
            // 0x1ed344: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed340) {
            ctx->pc = 0x1ED384u;
            goto label_1ed384;
        }
    }
    ctx->pc = 0x1ED348u;
    // 0x1ed348: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ed34c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED34Cu;
    {
        const bool branch_taken_0x1ed34c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ED350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED34Cu;
            // 0x1ed350: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed34c) {
            ctx->pc = 0x1ED358u;
            goto label_1ed358;
        }
    }
    ctx->pc = 0x1ED354u;
    // 0x1ed354: 0x26b6fff7  addiu       $s6, $s5, -0x9
    ctx->pc = 0x1ed354u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967287));
label_1ed358:
    // 0x1ed358: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed35c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed35cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed360: 0x8422dc9e  lh          $v0, -0x2362($at)
    ctx->pc = 0x1ed360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958238)));
    // 0x1ed364: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed364u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed368: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1ed36c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed370: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1ed370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1ed374: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED374u;
    SET_GPR_U32(ctx, 31, 0x1ED37Cu);
    ctx->pc = 0x1ED378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED374u;
            // 0x1ed378: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED37Cu; }
        if (ctx->pc != 0x1ED37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED37Cu; }
        if (ctx->pc != 0x1ED37Cu) { return; }
    }
    ctx->pc = 0x1ED37Cu;
label_1ed37c:
    // 0x1ed37c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED37Cu;
    {
        const bool branch_taken_0x1ed37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed37c) {
            ctx->pc = 0x1ED3A4u;
            goto label_1ed3a4;
        }
    }
    ctx->pc = 0x1ED384u;
label_1ed384:
    // 0x1ed384: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x1ED384u;
    SET_GPR_U32(ctx, 31, 0x1ED38Cu);
    ctx->pc = 0x1ED388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED384u;
            // 0x1ed388: 0x2404013d  addiu       $a0, $zero, 0x13D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED38Cu; }
        if (ctx->pc != 0x1ED38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED38Cu; }
        if (ctx->pc != 0x1ED38Cu) { return; }
    }
    ctx->pc = 0x1ED38Cu;
label_1ed38c:
    // 0x1ed38c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED38Cu;
    {
        const bool branch_taken_0x1ed38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed38c) {
            ctx->pc = 0x1ED3A4u;
            goto label_1ed3a4;
        }
    }
    ctx->pc = 0x1ED394u;
    // 0x1ed394: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ed398: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED398u;
    {
        const bool branch_taken_0x1ed398 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ed398) {
            ctx->pc = 0x1ED3A4u;
            goto label_1ed3a4;
        }
    }
    ctx->pc = 0x1ED3A0u;
    // 0x1ed3a0: 0x26b6ffe0  addiu       $s6, $s5, -0x20
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
label_1ed3a4:
    // 0x1ed3a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed3a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed3ac: 0x8c238dd0  lw          $v1, -0x7230($at)
    ctx->pc = 0x1ed3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938064)));
    // 0x1ed3b0: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x1ed3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x1ed3b4: 0xac721b94  sw          $s2, 0x1B94($v1)
    ctx->pc = 0x1ed3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 18));
    // 0x1ed3b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed3bc: 0xac741b98  sw          $s4, 0x1B98($v1)
    ctx->pc = 0x1ed3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 20));
    // 0x1ed3c0: 0xac621c34  sw          $v0, 0x1C34($v1)
    ctx->pc = 0x1ed3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7220), GPR_U32(ctx, 2));
    // 0x1ed3c4: 0x8c238dd0  lw          $v1, -0x7230($at)
    ctx->pc = 0x1ed3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938064)));
    // 0x1ed3c8: 0xac761b9c  sw          $s6, 0x1B9C($v1)
    ctx->pc = 0x1ed3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7068), GPR_U32(ctx, 22));
    // 0x1ed3cc: 0xac741ba0  sw          $s4, 0x1BA0($v1)
    ctx->pc = 0x1ed3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7072), GPR_U32(ctx, 20));
    // 0x1ed3d0: 0xac621c38  sw          $v0, 0x1C38($v1)
    ctx->pc = 0x1ed3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7224), GPR_U32(ctx, 2));
    // 0x1ed3d4: 0x26940016  addiu       $s4, $s4, 0x16
    ctx->pc = 0x1ed3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
label_1ed3d8:
    // 0x1ed3d8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed3d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed3dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed3e0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed3e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed3e4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1ed3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1ed3e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed3ec: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED3ECu;
    SET_GPR_U32(ctx, 31, 0x1ED3F4u);
    ctx->pc = 0x1ED3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED3ECu;
            // 0x1ed3f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3F4u; }
        if (ctx->pc != 0x1ED3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3F4u; }
        if (ctx->pc != 0x1ED3F4u) { return; }
    }
    ctx->pc = 0x1ED3F4u;
label_1ed3f4:
    // 0x1ed3f4: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1ed3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1ed3f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED3F8u;
    {
        const bool branch_taken_0x1ed3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3f8) {
            ctx->pc = 0x1ED438u;
            goto label_1ed438;
        }
    }
    ctx->pc = 0x1ED400u;
    // 0x1ed400: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ed400u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ed404: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ed404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ed408: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED408u;
    {
        const bool branch_taken_0x1ed408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed408) {
            ctx->pc = 0x1ED438u;
            goto label_1ed438;
        }
    }
    ctx->pc = 0x1ED410u;
    // 0x1ed410: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1ed410u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed414: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ed418: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ed418u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed41c: 0x8422dca0  lh          $v0, -0x2360($at)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958240)));
    // 0x1ed420: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed424: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed428: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1ed428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1ed42c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1ed42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1ed430: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED430u;
    SET_GPR_U32(ctx, 31, 0x1ED438u);
    ctx->pc = 0x1ED434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED430u;
            // 0x1ed434: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED438u; }
        if (ctx->pc != 0x1ED438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED438u; }
        if (ctx->pc != 0x1ED438u) { return; }
    }
    ctx->pc = 0x1ED438u;
label_1ed438:
    // 0x1ed438: 0x17c0000e  bnez        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED438u;
    {
        const bool branch_taken_0x1ed438 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED438u;
            // 0x1ed43c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed438) {
            ctx->pc = 0x1ED474u;
            goto label_1ed474;
        }
    }
    ctx->pc = 0x1ED440u;
    // 0x1ed440: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed448: 0x8c238dd4  lw          $v1, -0x722C($at)
    ctx->pc = 0x1ed448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ed44c: 0xac721b94  sw          $s2, 0x1B94($v1)
    ctx->pc = 0x1ed44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 18));
    // 0x1ed450: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed454: 0xac741b98  sw          $s4, 0x1B98($v1)
    ctx->pc = 0x1ed454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 20));
    // 0x1ed458: 0xac621c34  sw          $v0, 0x1C34($v1)
    ctx->pc = 0x1ed458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7220), GPR_U32(ctx, 2));
    // 0x1ed45c: 0x8c238dd4  lw          $v1, -0x722C($at)
    ctx->pc = 0x1ed45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ed460: 0xac751b9c  sw          $s5, 0x1B9C($v1)
    ctx->pc = 0x1ed460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7068), GPR_U32(ctx, 21));
    // 0x1ed464: 0xac741ba0  sw          $s4, 0x1BA0($v1)
    ctx->pc = 0x1ed464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7072), GPR_U32(ctx, 20));
    // 0x1ed468: 0xac621c38  sw          $v0, 0x1C38($v1)
    ctx->pc = 0x1ed468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7224), GPR_U32(ctx, 2));
    // 0x1ed46c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1ED46Cu;
    {
        const bool branch_taken_0x1ed46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED46Cu;
            // 0x1ed470: 0x26940016  addiu       $s4, $s4, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed46c) {
            ctx->pc = 0x1ED524u;
            goto label_1ed524;
        }
    }
    ctx->pc = 0x1ED474u;
label_1ed474:
    // 0x1ed474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ed474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed478: 0x8c238dd4  lw          $v1, -0x722C($at)
    ctx->pc = 0x1ed478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ed47c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ed480: 0xac721b94  sw          $s2, 0x1B94($v1)
    ctx->pc = 0x1ed480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 18));
    // 0x1ed484: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed488: 0xac741b98  sw          $s4, 0x1B98($v1)
    ctx->pc = 0x1ed488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 20));
    // 0x1ed48c: 0xac661c34  sw          $a2, 0x1C34($v1)
    ctx->pc = 0x1ed48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7220), GPR_U32(ctx, 6));
    // 0x1ed490: 0x8c308dd4  lw          $s0, -0x722C($at)
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ed494: 0x8e0317e4  lw          $v1, 0x17E4($s0)
    ctx->pc = 0x1ed494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6116)));
    // 0x1ed498: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED498u;
    {
        const bool branch_taken_0x1ed498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed498) {
            ctx->pc = 0x1ED4D8u;
            goto label_1ed4d8;
        }
    }
    ctx->pc = 0x1ED4A0u;
    // 0x1ed4a0: 0xc6011e18  lwc1        $f1, 0x1E18($s0)
    ctx->pc = 0x1ed4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed4a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1ed4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1ed4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed4ac: 0x0  nop
    ctx->pc = 0x1ed4acu;
    // NOP
    // 0x1ed4b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed4b4: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1ed4b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1ed4b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED4B8u;
    SET_GPR_U32(ctx, 31, 0x1ED4C0u);
    ctx->pc = 0x1ED4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4B8u;
            // 0x1ed4bc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4C0u; }
        if (ctx->pc != 0x1ED4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4C0u; }
        if (ctx->pc != 0x1ED4C0u) { return; }
    }
    ctx->pc = 0x1ED4C0u;
label_1ed4c0:
    // 0x1ed4c0: 0xae021b9c  sw          $v0, 0x1B9C($s0)
    ctx->pc = 0x1ed4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
    // 0x1ed4c4: 0xae141ba0  sw          $s4, 0x1BA0($s0)
    ctx->pc = 0x1ed4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 20));
    // 0x1ed4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4cc: 0xae021c38  sw          $v0, 0x1C38($s0)
    ctx->pc = 0x1ed4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 2));
    // 0x1ed4d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1ED4D0u;
    {
        const bool branch_taken_0x1ed4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4D0u;
            // 0x1ed4d4: 0x26940016  addiu       $s4, $s4, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4d0) {
            ctx->pc = 0x1ED524u;
            goto label_1ed524;
        }
    }
    ctx->pc = 0x1ED4D8u;
label_1ed4d8:
    // 0x1ed4d8: 0xae121b9c  sw          $s2, 0x1B9C($s0)
    ctx->pc = 0x1ed4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 18));
    // 0x1ed4dc: 0x26820016  addiu       $v0, $s4, 0x16
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
    // 0x1ed4e0: 0xae021ba0  sw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1ed4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 2));
    // 0x1ed4e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed4e8: 0xae061c38  sw          $a2, 0x1C38($s0)
    ctx->pc = 0x1ed4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 6));
    // 0x1ed4ec: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1ed4f0: 0x8c308dd4  lw          $s0, -0x722C($at)
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938068)));
    // 0x1ed4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed4f8: 0xc6011e1c  lwc1        $f1, 0x1E1C($s0)
    ctx->pc = 0x1ed4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed4fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed500: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1ed500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1ed504: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED504u;
    SET_GPR_U32(ctx, 31, 0x1ED50Cu);
    ctx->pc = 0x1ED508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED504u;
            // 0x1ed508: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED50Cu; }
        if (ctx->pc != 0x1ED50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED50Cu; }
        if (ctx->pc != 0x1ED50Cu) { return; }
    }
    ctx->pc = 0x1ED50Cu;
label_1ed50c:
    // 0x1ed50c: 0xae021ba4  sw          $v0, 0x1BA4($s0)
    ctx->pc = 0x1ed50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7076), GPR_U32(ctx, 2));
    // 0x1ed510: 0x26820012  addiu       $v0, $s4, 0x12
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18));
    // 0x1ed514: 0xae021ba8  sw          $v0, 0x1BA8($s0)
    ctx->pc = 0x1ed514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7080), GPR_U32(ctx, 2));
    // 0x1ed518: 0x2694002c  addiu       $s4, $s4, 0x2C
    ctx->pc = 0x1ed518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x1ed51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed520: 0xae021c3c  sw          $v0, 0x1C3C($s0)
    ctx->pc = 0x1ed520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7228), GPR_U32(ctx, 2));
label_1ed524:
    // 0x1ed524: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1ED524u;
    SET_GPR_U32(ctx, 31, 0x1ED52Cu);
    ctx->pc = 0x1ED528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED524u;
            // 0x1ed528: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED52Cu; }
        if (ctx->pc != 0x1ED52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED52Cu; }
        if (ctx->pc != 0x1ED52Cu) { return; }
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed530: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1ed534: 0x8c268dd8  lw          $a2, -0x7228($at)
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938072)));
    // 0x1ed538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed540: 0xacd21b94  sw          $s2, 0x1B94($a2)
    ctx->pc = 0x1ed540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7060), GPR_U32(ctx, 18));
    // 0x1ed544: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed548: 0xacd41b98  sw          $s4, 0x1B98($a2)
    ctx->pc = 0x1ed548u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7064), GPR_U32(ctx, 20));
    // 0x1ed54c: 0xacc31c34  sw          $v1, 0x1C34($a2)
    ctx->pc = 0x1ed54cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7220), GPR_U32(ctx, 3));
    // 0x1ed550: 0x8c308dd8  lw          $s0, -0x7228($at)
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938072)));
    // 0x1ed554: 0xc6011e18  lwc1        $f1, 0x1E18($s0)
    ctx->pc = 0x1ed554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ed558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed55c: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1ed55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1ed560: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1ED560u;
    SET_GPR_U32(ctx, 31, 0x1ED568u);
    ctx->pc = 0x1ED564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED560u;
            // 0x1ed564: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED568u; }
        if (ctx->pc != 0x1ED568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED568u; }
        if (ctx->pc != 0x1ED568u) { return; }
    }
    ctx->pc = 0x1ED568u;
label_1ed568:
    // 0x1ed568: 0xae021b9c  sw          $v0, 0x1B9C($s0)
    ctx->pc = 0x1ed568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
    // 0x1ed56c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed570: 0xae141ba0  sw          $s4, 0x1BA0($s0)
    ctx->pc = 0x1ed570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 20));
    // 0x1ed574: 0xae041c38  sw          $a0, 0x1C38($s0)
    ctx->pc = 0x1ed574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 4));
    // 0x1ed578: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1ed578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1ed57c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED57Cu;
    {
        const bool branch_taken_0x1ed57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED57Cu;
            // 0x1ed580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed57c) {
            ctx->pc = 0x1ED5B4u;
            goto label_1ed5b4;
        }
    }
    ctx->pc = 0x1ED584u;
    // 0x1ed584: 0x80420016  lb          $v0, 0x16($v0)
    ctx->pc = 0x1ed584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1ed588: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED588u;
    {
        const bool branch_taken_0x1ed588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED588u;
            // 0x1ed58c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed588) {
            ctx->pc = 0x1ED5B0u;
            goto label_1ed5b0;
        }
    }
    ctx->pc = 0x1ED590u;
    // 0x1ed590: 0x26820024  addiu       $v0, $s4, 0x24
    ctx->pc = 0x1ed590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x1ed594: 0x8c258ddc  lw          $a1, -0x7224($at)
    ctx->pc = 0x1ed594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938076)));
    // 0x1ed598: 0x8ca31e14  lw          $v1, 0x1E14($a1)
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7700)));
    // 0x1ed59c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1ed59cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1ed5a0: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ed5a4: 0xaca31b94  sw          $v1, 0x1B94($a1)
    ctx->pc = 0x1ed5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7060), GPR_U32(ctx, 3));
    // 0x1ed5a8: 0xaca21b98  sw          $v0, 0x1B98($a1)
    ctx->pc = 0x1ed5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7064), GPR_U32(ctx, 2));
    // 0x1ed5ac: 0xaca41c34  sw          $a0, 0x1C34($a1)
    ctx->pc = 0x1ed5acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7220), GPR_U32(ctx, 4));
label_1ed5b0:
    // 0x1ed5b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed5b4:
    // 0x1ed5b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ed5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed5b8:
    // 0x1ed5b8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ed5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ed5bc: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x1ed5c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ed5c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed5c8: 0xc0878f0  jal         func_21E3C0
    ctx->pc = 0x1ED5C8u;
    SET_GPR_U32(ctx, 31, 0x1ED5D0u);
    ctx->pc = 0x1ED5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5C8u;
            // 0x1ed5cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C0u;
    if (runtime->hasFunction(0x21E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5D0u; }
        if (ctx->pc != 0x1ED5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgAlpha__7CDC2MesFi_0x21e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5D0u; }
        if (ctx->pc != 0x1ED5D0u) { return; }
    }
    ctx->pc = 0x1ED5D0u;
label_1ed5d0:
    // 0x1ed5d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ed5d4: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1ed5d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ed5d8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ED5D8u;
    {
        const bool branch_taken_0x1ed5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5D8u;
            // 0x1ed5dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5d8) {
            ctx->pc = 0x1ED5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed5b8;
        }
    }
    ctx->pc = 0x1ED5E0u;
    // 0x1ed5e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed5e4: 0x8c24ca54  lw          $a0, -0x35AC($at)
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x1ed5e8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED5E8u;
    {
        const bool branch_taken_0x1ed5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5e8) {
            ctx->pc = 0x1ED638u;
            goto label_1ed638;
        }
    }
    ctx->pc = 0x1ED5F0u;
    // 0x1ed5f0: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ed5f4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ed5f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ed5fc: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x1ed600: 0x2442dc12  addiu       $v0, $v0, -0x23EE
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958098));
    // 0x1ed604: 0x27858ee0  addiu       $a1, $gp, -0x7120
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938336));
    // 0x1ed608: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ed608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ed60c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ed60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ed610: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ed614: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed618: 0xaf838ee0  sw          $v1, -0x7120($gp)
    ctx->pc = 0x1ed618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 3));
    // 0x1ed61c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed620: 0xc0876b0  jal         func_21DAC0
    ctx->pc = 0x1ED620u;
    SET_GPR_U32(ctx, 31, 0x1ED628u);
    ctx->pc = 0x1ED624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED620u;
            // 0x1ed624: 0xaf828ee4  sw          $v0, -0x711C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED628u; }
        if (ctx->pc != 0x1ED628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED628u; }
        if (ctx->pc != 0x1ED628u) { return; }
    }
    ctx->pc = 0x1ED628u;
label_1ed628:
    // 0x1ed628: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed62c: 0x8c24ca54  lw          $a0, -0x35AC($at)
    ctx->pc = 0x1ed62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x1ed630: 0xc0878f0  jal         func_21E3C0
    ctx->pc = 0x1ED630u;
    SET_GPR_U32(ctx, 31, 0x1ED638u);
    ctx->pc = 0x1ED634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED630u;
            // 0x1ed634: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C0u;
    if (runtime->hasFunction(0x21E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED638u; }
        if (ctx->pc != 0x1ED638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgAlpha__7CDC2MesFi_0x21e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED638u; }
        if (ctx->pc != 0x1ED638u) { return; }
    }
    ctx->pc = 0x1ED638u;
label_1ed638:
    // 0x1ed638: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ed638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ed63c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1ed63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ed640: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ed640u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ed644: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1ed644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ed648: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1ed648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ed64c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ed64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ed650: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ed650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ed654: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ed654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ed658: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ed658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed65c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ed65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ed660: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ed660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed664: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ed664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed668: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ed668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed66c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed674: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED674u;
            // 0x1ed678: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED67Cu;
}
