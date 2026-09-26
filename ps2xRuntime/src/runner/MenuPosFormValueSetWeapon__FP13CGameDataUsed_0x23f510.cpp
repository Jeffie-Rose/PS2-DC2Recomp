#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosFormValueSetWeapon__FP13CGameDataUsed
// Address: 0x23f510 - 0x23f7dc
void MenuPosFormValueSetWeapon__FP13CGameDataUsed_0x23f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosFormValueSetWeapon__FP13CGameDataUsed_0x23f510");
#endif

    switch (ctx->pc) {
        case 0x23f5c0u: goto label_23f5c0;
        case 0x23f5ccu: goto label_23f5cc;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f610u: goto label_23f610;
        case 0x23f620u: goto label_23f620;
        case 0x23f640u: goto label_23f640;
        case 0x23f664u: goto label_23f664;
        case 0x23f678u: goto label_23f678;
        case 0x23f680u: goto label_23f680;
        case 0x23f694u: goto label_23f694;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6bcu: goto label_23f6bc;
        case 0x23f6d0u: goto label_23f6d0;
        case 0x23f6e4u: goto label_23f6e4;
        case 0x23f6f8u: goto label_23f6f8;
        case 0x23f708u: goto label_23f708;
        case 0x23f728u: goto label_23f728;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f760u: goto label_23f760;
        case 0x23f76cu: goto label_23f76c;
        case 0x23f78cu: goto label_23f78c;
        case 0x23f7b4u: goto label_23f7b4;
        default: break;
    }

    ctx->pc = 0x23f510u;

    // 0x23f510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23f514: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23f518: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x23f51c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x23f520: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x23f524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23f524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23f528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23f528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23f530: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x23f530u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f534: 0x1240009f  beqz        $s2, . + 4 + (0x9F << 2)
    ctx->pc = 0x23F534u;
    {
        const bool branch_taken_0x23f534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F534u;
            // 0x23f538: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f534) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F53Cu;
    // 0x23f53c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x23f53cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x23f540: 0x1860009c  blez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x23F540u;
    {
        const bool branch_taken_0x23f540 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23f540) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F548u;
    // 0x23f548: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x23f548u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23f54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f550: 0x11030098  beq         $t0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x23F550u;
    {
        const bool branch_taken_0x23f550 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F550u;
            // 0x23f554: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f550) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F558u;
    // 0x23f558: 0x11030096  beq         $t0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x23F558u;
    {
        const bool branch_taken_0x23f558 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F558u;
            // 0x23f55c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f558) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F560u;
    // 0x23f560: 0x11030094  beq         $t0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x23F560u;
    {
        const bool branch_taken_0x23f560 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F560u;
            // 0x23f564: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f560) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F568u;
    // 0x23f568: 0x11030092  beq         $t0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x23F568u;
    {
        const bool branch_taken_0x23f568 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f568) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F570u;
    // 0x23f570: 0x8f8795c0  lw          $a3, -0x6A40($gp)
    ctx->pc = 0x23f570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x23f574: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23f578: 0xdf849668  ld          $a0, -0x6998($gp)
    ctx->pc = 0x23f578u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294940264)));
    // 0x23f57c: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x23f580: 0x2463de40  addiu       $v1, $v1, -0x21C0
    ctx->pc = 0x23f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958656));
    // 0x23f584: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x23f584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f58c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f590: 0x8cf00188  lw          $s0, 0x188($a3)
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x23f594: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x23f594u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x23f598: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x23f598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f59c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x23f59cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23f5a0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x23f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x23f5a4: 0x1502000c  bne         $t0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F5A4u;
    {
        const bool branch_taken_0x23f5a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5A4u;
            // 0x23f5a8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5a4) {
            ctx->pc = 0x23F5D8u;
            goto label_23f5d8;
        }
    }
    ctx->pc = 0x23F5ACu;
    // 0x23f5ac: 0xc6540010  lwc1        $f20, 0x10($s2)
    ctx->pc = 0x23f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f5b0: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x23f5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x23f5b4: 0xc6550014  lwc1        $f21, 0x14($s2)
    ctx->pc = 0x23f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f5b8: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x23F5B8u;
    SET_GPR_U32(ctx, 31, 0x23F5C0u);
    ctx->pc = 0x23F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5B8u;
            // 0x23f5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5C0u; }
        if (ctx->pc != 0x23F5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5C0u; }
        if (ctx->pc != 0x23F5C0u) { return; }
    }
    ctx->pc = 0x23F5C0u;
