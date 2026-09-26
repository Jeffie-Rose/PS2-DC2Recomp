#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUkiWaitTime__FP9FISH_DATAP6CScenePfii
// Address: 0x302a90 - 0x3031d4
void GetUkiWaitTime__FP9FISH_DATAP6CScenePfii_0x302a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUkiWaitTime__FP9FISH_DATAP6CScenePfii_0x302a90");
#endif

    switch (ctx->pc) {
        case 0x302b08u: goto label_302b08;
        case 0x302b14u: goto label_302b14;
        case 0x302b28u: goto label_302b28;
        case 0x302b44u: goto label_302b44;
        case 0x302b54u: goto label_302b54;
        case 0x302d08u: goto label_302d08;
        case 0x302d20u: goto label_302d20;
        case 0x302e7cu: goto label_302e7c;
        case 0x302f1cu: goto label_302f1c;
        case 0x302f24u: goto label_302f24;
        case 0x302f90u: goto label_302f90;
        case 0x302ff8u: goto label_302ff8;
        case 0x303000u: goto label_303000;
        case 0x303088u: goto label_303088;
        case 0x3030a8u: goto label_3030a8;
        case 0x3030d0u: goto label_3030d0;
        case 0x3030f0u: goto label_3030f0;
        case 0x3030fcu: goto label_3030fc;
        case 0x303110u: goto label_303110;
        default: break;
    }

    ctx->pc = 0x302a90u;

    // 0x302a90: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x302a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x302a94: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x302a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x302a98: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x302a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x302a9c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x302a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x302aa0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x302aa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302aa4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x302aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x302aa8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x302aa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302aac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x302aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x302ab0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x302ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x302ab4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x302ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x302ab8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x302ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302abc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x302abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x302ac0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x302ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ac4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x302ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x302ac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x302ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x302acc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x302accu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x302ad0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ad4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x302ad4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x302ad8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x302ad8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x302adc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x302adcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x302ae0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x302ae0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x302ae4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x302ae4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x302ae8: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x302AE8u;
    {
        const bool branch_taken_0x302ae8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x302AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302AE8u;
            // 0x302aec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ae8) {
            ctx->pc = 0x302B00u;
            goto label_302b00;
        }
    }
    ctx->pc = 0x302AF0u;
    // 0x302af0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x302af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302af4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x302af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x302af8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x302AF8u;
    {
        const bool branch_taken_0x302af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302AF8u;
            // 0x302afc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302af8) {
            ctx->pc = 0x303188u;
            goto label_303188;
        }
    }
    ctx->pc = 0x302B00u;
label_302b00:
    // 0x302b00: 0xc05831c  jal         func_160C70
    ctx->pc = 0x302B00u;
    SET_GPR_U32(ctx, 31, 0x302B08u);
    ctx->pc = 0x302B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302B00u;
            // 0x302b04: 0xc60c2f6c  lwc1        $f12, 0x2F6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B08u; }
        if (ctx->pc != 0x302B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B08u; }
        if (ctx->pc != 0x302B08u) { return; }
    }
    ctx->pc = 0x302B08u;
label_302b08:
    // 0x302b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b0c: 0xc0a0f80  jal         func_283E00
    ctx->pc = 0x302B0Cu;
    SET_GPR_U32(ctx, 31, 0x302B14u);
    ctx->pc = 0x302B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302B0Cu;
            // 0x302b10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B14u; }
        if (ctx->pc != 0x302B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B14u; }
        if (ctx->pc != 0x302B14u) { return; }
    }
    ctx->pc = 0x302B14u;
label_302b14:
    // 0x302b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b18: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x302b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b1c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x302b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x302b20: 0xc0c0dac  jal         func_3036B0
    ctx->pc = 0x302B20u;
    SET_GPR_U32(ctx, 31, 0x302B28u);
    ctx->pc = 0x302B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302B20u;
            // 0x302b24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036B0u;
    if (runtime->hasFunction(0x3036B0u)) {
        auto targetFn = runtime->lookupFunction(0x3036B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B28u; }
        if (ctx->pc != 0x302B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAppearFish__FiPfP10FISH_PLACEi_0x3036b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B28u; }
        if (ctx->pc != 0x302B28u) { return; }
    }
    ctx->pc = 0x302B28u;
label_302b28:
    // 0x302b28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x302b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x302b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x302b34: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x302b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x302b38: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x302B38u;
    {
        const bool branch_taken_0x302b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B38u;
            // 0x302b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b38) {
            ctx->pc = 0x302D00u;
            goto label_302d00;
        }
    }
    ctx->pc = 0x302B40u;
    // 0x302b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302b44:
    // 0x302b44: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x302b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x302b48: 0x244700c0  addiu       $a3, $v0, 0xC0
    ctx->pc = 0x302b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x302b4c: 0xc0bf144  jal         func_2FC510
    ctx->pc = 0x302B4Cu;
    SET_GPR_U32(ctx, 31, 0x302B54u);
    ctx->pc = 0x302B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302B4Cu;
            // 0x302b50: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC510u;
    if (runtime->hasFunction(0x2FC510u)) {
        auto targetFn = runtime->lookupFunction(0x2FC510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B54u; }
        if (ctx->pc != 0x302B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishParam__Fi_0x2fc510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B54u; }
        if (ctx->pc != 0x302B54u) { return; }
    }
    ctx->pc = 0x302B54u;
