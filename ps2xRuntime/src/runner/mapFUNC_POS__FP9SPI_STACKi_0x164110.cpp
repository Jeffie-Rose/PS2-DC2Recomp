#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_POS__FP9SPI_STACKi
// Address: 0x164110 - 0x164394
void mapFUNC_POS__FP9SPI_STACKi_0x164110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_POS__FP9SPI_STACKi_0x164110");
#endif

    switch (ctx->pc) {
        case 0x164154u: goto label_164154;
        case 0x164168u: goto label_164168;
        case 0x164178u: goto label_164178;
        case 0x164188u: goto label_164188;
        case 0x164190u: goto label_164190;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641ccu: goto label_1641cc;
        case 0x164290u: goto label_164290;
        case 0x1642b0u: goto label_1642b0;
        case 0x1642ccu: goto label_1642cc;
        case 0x164300u: goto label_164300;
        case 0x164308u: goto label_164308;
        case 0x164330u: goto label_164330;
        case 0x164340u: goto label_164340;
        case 0x164350u: goto label_164350;
        case 0x16435cu: goto label_16435c;
        case 0x164368u: goto label_164368;
        default: break;
    }

    ctx->pc = 0x164110u;

    // 0x164110: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x164110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x164114: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x164114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x164118: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x164118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16411c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x164120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x164120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x164124: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x164128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16412c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164134: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164138u;
    {
        const bool branch_taken_0x164138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164138u;
            // 0x16413c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164138) {
            ctx->pc = 0x164148u;
            goto label_164148;
        }
    }
    ctx->pc = 0x164140u;
    // 0x164140: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x164140u;
    {
        const bool branch_taken_0x164140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164140u;
            // 0x164144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164140) {
            ctx->pc = 0x16436Cu;
            goto label_16436c;
        }
    }
    ctx->pc = 0x164148u;
label_164148:
    // 0x164148: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16414c: 0xc051928  jal         func_1464A0
    ctx->pc = 0x16414Cu;
    SET_GPR_U32(ctx, 31, 0x164154u);
    ctx->pc = 0x164150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16414Cu;
            // 0x164150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164154u; }
        if (ctx->pc != 0x164154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164154u; }
        if (ctx->pc != 0x164154u) { return; }
    }
    ctx->pc = 0x164154u;
label_164154:
    // 0x164154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164158: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16415c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x16415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x164160: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164160u;
    SET_GPR_U32(ctx, 31, 0x164168u);
    ctx->pc = 0x164164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164160u;
            // 0x164164: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164168u; }
        if (ctx->pc != 0x164168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164168u; }
        if (ctx->pc != 0x164168u) { return; }
    }
    ctx->pc = 0x164168u;
label_164168:
    // 0x164168: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x164168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16416c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x164170: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164170u;
    SET_GPR_U32(ctx, 31, 0x164178u);
    ctx->pc = 0x164174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164170u;
            // 0x164174: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164178u; }
        if (ctx->pc != 0x164178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164178u; }
        if (ctx->pc != 0x164178u) { return; }
    }
    ctx->pc = 0x164178u;
label_164178:
    // 0x164178: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x16417c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x164180: 0xc0590f8  jal         func_1643E0
    ctx->pc = 0x164180u;
    SET_GPR_U32(ctx, 31, 0x164188u);
    ctx->pc = 0x164184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164180u;
            // 0x164184: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1643E0u;
    if (runtime->hasFunction(0x1643E0u)) {
        auto targetFn = runtime->lookupFunction(0x1643E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164188u; }
        if (ctx->pc != 0x164188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__10CFuncPointFPf_0x1643e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164188u; }
        if (ctx->pc != 0x164188u) { return; }
    }
    ctx->pc = 0x164188u;