label_23f5c0:
    // 0x23f5c0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23f5c4: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x23F5C4u;
    SET_GPR_U32(ctx, 31, 0x23F5CCu);
    ctx->pc = 0x23F5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5C4u;
            // 0x23f5c8: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5CCu; }
        if (ctx->pc != 0x23F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5CCu; }
        if (ctx->pc != 0x23F5CCu) { return; }
    }
    ctx->pc = 0x23F5CCu;
label_23f5cc:
    // 0x23f5cc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23f5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x23f5d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23F5D0u;
    {
        const bool branch_taken_0x23f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5D0u;
            // 0x23f5d4: 0x8631002c  lh          $s1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5d0) {
            ctx->pc = 0x23F5FCu;
            goto label_23f5fc;
        }
    }
    ctx->pc = 0x23F5D8u;
label_23f5d8:
    // 0x23f5d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23f5dc: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F5DCu;
    {
        const bool branch_taken_0x23f5dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f5dc) {
            ctx->pc = 0x23F5FCu;
            goto label_23f5fc;
        }
    }
    ctx->pc = 0x23F5E4u;
    // 0x23f5e4: 0xc6540018  lwc1        $f20, 0x18($s2)
    ctx->pc = 0x23f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f5e8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x23f5ec: 0xc655001c  lwc1        $f21, 0x1C($s2)
    ctx->pc = 0x23f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f5f0: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x23F5F0u;
    SET_GPR_U32(ctx, 31, 0x23F5F8u);
    ctx->pc = 0x23F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5F0u;
            // 0x23f5f4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5F8u; }
        if (ctx->pc != 0x23F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5F8u; }
        if (ctx->pc != 0x23F5F8u) { return; }
    }
    ctx->pc = 0x23F5F8u;
label_23f5f8:
    // 0x23f5f8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23f5fc:
    // 0x23f5fc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x23f600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f604: 0xc44c2f6c  lwc1        $f12, 0x2F6C($v0)
    ctx->pc = 0x23f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f608: 0xc0663d0  jal         func_198F40
    ctx->pc = 0x23F608u;
    SET_GPR_U32(ctx, 31, 0x23F610u);
    ctx->pc = 0x23F60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F608u;
            // 0x23f60c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198F40u;
    if (runtime->hasFunction(0x198F40u)) {
        auto targetFn = runtime->lookupFunction(0x198F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F610u; }
        if (ctx->pc != 0x23F610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatusParam__13CGameDataUsedFPsf_0x198f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F610u; }
        if (ctx->pc != 0x23F610u) { return; }
    }
    ctx->pc = 0x23F610u;
label_23f610:
    // 0x23f610: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f618: 0xc089664  jal         func_225990
    ctx->pc = 0x23F618u;
    SET_GPR_U32(ctx, 31, 0x23F620u);
    ctx->pc = 0x23F61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F618u;
            // 0x23f61c: 0x24a5acf0  addiu       $a1, $a1, -0x5310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F620u; }
        if (ctx->pc != 0x23F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F620u; }
        if (ctx->pc != 0x23F620u) { return; }
    }
    ctx->pc = 0x23F620u;
label_23f620:
    // 0x23f620: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f624: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x23F624u;
    {
        const bool branch_taken_0x23f624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F624u;
            // 0x23f628: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f624) {
            ctx->pc = 0x23F65Cu;
            goto label_23f65c;
        }
    }
    ctx->pc = 0x23F62Cu;
    // 0x23f62c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x23f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f630: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x23f634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23f634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f638: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23F638u;
    SET_GPR_U32(ctx, 31, 0x23F640u);
    ctx->pc = 0x23F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F638u;
            // 0x23f63c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F640u; }
        if (ctx->pc != 0x23F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F640u; }
        if (ctx->pc != 0x23F640u) { return; }
    }
    ctx->pc = 0x23F640u;
label_23f640:
    // 0x23f640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f644: 0x0  nop
    ctx->pc = 0x23f644u;
    // NOP
    // 0x23f648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23f648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23f64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f650: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x23f650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x23f654: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x23f654u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f658: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x23f658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_23f65c:
    // 0x23f65c: 0xc0945c8  jal         func_251720
    ctx->pc = 0x23F65Cu;
    SET_GPR_U32(ctx, 31, 0x23F664u);
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F664u; }
        if (ctx->pc != 0x23F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F664u; }
        if (ctx->pc != 0x23F664u) { return; }
    }
    ctx->pc = 0x23F664u;