label_302b54:
    // 0x302b54: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x302B54u;
    {
        const bool branch_taken_0x302b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b54) {
            ctx->pc = 0x302CF0u;
            goto label_302cf0;
        }
    }
    ctx->pc = 0x302B5Cu;
    // 0x302b5c: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x302B5Cu;
    {
        const bool branch_taken_0x302b5c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x302B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B5Cu;
            // 0x302b60: 0x2a630012  slti        $v1, $s3, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b5c) {
            ctx->pc = 0x302B6Cu;
            goto label_302b6c;
        }
    }
    ctx->pc = 0x302B64u;
    // 0x302b64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302B64u;
    {
        const bool branch_taken_0x302b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302b64) {
            ctx->pc = 0x302B78u;
            goto label_302b78;
        }
    }
    ctx->pc = 0x302B6Cu;
label_302b6c:
    // 0x302b6c: 0x0  nop
    ctx->pc = 0x302b6cu;
    // NOP
    // 0x302b70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302B70u;
    {
        const bool branch_taken_0x302b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B70u;
            // 0x302b74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b70) {
            ctx->pc = 0x302B88u;
            goto label_302b88;
        }
    }
    ctx->pc = 0x302B78u;
label_302b78:
    // 0x302b78: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x302b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x302b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x302b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302b80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x302b84: 0x0  nop
    ctx->pc = 0x302b84u;
    // NOP
label_302b88:
    // 0x302b88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x302b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x302b8c: 0x18600042  blez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x302B8Cu;
    {
        const bool branch_taken_0x302b8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x302B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B8Cu;
            // 0x302b90: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b8c) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x302B94u;
    // 0x302b94: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x302B94u;
    {
        const bool branch_taken_0x302b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x302B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B94u;
            // 0x302b98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b94) {
            ctx->pc = 0x302BE4u;
            goto label_302be4;
        }
    }
    ctx->pc = 0x302B9Cu;
    // 0x302b9c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x302B9Cu;
    {
        const bool branch_taken_0x302b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x302BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B9Cu;
            // 0x302ba0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b9c) {
            ctx->pc = 0x302C00u;
            goto label_302c00;
        }
    }
    ctx->pc = 0x302BA4u;
    // 0x302ba4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x302BA4u;
    {
        const bool branch_taken_0x302ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302ba4) {
            ctx->pc = 0x302BC8u;
            goto label_302bc8;
        }
    }
    ctx->pc = 0x302BACu;
    // 0x302bac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302BACu;
    {
        const bool branch_taken_0x302bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bac) {
            ctx->pc = 0x302BBCu;
            goto label_302bbc;
        }
    }
    ctx->pc = 0x302BB4u;
    // 0x302bb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x302BB4u;
    {
        const bool branch_taken_0x302bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bb4) {
            ctx->pc = 0x302C00u;
            goto label_302c00;
        }
    }
    ctx->pc = 0x302BBCu;
label_302bbc:
    // 0x302bbc: 0x0  nop
    ctx->pc = 0x302bbcu;
    // NOP
    // 0x302bc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x302BC0u;
    {
        const bool branch_taken_0x302bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302BC0u;
            // 0x302bc4: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bc0) {
            ctx->pc = 0x302C00u;
            goto label_302c00;
        }
    }
    ctx->pc = 0x302BC8u;
label_302bc8:
    // 0x302bc8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x302bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x302bcc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x302bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302bd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x302bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302bd4: 0x0  nop
    ctx->pc = 0x302bd4u;
    // NOP
    // 0x302bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302bdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x302BDCu;
    {
        const bool branch_taken_0x302bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302BDCu;
            // 0x302be0: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bdc) {
            ctx->pc = 0x302C00u;
            goto label_302c00;
        }
    }
    ctx->pc = 0x302BE4u;
label_302be4:
    // 0x302be4: 0x0  nop
    ctx->pc = 0x302be4u;
    // NOP
    // 0x302be8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x302be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x302bec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x302becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302bf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x302bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302bf4: 0x0  nop
    ctx->pc = 0x302bf4u;
    // NOP
    // 0x302bf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302bfc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x302bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_302c00:
    // 0x302c00: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x302C00u;
    {
        const bool branch_taken_0x302c00 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x302C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C00u;
            // 0x302c04: 0x2a230004  slti        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c00) {
            ctx->pc = 0x302C10u;
            goto label_302c10;
        }
    }
    ctx->pc = 0x302C08u;
    // 0x302c08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x302C08u;
    {
        const bool branch_taken_0x302c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302c08) {
            ctx->pc = 0x302C18u;
            goto label_302c18;
        }
    }
    ctx->pc = 0x302C10u;