label_164188:
    // 0x164188: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x164188u;
    SET_GPR_U32(ctx, 31, 0x164190u);
    ctx->pc = 0x16418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164188u;
            // 0x16418c: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164190u; }
        if (ctx->pc != 0x164190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164190u; }
        if (ctx->pc != 0x164190u) { return; }
    }
    ctx->pc = 0x164190u;
label_164190:
    // 0x164190: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x164190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x164194: 0x27b30094  addiu       $s3, $sp, 0x94
    ctx->pc = 0x164194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x164198: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x164198u;
    SET_GPR_U32(ctx, 31, 0x1641A0u);
    ctx->pc = 0x16419Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164198u;
            // 0x16419c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641A0u; }
        if (ctx->pc != 0x1641A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641A0u; }
        if (ctx->pc != 0x1641A0u) { return; }
    }
    ctx->pc = 0x1641A0u;
label_1641a0:
    // 0x1641a0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1641a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1641a4: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x1641a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1641a8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1641A8u;
    SET_GPR_U32(ctx, 31, 0x1641B0u);
    ctx->pc = 0x1641ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641A8u;
            // 0x1641ac: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641B0u; }
        if (ctx->pc != 0x1641B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641B0u; }
        if (ctx->pc != 0x1641B0u) { return; }
    }
    ctx->pc = 0x1641B0u;
label_1641b0:
    // 0x1641b0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1641b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1641b4: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1641b8: 0xc0590f0  jal         func_1643C0
    ctx->pc = 0x1641B8u;
    SET_GPR_U32(ctx, 31, 0x1641C0u);
    ctx->pc = 0x1641BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641B8u;
            // 0x1641bc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1643C0u;
    if (runtime->hasFunction(0x1643C0u)) {
        auto targetFn = runtime->lookupFunction(0x1643C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641C0u; }
        if (ctx->pc != 0x1641C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotation__10CFuncPointFPf_0x1643c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641C0u; }
        if (ctx->pc != 0x1641C0u) { return; }
    }
    ctx->pc = 0x1641C0u;
label_1641c0:
    // 0x1641c0: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1641c4: 0xc0590e8  jal         func_1643A0
    ctx->pc = 0x1641C4u;
    SET_GPR_U32(ctx, 31, 0x1641CCu);
    ctx->pc = 0x1641C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641C4u;
            // 0x1641c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1643A0u;
    if (runtime->hasFunction(0x1643A0u)) {
        auto targetFn = runtime->lookupFunction(0x1643A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641CCu; }
        if (ctx->pc != 0x1641CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__10CFuncPointFPf_0x1643a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641CCu; }
        if (ctx->pc != 0x1641CCu) { return; }
    }
    ctx->pc = 0x1641CCu;
label_1641cc:
    // 0x1641cc: 0x8f948940  lw          $s4, -0x76C0($gp)
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1641d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1641d4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1641d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1641d8: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1641D8u;
    {
        const bool branch_taken_0x1641d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1641DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641D8u;
            // 0x1641dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641d8) {
            ctx->pc = 0x16436Cu;
            goto label_16436c;
        }
    }
    ctx->pc = 0x1641E0u;
    // 0x1641e0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1641e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1641e4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1641e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1641e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1641E8u;
    {
        const bool branch_taken_0x1641e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1641ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641E8u;
            // 0x1641ec: 0x26900020  addiu       $s0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641e8) {
            ctx->pc = 0x1641FCu;
            goto label_1641fc;
        }
    }
    ctx->pc = 0x1641F0u;
    // 0x1641f0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1641f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1641f4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1641F4u;
    {
        const bool branch_taken_0x1641f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641F4u;
            // 0x1641f8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641f4) {
            ctx->pc = 0x16425Cu;
            goto label_16425c;
        }
    }
    ctx->pc = 0x1641FCu;