label_23f664:
    // 0x23f664: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f668: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f670: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F670u;
    SET_GPR_U32(ctx, 31, 0x23F678u);
    ctx->pc = 0x23F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F670u;
            // 0x23f674: 0x24a5acf8  addiu       $a1, $a1, -0x5308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F678u; }
        if (ctx->pc != 0x23F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F678u; }
        if (ctx->pc != 0x23F678u) { return; }
    }
    ctx->pc = 0x23F678u;
label_23f678:
    // 0x23f678: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23F678u;
    SET_GPR_U32(ctx, 31, 0x23F680u);
    ctx->pc = 0x23F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F678u;
            // 0x23f67c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F680u; }
        if (ctx->pc != 0x23F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F680u; }
        if (ctx->pc != 0x23F680u) { return; }
    }
    ctx->pc = 0x23F680u;
label_23f680:
    // 0x23f680: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f684: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f68c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F68Cu;
    SET_GPR_U32(ctx, 31, 0x23F694u);
    ctx->pc = 0x23F690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F68Cu;
            // 0x23f690: 0x24a5ad00  addiu       $a1, $a1, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F694u; }
        if (ctx->pc != 0x23F694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F694u; }
        if (ctx->pc != 0x23F694u) { return; }
    }
    ctx->pc = 0x23F694u;
label_23f694:
    // 0x23f694: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f69c: 0x24a5ad08  addiu       $a1, $a1, -0x52F8
    ctx->pc = 0x23f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946056));
    // 0x23f6a0: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F6A0u;
    SET_GPR_U32(ctx, 31, 0x23F6A8u);
    ctx->pc = 0x23F6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6A0u;
            // 0x23f6a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6A8u; }
        if (ctx->pc != 0x23F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6A8u; }
        if (ctx->pc != 0x23F6A8u) { return; }
    }
    ctx->pc = 0x23F6A8u;
label_23f6a8:
    // 0x23f6a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6b0: 0x24a5ad10  addiu       $a1, $a1, -0x52F0
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946064));
    // 0x23f6b4: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F6B4u;
    SET_GPR_U32(ctx, 31, 0x23F6BCu);
    ctx->pc = 0x23F6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6B4u;
            // 0x23f6b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6BCu; }
        if (ctx->pc != 0x23F6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6BCu; }
        if (ctx->pc != 0x23F6BCu) { return; }
    }
    ctx->pc = 0x23F6BCu;
label_23f6bc:
    // 0x23f6bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6c4: 0x24a5acf8  addiu       $a1, $a1, -0x5308
    ctx->pc = 0x23f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946040));
    // 0x23f6c8: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F6C8u;
    SET_GPR_U32(ctx, 31, 0x23F6D0u);
    ctx->pc = 0x23F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6C8u;
            // 0x23f6cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6D0u; }
        if (ctx->pc != 0x23F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6D0u; }
        if (ctx->pc != 0x23F6D0u) { return; }
    }
    ctx->pc = 0x23F6D0u;
label_23f6d0:
    // 0x23f6d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6d8: 0x24a5ad00  addiu       $a1, $a1, -0x5300
    ctx->pc = 0x23f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
    // 0x23f6dc: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F6DCu;
    SET_GPR_U32(ctx, 31, 0x23F6E4u);
    ctx->pc = 0x23F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6DCu;
            // 0x23f6e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6E4u; }
        if (ctx->pc != 0x23F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6E4u; }
        if (ctx->pc != 0x23F6E4u) { return; }
    }
    ctx->pc = 0x23F6E4u;
label_23f6e4:
    // 0x23f6e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6ec: 0x24a5ad18  addiu       $a1, $a1, -0x52E8
    ctx->pc = 0x23f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
    // 0x23f6f0: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F6F0u;
    SET_GPR_U32(ctx, 31, 0x23F6F8u);
    ctx->pc = 0x23F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6F0u;
            // 0x23f6f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6F8u; }
        if (ctx->pc != 0x23F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6F8u; }
        if (ctx->pc != 0x23F6F8u) { return; }
    }
    ctx->pc = 0x23F6F8u;