label_302c10:
    // 0x302c10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302C10u;
    {
        const bool branch_taken_0x302c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C10u;
            // 0x302c14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c10) {
            ctx->pc = 0x302C28u;
            goto label_302c28;
        }
    }
    ctx->pc = 0x302C18u;
label_302c18:
    // 0x302c18: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x302c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x302c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x302c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302c20: 0x8443004c  lh          $v1, 0x4C($v0)
    ctx->pc = 0x302c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x302c24: 0x0  nop
    ctx->pc = 0x302c24u;
    // NOP
label_302c28:
    // 0x302c28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x302c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x302c2c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x302C2Cu;
    {
        const bool branch_taken_0x302c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C2Cu;
            // 0x302c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c2c) {
            ctx->pc = 0x302C7Cu;
            goto label_302c7c;
        }
    }
    ctx->pc = 0x302C34u;
    // 0x302c34: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x302C34u;
    {
        const bool branch_taken_0x302c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C34u;
            // 0x302c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c34) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x302C3Cu;
    // 0x302c3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x302C3Cu;
    {
        const bool branch_taken_0x302c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302c3c) {
            ctx->pc = 0x302C60u;
            goto label_302c60;
        }
    }
    ctx->pc = 0x302C44u;
    // 0x302c44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x302C44u;
    {
        const bool branch_taken_0x302c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c44) {
            ctx->pc = 0x302C54u;
            goto label_302c54;
        }
    }
    ctx->pc = 0x302C4Cu;
    // 0x302c4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x302C4Cu;
    {
        const bool branch_taken_0x302c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c4c) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x302C54u;
label_302c54:
    // 0x302c54: 0x0  nop
    ctx->pc = 0x302c54u;
    // NOP
    // 0x302c58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x302C58u;
    {
        const bool branch_taken_0x302c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C58u;
            // 0x302c5c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c58) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x302C60u;
label_302c60:
    // 0x302c60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x302c64: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x302c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302c6c: 0x0  nop
    ctx->pc = 0x302c6cu;
    // NOP
    // 0x302c70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302c74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x302C74u;
    {
        const bool branch_taken_0x302c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C74u;
            // 0x302c78: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c74) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x302C7Cu;
label_302c7c:
    // 0x302c7c: 0x0  nop
    ctx->pc = 0x302c7cu;
    // NOP
    // 0x302c80: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x302c84: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x302c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302c8c: 0x0  nop
    ctx->pc = 0x302c8cu;
    // NOP
    // 0x302c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302c94: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x302c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_302c98:
    // 0x302c98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x302c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x302c9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x302C9Cu;
    {
        const bool branch_taken_0x302c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C9Cu;
            // 0x302ca0: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c9c) {
            ctx->pc = 0x302CCCu;
            goto label_302ccc;
        }
    }
    ctx->pc = 0x302CA4u;
    // 0x302ca4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x302ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x302ca8: 0xc4219cf4  lwc1        $f1, -0x630C($at)
    ctx->pc = 0x302ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302cac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x302cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x302cb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x302cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302cb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302cb8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x302cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302cbc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x302cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x302cc0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x302cc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x302cc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302cc8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x302cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_302ccc:
    // 0x302ccc: 0x0  nop
    ctx->pc = 0x302cccu;
    // NOP
    // 0x302cd0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x302cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x302cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302cd8: 0x0  nop
    ctx->pc = 0x302cd8u;
    // NOP
    // 0x302cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ce0: 0x0  nop
    ctx->pc = 0x302ce0u;
    // NOP
    // 0x302ce4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x302CE4u;
    {
        const bool branch_taken_0x302ce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302CE4u;
            // 0x302ce8: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ce4) {
            ctx->pc = 0x302CF0u;
            goto label_302cf0;
        }
    }
    ctx->pc = 0x302CECu;
    // 0x302cec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x302cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_302cf0:
    // 0x302cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x302cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x302cf4: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x302cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x302cf8: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x302CF8u;
    {
        const bool branch_taken_0x302cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302CF8u;
            // 0x302cfc: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cf8) {
            ctx->pc = 0x302B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_302b44;
        }
    }
    ctx->pc = 0x302D00u;
label_302d00:
    // 0x302d00: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x302D00u;
    SET_GPR_U32(ctx, 31, 0x302D08u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D08u; }
        if (ctx->pc != 0x302D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302D08u; }
        if (ctx->pc != 0x302D08u) { return; }
    }
    ctx->pc = 0x302D08u;