label_1641fc:
    // 0x1641fc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1641fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164200: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x164204: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x164204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x164208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16420c: 0x0  nop
    ctx->pc = 0x16420cu;
    // NOP
    // 0x164210: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164214: 0x0  nop
    ctx->pc = 0x164214u;
    // NOP
    // 0x164218: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x164218u;
    {
        const bool branch_taken_0x164218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164218u;
            // 0x16421c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164218) {
            ctx->pc = 0x1642F8u;
            goto label_1642f8;
        }
    }
    ctx->pc = 0x164220u;
    // 0x164220: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x164220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x164224: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x164224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164228: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16422c: 0x0  nop
    ctx->pc = 0x16422cu;
    // NOP
    // 0x164230: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x164230u;
    {
        const bool branch_taken_0x164230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164230u;
            // 0x164234: 0x27a300a8  addiu       $v1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164230) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x164238u;
    // 0x164238: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x164238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16423c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16423cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164240: 0x0  nop
    ctx->pc = 0x164240u;
    // NOP
    // 0x164244: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x164244u;
    {
        const bool branch_taken_0x164244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164244u;
            // 0x164248: 0x3c0241c8  lui         $v0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164244) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x16424Cu;
    // 0x16424c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16424cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x164250: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x164250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x164254: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x164254u;
    {
        const bool branch_taken_0x164254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164254u;
            // 0x164258: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164254) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x16425Cu;
label_16425c:
    // 0x16425c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16425Cu;
    {
        const bool branch_taken_0x16425c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16425Cu;
            // 0x164260: 0x27b500a4  addiu       $s5, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16425c) {
            ctx->pc = 0x164278u;
            goto label_164278;
        }
    }
    ctx->pc = 0x164264u;
    // 0x164264: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x164264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x164268: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x164268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x16426c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x16426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x164270: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x164270u;
    {
        const bool branch_taken_0x164270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164270u;
            // 0x164274: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164270) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x164278u;
label_164278:
    // 0x164278: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x16427c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x16427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164280: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x164280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x164284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164288: 0xc0a248c  jal         func_289230
    ctx->pc = 0x164288u;
    SET_GPR_U32(ctx, 31, 0x164290u);
    ctx->pc = 0x16428Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164288u;
            // 0x16428c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164290u; }
        if (ctx->pc != 0x164290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164290u; }
        if (ctx->pc != 0x164290u) { return; }
    }
    ctx->pc = 0x164290u;
label_164290:
    // 0x164290: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x164290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x164294: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164298: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x164298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16429c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1642a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1642a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1642a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1642a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1642A8u;
    SET_GPR_U32(ctx, 31, 0x1642B0u);
    ctx->pc = 0x1642ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642A8u;
            // 0x1642ac: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642B0u; }
        if (ctx->pc != 0x1642B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642B0u; }
        if (ctx->pc != 0x1642B0u) { return; }
    }
    ctx->pc = 0x1642B0u;
label_1642b0:
    // 0x1642b0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1642b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1642b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1642b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642b8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1642b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1642bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1642bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1642c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1642c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1642C4u;
    SET_GPR_U32(ctx, 31, 0x1642CCu);
    ctx->pc = 0x1642C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642C4u;
            // 0x1642c8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642CCu; }
        if (ctx->pc != 0x1642CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642CCu; }
        if (ctx->pc != 0x1642CCu) { return; }
    }
    ctx->pc = 0x1642CCu;
label_1642cc:
    // 0x1642cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1642ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1642d0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1642D0u;
    {
        const bool branch_taken_0x1642d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1642d0) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x1642D8u;
    // 0x1642d8: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1642D8u;
    {
        const bool branch_taken_0x1642d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1642d8) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x1642E0u;
    // 0x1642e0: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1642E0u;
    {
        const bool branch_taken_0x1642e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1642E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1642E0u;
            // 0x1642e4: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642e0) {
            ctx->pc = 0x1642F4u;
            goto label_1642f4;
        }
    }
    ctx->pc = 0x1642E8u;
    // 0x1642e8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1642e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1642ec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1642ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1642f0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1642f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1642f4:
    // 0x1642f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1642f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1642f8:
    // 0x1642f8: 0xc0590e8  jal         func_1643A0
    ctx->pc = 0x1642F8u;
    SET_GPR_U32(ctx, 31, 0x164300u);
    ctx->pc = 0x1642FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642F8u;
            // 0x1642fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1643A0u;
    if (runtime->hasFunction(0x1643A0u)) {
        auto targetFn = runtime->lookupFunction(0x1643A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164300u; }
        if (ctx->pc != 0x164300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__10CFuncPointFPf_0x1643a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164300u; }
        if (ctx->pc != 0x164300u) { return; }
    }
    ctx->pc = 0x164300u;