label_23f6f8:
    // 0x23f6f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f700: 0xc089664  jal         func_225990
    ctx->pc = 0x23F700u;
    SET_GPR_U32(ctx, 31, 0x23F708u);
    ctx->pc = 0x23F704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F700u;
            // 0x23f704: 0x24a5ad20  addiu       $a1, $a1, -0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F708u; }
        if (ctx->pc != 0x23F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F708u; }
        if (ctx->pc != 0x23F708u) { return; }
    }
    ctx->pc = 0x23F708u;
label_23f708:
    // 0x23f708: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f70c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x23F70Cu;
    {
        const bool branch_taken_0x23f70c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f70c) {
            ctx->pc = 0x23F738u;
            goto label_23f738;
        }
    }
    ctx->pc = 0x23F714u;
    // 0x23f714: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x23f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f718: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x23f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x23f71c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23f71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f720: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23F720u;
    SET_GPR_U32(ctx, 31, 0x23F728u);
    ctx->pc = 0x23F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F720u;
            // 0x23f724: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F728u; }
        if (ctx->pc != 0x23F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F728u; }
        if (ctx->pc != 0x23F728u) { return; }
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f72c: 0x0  nop
    ctx->pc = 0x23f72cu;
    // NOP
    // 0x23f730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23f730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23f734: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x23f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_23f738:
    // 0x23f738: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x23f73c: 0x87a60070  lh          $a2, 0x70($sp)
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f740: 0x8c250bf0  lw          $a1, 0xBF0($at)
    ctx->pc = 0x23f740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3056)));
    // 0x23f744: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F744u;
    SET_GPR_U32(ctx, 31, 0x23F74Cu);
    ctx->pc = 0x23F748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F744u;
            // 0x23f748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F74Cu; }
        if (ctx->pc != 0x23F74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F74Cu; }
        if (ctx->pc != 0x23F74Cu) { return; }
    }
    ctx->pc = 0x23F74Cu;
label_23f74c:
    // 0x23f74c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x23f74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x23f750: 0x87a60072  lh          $a2, 0x72($sp)
    ctx->pc = 0x23f750u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x23f754: 0x8c250bf4  lw          $a1, 0xBF4($at)
    ctx->pc = 0x23f754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3060)));
    // 0x23f758: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F758u;
    SET_GPR_U32(ctx, 31, 0x23F760u);
    ctx->pc = 0x23F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F758u;
            // 0x23f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F760u; }
        if (ctx->pc != 0x23F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F760u; }
        if (ctx->pc != 0x23F760u) { return; }
    }
    ctx->pc = 0x23F760u;
label_23f760:
    // 0x23f760: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23f760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f764: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23f764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f768: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f76c:
    // 0x23f76c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23f770: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x23f774: 0x24630bf0  addiu       $v1, $v1, 0xBF0
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x23f778: 0x84460074  lh          $a2, 0x74($v0)
    ctx->pc = 0x23f778u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x23f77c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23f780: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23f784: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F784u;
    SET_GPR_U32(ctx, 31, 0x23F78Cu);
    ctx->pc = 0x23F788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F784u;
            // 0x23f788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F78Cu; }
        if (ctx->pc != 0x23F78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F78Cu; }
        if (ctx->pc != 0x23F78Cu) { return; }
    }
    ctx->pc = 0x23F78Cu;
label_23f78c:
    // 0x23f78c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23f78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23f790: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x23f790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x23f794: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x23f794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23f798: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23F798u;
    {
        const bool branch_taken_0x23f798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F798u;
            // 0x23f79c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f798) {
            ctx->pc = 0x23F76Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f76c;
        }
    }
    ctx->pc = 0x23F7A0u;
    // 0x23f7a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7ac: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F7ACu;
    SET_GPR_U32(ctx, 31, 0x23F7B4u);
    ctx->pc = 0x23F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7ACu;
            // 0x23f7b0: 0x24a5ad28  addiu       $a1, $a1, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7B4u; }
        if (ctx->pc != 0x23F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7B4u; }
        if (ctx->pc != 0x23F7B4u) { return; }
    }
    ctx->pc = 0x23F7B4u;
label_23f7b4:
    // 0x23f7b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23f7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f7b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x23f7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f7bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23f7bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f7c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f7c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23f7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f7c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23f7c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f7cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23f7ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23f7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7D4u;
            // 0x23f7d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23F7DCu;
}