label_302d08:
    // 0x302d08: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x302d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302d0c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x302d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x302d10: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x302D10u;
    {
        const bool branch_taken_0x302d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302D10u;
            // 0x302d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d10) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D18u;
    // 0x302d18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x302d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d1c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x302d1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_302d20:
    // 0x302d20: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x302d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x302d24: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x302d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x302d28: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x302d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302d2c: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x302d2cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
    // 0x302d30: 0x0  nop
    ctx->pc = 0x302d30u;
    // NOP
    // 0x302d34: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x302d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302d38: 0x0  nop
    ctx->pc = 0x302d38u;
    // NOP
    // 0x302d3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x302D3Cu;
    {
        const bool branch_taken_0x302d3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302D3Cu;
            // 0x302d40: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d3c) {
            ctx->pc = 0x302D58u;
            goto label_302d58;
        }
    }
    ctx->pc = 0x302D44u;
    // 0x302d44: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x302d44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x302d48: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x302d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302d4c: 0x0  nop
    ctx->pc = 0x302d4cu;
    // NOP
    // 0x302d50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x302D50u;
    {
        const bool branch_taken_0x302d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302d50) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D58u;
label_302d58:
    // 0x302d58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x302d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x302d5c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x302d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x302d60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x302D60u;
    {
        const bool branch_taken_0x302d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302D60u;
            // 0x302d64: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d60) {
            ctx->pc = 0x302D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_302d20;
        }
    }
    ctx->pc = 0x302D68u;
label_302d68:
    // 0x302d68: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x302d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x302d6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x302d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x302d70: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x302d70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x302d74: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x302d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x302d78: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x302d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x302d7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x302d80: 0x241100f0  addiu       $s1, $zero, 0xF0
    ctx->pc = 0x302d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x302d84: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x302d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x302d88: 0xaf80a000  sw          $zero, -0x6000($gp)
    ctx->pc = 0x302d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942720), GPR_U32(ctx, 0));
    // 0x302d8c: 0x4487c800  mtc1        $a3, $f25
    ctx->pc = 0x302d8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x302d90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x302d90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d94: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x302d98: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x302d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302da0: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x302da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x302da4: 0x4482d000  mtc1        $v0, $f26
    ctx->pc = 0x302da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x302da8: 0x8cf500c0  lw          $s5, 0xC0($a3)
    ctx->pc = 0x302da8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x302dac: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x302dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x302db0: 0x8f829fd8  lw          $v0, -0x6028($gp)
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942680)));
    // 0x302db4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x302DB4u;
    {
        const bool branch_taken_0x302db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302DB4u;
            // 0x302db8: 0x4600c546  mov.s       $f21, $f24 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302db4) {
            ctx->pc = 0x302E0Cu;
            goto label_302e0c;
        }
    }
    ctx->pc = 0x302DBCu;
    // 0x302dbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x302dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302dc0: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x302DC0u;
    {
        const bool branch_taken_0x302dc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x302dc0) {
            ctx->pc = 0x302E0Cu;
            goto label_302e0c;
        }
    }
    ctx->pc = 0x302DC8u;
    // 0x302dc8: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x302dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302dcc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x302dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x302dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302dd4: 0x0  nop
    ctx->pc = 0x302dd4u;
    // NOP
    // 0x302dd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ddc: 0x0  nop
    ctx->pc = 0x302ddcu;
    // NOP
    // 0x302de0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x302DE0u;
    {
        const bool branch_taken_0x302de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302de0) {
            ctx->pc = 0x302E0Cu;
            goto label_302e0c;
        }
    }
    ctx->pc = 0x302DE8u;
    // 0x302de8: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x302de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302dec: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x302decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x302df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302df4: 0x0  nop
    ctx->pc = 0x302df4u;
    // NOP
    // 0x302df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302dfc: 0x0  nop
    ctx->pc = 0x302dfcu;
    // NOP
    // 0x302e00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x302E00u;
    {
        const bool branch_taken_0x302e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E00u;
            // 0x302e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e00) {
            ctx->pc = 0x302E0Cu;
            goto label_302e0c;
        }
    }
    ctx->pc = 0x302E08u;
    // 0x302e08: 0xaf829fdc  sw          $v0, -0x6024($gp)
    ctx->pc = 0x302e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 2));
label_302e0c:
    // 0x302e0c: 0x8f829fdc  lw          $v0, -0x6024($gp)
    ctx->pc = 0x302e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942684)));
    // 0x302e10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302E10u;
    {
        const bool branch_taken_0x302e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E10u;
            // 0x302e14: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e10) {
            ctx->pc = 0x302E44u;
            goto label_302e44;
        }
    }
    ctx->pc = 0x302E18u;
    // 0x302e18: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x302e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x302e1c: 0x4482c800  mtc1        $v0, $f25
    ctx->pc = 0x302e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x302e20: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x302e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x302e24: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x302e24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x302e28: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x302e28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x302e2c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x302e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x302e30: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x302e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x302e34: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x302e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x302e38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x302e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302e3c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x302E3Cu;
    {
        const bool branch_taken_0x302e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E3Cu;
            // 0x302e40: 0xaf82a000  sw          $v0, -0x6000($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e3c) {
            ctx->pc = 0x303114u;
            goto label_303114;
        }
    }
    ctx->pc = 0x302E44u;