label_164300:
    // 0x164300: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 31, 0x164308u);
    ctx->pc = 0x164304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164300u;
            // 0x164304: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164308u; }
        if (ctx->pc != 0x164308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164308u; }
        if (ctx->pc != 0x164308u) { return; }
    }
    ctx->pc = 0x164308u;
label_164308:
    // 0x164308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16430c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x164310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164310u;
    {
        const bool branch_taken_0x164310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164310u;
            // 0x164314: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164310) {
            ctx->pc = 0x164328u;
            goto label_164328;
        }
    }
    ctx->pc = 0x164318u;
    // 0x164318: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x164318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x16431c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x16431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x164320: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x164320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x164324: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x164324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_164328:
    // 0x164328: 0xc04c050  jal         func_130140
    ctx->pc = 0x164328u;
    SET_GPR_U32(ctx, 31, 0x164330u);
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164330u; }
        if (ctx->pc != 0x164330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164330u; }
        if (ctx->pc != 0x164330u) { return; }
    }
    ctx->pc = 0x164330u;
label_164330:
    // 0x164330: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x164330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x164334: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x164334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x164338: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x164338u;
    SET_GPR_U32(ctx, 31, 0x164340u);
    ctx->pc = 0x16433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164338u;
            // 0x16433c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164340u; }
        if (ctx->pc != 0x164340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164340u; }
        if (ctx->pc != 0x164340u) { return; }
    }
    ctx->pc = 0x164340u;
label_164340:
    // 0x164340: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x164340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x164344: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x164348: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x164348u;
    SET_GPR_U32(ctx, 31, 0x164350u);
    ctx->pc = 0x16434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164348u;
            // 0x16434c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164350u; }
        if (ctx->pc != 0x164350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164350u; }
        if (ctx->pc != 0x164350u) { return; }
    }
    ctx->pc = 0x164350u;
label_164350:
    // 0x164350: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x164350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x164354: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x164354u;
    SET_GPR_U32(ctx, 31, 0x16435Cu);
    ctx->pc = 0x164358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164354u;
            // 0x164358: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16435Cu; }
        if (ctx->pc != 0x16435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16435Cu; }
        if (ctx->pc != 0x16435Cu) { return; }
    }
    ctx->pc = 0x16435Cu;
label_16435c:
    // 0x16435c: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x16435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164360: 0xc0590f8  jal         func_1643E0
    ctx->pc = 0x164360u;
    SET_GPR_U32(ctx, 31, 0x164368u);
    ctx->pc = 0x164364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164360u;
            // 0x164364: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1643E0u;
    if (runtime->hasFunction(0x1643E0u)) {
        auto targetFn = runtime->lookupFunction(0x1643E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164368u; }
        if (ctx->pc != 0x164368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__10CFuncPointFPf_0x1643e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164368u; }
        if (ctx->pc != 0x164368u) { return; }
    }
    ctx->pc = 0x164368u;
label_164368:
    // 0x164368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16436c:
    // 0x16436c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16436cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164370: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x164370u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164374: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x164374u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164378: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16437c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16437cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16438c: 0x3e00008  jr          $ra
    ctx->pc = 0x16438Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16438Cu;
            // 0x164390: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164394u;
}