label_302e44:
    // 0x302e44: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302E44u;
    {
        const bool branch_taken_0x302e44 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x302E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E44u;
            // 0x302e48: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e44) {
            ctx->pc = 0x302E54u;
            goto label_302e54;
        }
    }
    ctx->pc = 0x302E4Cu;
    // 0x302e4c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x302E4Cu;
    {
        const bool branch_taken_0x302e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E4Cu;
            // 0x302e50: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e4c) {
            ctx->pc = 0x30318Cu;
            goto label_30318c;
        }
    }
    ctx->pc = 0x302E54u;
label_302e54:
    // 0x302e54: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x302E54u;
    {
        const bool branch_taken_0x302e54 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x302E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E54u;
            // 0x302e58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e54) {
            ctx->pc = 0x302E68u;
            goto label_302e68;
        }
    }
    ctx->pc = 0x302E5Cu;
    // 0x302e5c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x302e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x302e60: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x302E60u;
    {
        const bool branch_taken_0x302e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E60u;
            // 0x302e64: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e60) {
            ctx->pc = 0x303188u;
            goto label_303188;
        }
    }
    ctx->pc = 0x302E68u;
label_302e68:
    // 0x302e68: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x302e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x302e6c: 0x1aa00069  blez        $s5, . + 4 + (0x69 << 2)
    ctx->pc = 0x302E6Cu;
    {
        const bool branch_taken_0x302e6c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x302E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E6Cu;
            // 0x302e70: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e6c) {
            ctx->pc = 0x303014u;
            goto label_303014;
        }
    }
    ctx->pc = 0x302E74u;
    // 0x302e74: 0xc0bf144  jal         func_2FC510
    ctx->pc = 0x302E74u;
    SET_GPR_U32(ctx, 31, 0x302E7Cu);
    ctx->pc = 0x302E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302E74u;
            // 0x302e78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC510u;
    if (runtime->hasFunction(0x2FC510u)) {
        auto targetFn = runtime->lookupFunction(0x2FC510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302E7Cu; }
        if (ctx->pc != 0x302E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishParam__Fi_0x2fc510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302E7Cu; }
        if (ctx->pc != 0x302E7Cu) { return; }
    }
    ctx->pc = 0x302E7Cu;
label_302e7c:
    // 0x302e7c: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x302E7Cu;
    {
        const bool branch_taken_0x302e7c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x302E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E7Cu;
            // 0x302e80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e7c) {
            ctx->pc = 0x302E90u;
            goto label_302e90;
        }
    }
    ctx->pc = 0x302E84u;
    // 0x302e84: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x302e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x302e88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302E88u;
    {
        const bool branch_taken_0x302e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E88u;
            // 0x302e8c: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e88) {
            ctx->pc = 0x302E98u;
            goto label_302e98;
        }
    }
    ctx->pc = 0x302E90u;
label_302e90:
    // 0x302e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302E90u;
    {
        const bool branch_taken_0x302e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302E90u;
            // 0x302e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e90) {
            ctx->pc = 0x302EA4u;
            goto label_302ea4;
        }
    }
    ctx->pc = 0x302E98u;
label_302e98:
    // 0x302e98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x302e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x302e9c: 0x84420028  lh          $v0, 0x28($v0)
    ctx->pc = 0x302e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x302ea0: 0x0  nop
    ctx->pc = 0x302ea0u;
    // NOP
label_302ea4:
    // 0x302ea4: 0xaf82a000  sw          $v0, -0x6000($gp)
    ctx->pc = 0x302ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942720), GPR_U32(ctx, 2));
    // 0x302ea8: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x302ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x302eac: 0xc45700c8  lwc1        $f23, 0xC8($v0)
    ctx->pc = 0x302eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x302eb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x302eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x302eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302eb8: 0x0  nop
    ctx->pc = 0x302eb8u;
    // NOP
    // 0x302ebc: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x302ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ec0: 0x0  nop
    ctx->pc = 0x302ec0u;
    // NOP
    // 0x302ec4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x302EC4u;
    {
        const bool branch_taken_0x302ec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302EC4u;
            // 0x302ec8: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ec4) {
            ctx->pc = 0x302ED0u;
            goto label_302ed0;
        }
    }
    ctx->pc = 0x302ECCu;
    // 0x302ecc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x302eccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_302ed0:
    // 0x302ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302ed4: 0x0  nop
    ctx->pc = 0x302ed4u;
    // NOP
    // 0x302ed8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x302ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302edc: 0x0  nop
    ctx->pc = 0x302edcu;
    // NOP
    // 0x302ee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x302EE0u;
    {
        const bool branch_taken_0x302ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302ee0) {
            ctx->pc = 0x302EECu;
            goto label_302eec;
        }
    }
    ctx->pc = 0x302EE8u;
    // 0x302ee8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x302ee8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_302eec:
    // 0x302eec: 0xc783a00c  lwc1        $f3, -0x5FF4($gp)
    ctx->pc = 0x302eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302ef0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x302ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x302ef4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x302ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302ef8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x302ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f00: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x302f00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x302f04: 0x46006383  div.s       $f14, $f12, $f0
    ctx->pc = 0x302f04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x302f08: 0x46030b42  mul.s       $f13, $f1, $f3
    ctx->pc = 0x302f08u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x302f0c: 0x0  nop
    ctx->pc = 0x302f0cu;
    // NOP
    // 0x302f10: 0x0  nop
    ctx->pc = 0x302f10u;
    // NOP
    // 0x302f14: 0xc0c0a84  jal         func_302A10
    ctx->pc = 0x302F14u;
    SET_GPR_U32(ctx, 31, 0x302F1Cu);
    ctx->pc = 0x302A10u;
    if (runtime->hasFunction(0x302A10u)) {
        auto targetFn = runtime->lookupFunction(0x302A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F1Cu; }
        if (ctx->pc != 0x302F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandamNumber__Ffff_0x302a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F1Cu; }
        if (ctx->pc != 0x302F1Cu) { return; }
    }
    ctx->pc = 0x302F1Cu;
label_302f1c:
    // 0x302f1c: 0xc064214  jal         func_190850
    ctx->pc = 0x302F1Cu;
    SET_GPR_U32(ctx, 31, 0x302F24u);
    ctx->pc = 0x302F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302F1Cu;
            // 0x302f20: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x190850u;
    if (runtime->hasFunction(0x190850u)) {
        auto targetFn = runtime->lookupFunction(0x190850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F24u; }
        if (ctx->pc != 0x302F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCaptureMode__Fv_0x190850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F24u; }
        if (ctx->pc != 0x302F24u) { return; }
    }
    ctx->pc = 0x302F24u;
label_302f24:
    // 0x302f24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302F24u;
    {
        const bool branch_taken_0x302f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302F24u;
            // 0x302f28: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f24) {
            ctx->pc = 0x302F30u;
            goto label_302f30;
        }
    }
    ctx->pc = 0x302F2Cu;
    // 0x302f2c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x302f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_302f30:
    // 0x302f30: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x302f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f34: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x302f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x302f38: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x302f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x302f3c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x302f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x302f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x302f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302f48: 0x4601a603  div.s       $f24, $f20, $f1
    ctx->pc = 0x302f48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x302f4c: 0x0  nop
    ctx->pc = 0x302f4cu;
    // NOP
    // 0x302f50: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x302f50u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x302f54: 0x4602c036  c.le.s      $f24, $f2
    ctx->pc = 0x302f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f58: 0x0  nop
    ctx->pc = 0x302f58u;
    // NOP
    // 0x302f5c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x302F5Cu;
    {
        const bool branch_taken_0x302f5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302F5Cu;
            // 0x302f60: 0x3c023fa6  lui         $v0, 0x3FA6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f5c) {
            ctx->pc = 0x302F6Cu;
            goto label_302f6c;
        }
    }
    ctx->pc = 0x302F64u;
    // 0x302f64: 0x46001606  mov.s       $f24, $f2
    ctx->pc = 0x302f64u;
    ctx->f[24] = FPU_MOV_S(ctx->f[2]);
    // 0x302f68: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x302f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_302f6c:
    // 0x302f6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x302f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x302f70: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x302f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x302f74: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x302f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x302f78: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x302f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x302f7c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x302f7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302f80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x302f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302f84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x302f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x302f88: 0xc0c0a84  jal         func_302A10
    ctx->pc = 0x302F88u;
    SET_GPR_U32(ctx, 31, 0x302F90u);
    ctx->pc = 0x302A10u;
    if (runtime->hasFunction(0x302A10u)) {
        auto targetFn = runtime->lookupFunction(0x302A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F90u; }
        if (ctx->pc != 0x302F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandamNumber__Ffff_0x302a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F90u; }
        if (ctx->pc != 0x302F90u) { return; }
    }
    ctx->pc = 0x302F90u;
label_302f90:
    // 0x302f90: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x302f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x302f94: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x302f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x302f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302f9c: 0x0  nop
    ctx->pc = 0x302f9cu;
    // NOP
    // 0x302fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x302fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302fa4: 0x0  nop
    ctx->pc = 0x302fa4u;
    // NOP
    // 0x302fa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x302FA8u;
    {
        const bool branch_taken_0x302fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302fa8) {
            ctx->pc = 0x302FB4u;
            goto label_302fb4;
        }
    }
    ctx->pc = 0x302FB0u;
    // 0x302fb0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x302fb0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_302fb4:
    // 0x302fb4: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x302fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302fb8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x302fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x302fbc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x302fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302fc0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x302fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x302fc4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x302fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x302fc8: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x302fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302fcc: 0x4600c542  mul.s       $f21, $f24, $f0
    ctx->pc = 0x302fccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x302fd0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x302fd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x302fd4: 0x46030582  mul.s       $f22, $f0, $f3
    ctx->pc = 0x302fd4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x302fd8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x302fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302fdc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x302fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x302fe0: 0x4603a0c3  div.s       $f3, $f20, $f3
    ctx->pc = 0x302fe0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[20], ctx->f[3]); }
    // 0x302fe4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x302fe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x302fe8: 0x46031642  mul.s       $f25, $f2, $f3
    ctx->pc = 0x302fe8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x302fec: 0x4483d000  mtc1        $v1, $f26
    ctx->pc = 0x302fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x302ff0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x302FF0u;
    SET_GPR_U32(ctx, 31, 0x302FF8u);
    ctx->pc = 0x302FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302FF0u;
            // 0x302ff4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302FF8u; }
        if (ctx->pc != 0x302FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302FF8u; }
        if (ctx->pc != 0x302FF8u) { return; }
    }
    ctx->pc = 0x302FF8u;
label_302ff8:
    // 0x302ff8: 0xc0c3e70  jal         func_30F9C0
    ctx->pc = 0x302FF8u;
    SET_GPR_U32(ctx, 31, 0x303000u);
    ctx->pc = 0x302FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302FF8u;
            // 0x302ffc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303000u; }
        if (ctx->pc != 0x303000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303000u; }
        if (ctx->pc != 0x303000u) { return; }
    }
    ctx->pc = 0x303000u;
label_303000:
    // 0x303000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x303000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303004: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303004u;
    {
        const bool branch_taken_0x303004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x303004) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x30300Cu;
    // 0x30300c: 0x16b040  sll         $s6, $s6, 1
    ctx->pc = 0x30300cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_303010:
    // 0x303010: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x303010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_303014:
    // 0x303014: 0x17c2000b  bne         $fp, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x303014u;
    {
        const bool branch_taken_0x303014 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x303018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303014u;
            // 0x303018: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303014) {
            ctx->pc = 0x303044u;
            goto label_303044;
        }
    }
    ctx->pc = 0x30301Cu;
    // 0x30301c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30301Cu;
    {
        const bool branch_taken_0x30301c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x30301c) {
            ctx->pc = 0x30302Cu;
            goto label_30302c;
        }
    }
    ctx->pc = 0x303024u;
    // 0x303024: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x303024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303028: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x303028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30302c:
    // 0x30302c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30302cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303030: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x303030u;
    {
        const bool branch_taken_0x303030 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x303034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303030u;
            // 0x303034: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303030) {
            ctx->pc = 0x303040u;
            goto label_303040;
        }
    }
    ctx->pc = 0x303038u;
    // 0x303038: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x303038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30303c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30303cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_303040:
    // 0x303040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x303040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303044:
    // 0x303044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x303044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303048: 0x0  nop
    ctx->pc = 0x303048u;
    // NOP
    // 0x30304c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x30304cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303050: 0x0  nop
    ctx->pc = 0x303050u;
    // NOP
    // 0x303054: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x303054u;
    {
        const bool branch_taken_0x303054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303054) {
            ctx->pc = 0x3030B0u;
            goto label_3030b0;
        }
    }
    ctx->pc = 0x30305Cu;
    // 0x30305c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x30305cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x303064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303068: 0x0  nop
    ctx->pc = 0x303068u;
    // NOP
    // 0x30306c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303070: 0x461705c0  add.s       $f23, $f0, $f23
    ctx->pc = 0x303070u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x303074: 0x46170b03  div.s       $f12, $f1, $f23
    ctx->pc = 0x303074u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x303078: 0x0  nop
    ctx->pc = 0x303078u;
    // NOP
    // 0x30307c: 0x0  nop
    ctx->pc = 0x30307cu;
    // NOP
    // 0x303080: 0xc0a248c  jal         func_289230
    ctx->pc = 0x303080u;
    SET_GPR_U32(ctx, 31, 0x303088u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303088u; }
        if (ctx->pc != 0x303088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303088u; }
        if (ctx->pc != 0x303088u) { return; }
    }
    ctx->pc = 0x303088u;
label_303088:
    // 0x303088: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x303088u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30308c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303094: 0x46170303  div.s       $f12, $f0, $f23
    ctx->pc = 0x303094u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x303098: 0x0  nop
    ctx->pc = 0x303098u;
    // NOP
    // 0x30309c: 0x0  nop
    ctx->pc = 0x30309cu;
    // NOP
    // 0x3030a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3030A0u;
    SET_GPR_U32(ctx, 31, 0x3030A8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030A8u; }
        if (ctx->pc != 0x3030A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030A8u; }
        if (ctx->pc != 0x3030A8u) { return; }
    }
    ctx->pc = 0x3030A8u;
label_3030a8:
    // 0x3030a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3030A8u;
    {
        const bool branch_taken_0x3030a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3030ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3030A8u;
            // 0x3030ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030a8) {
            ctx->pc = 0x3030F4u;
            goto label_3030f4;
        }
    }
    ctx->pc = 0x3030B0u;
label_3030b0:
    // 0x3030b0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3030b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3030b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3030b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3030b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3030b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3030bc: 0x0  nop
    ctx->pc = 0x3030bcu;
    // NOP
    // 0x3030c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3030c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3030c4: 0x461705c1  sub.s       $f23, $f0, $f23
    ctx->pc = 0x3030c4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x3030c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3030C8u;
    SET_GPR_U32(ctx, 31, 0x3030D0u);
    ctx->pc = 0x3030CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3030C8u;
            // 0x3030cc: 0x46170b02  mul.s       $f12, $f1, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030D0u; }
        if (ctx->pc != 0x3030D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030D0u; }
        if (ctx->pc != 0x3030D0u) { return; }
    }
    ctx->pc = 0x3030D0u;
label_3030d0:
    // 0x3030d0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3030d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3030d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3030d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3030d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3030dc: 0x46170303  div.s       $f12, $f0, $f23
    ctx->pc = 0x3030dcu;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x3030e0: 0x0  nop
    ctx->pc = 0x3030e0u;
    // NOP
    // 0x3030e4: 0x0  nop
    ctx->pc = 0x3030e4u;
    // NOP
    // 0x3030e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3030E8u;
    SET_GPR_U32(ctx, 31, 0x3030F0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030F0u; }
        if (ctx->pc != 0x3030F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030F0u; }
        if (ctx->pc != 0x3030F0u) { return; }
    }
    ctx->pc = 0x3030F0u;
label_3030f0:
    // 0x3030f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3030f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3030f4:
    // 0x3030f4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x3030F4u;
    SET_GPR_U32(ctx, 31, 0x3030FCu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030FCu; }
        if (ctx->pc != 0x3030FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030FCu; }
        if (ctx->pc != 0x3030FCu) { return; }
    }
    ctx->pc = 0x3030FCu;
label_3030fc:
    // 0x3030fc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3030fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303100: 0x0  nop
    ctx->pc = 0x303100u;
    // NOP
    // 0x303104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x303104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303108: 0xc0a248c  jal         func_289230
    ctx->pc = 0x303108u;
    SET_GPR_U32(ctx, 31, 0x303110u);
    ctx->pc = 0x30310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303108u;
            // 0x30310c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303110u; }
        if (ctx->pc != 0x303110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303110u; }
        if (ctx->pc != 0x303110u) { return; }
    }
    ctx->pc = 0x303110u;
label_303110:
    // 0x303110: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x303110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_303114:
    // 0x303114: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x303114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x303118: 0x8c229ce8  lw          $v0, -0x6318($at)
    ctx->pc = 0x303118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x30311c: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x30311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x303120: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303120u;
    {
        const bool branch_taken_0x303120 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x303120) {
            ctx->pc = 0x30312Cu;
            goto label_30312c;
        }
    }
    ctx->pc = 0x303128u;
    // 0x303128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30312c:
    // 0x30312c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30312cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303130: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x303130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
    // 0x303134: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x303134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x303138: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x303138u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30313c: 0x0  nop
    ctx->pc = 0x30313cu;
    // NOP
    // 0x303140: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x303140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x303144: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x303144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x303148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30314c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30314cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303150: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x303150u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x303154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x303154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303158: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x303158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x30315c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30315cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x303160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303164: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x303164u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x303168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x303168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30316c: 0x4600ce43  div.s       $f25, $f25, $f0
    ctx->pc = 0x30316cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[25], ctx->f[0]); }
    // 0x303170: 0xe698000c  swc1        $f24, 0xC($s4)
    ctx->pc = 0x303170u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x303174: 0xe6950010  swc1        $f21, 0x10($s4)
    ctx->pc = 0x303174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x303178: 0xe6990014  swc1        $f25, 0x14($s4)
    ctx->pc = 0x303178u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x30317c: 0xe69a0018  swc1        $f26, 0x18($s4)
    ctx->pc = 0x30317cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x303180: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x303180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x303184: 0xae960020  sw          $s6, 0x20($s4)
    ctx->pc = 0x303184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 22));
label_303188:
    // 0x303188: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x303188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_30318c:
    // 0x30318c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x30318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x303190: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x303190u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303194: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x303194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x303198: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x303198u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30319c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x30319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3031a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3031a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3031a4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3031a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3031a8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3031a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3031ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3031acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3031b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3031b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3031b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3031b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3031b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3031b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3031bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3031bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3031c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3031c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3031c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3031c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3031c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3031c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3031cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3031CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3031D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3031CCu;
            // 0x3031d0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3031D4u;
}
