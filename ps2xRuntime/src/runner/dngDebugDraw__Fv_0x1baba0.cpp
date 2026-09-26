#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngDebugDraw__Fv
// Address: 0x1baba0 - 0x1baec0
void dngDebugDraw__Fv_0x1baba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngDebugDraw__Fv_0x1baba0");
#endif

    switch (ctx->pc) {
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac84u: goto label_1bac84;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacccu: goto label_1baccc;
        case 0x1bacf0u: goto label_1bacf0;
        case 0x1bad38u: goto label_1bad38;
        case 0x1bad5cu: goto label_1bad5c;
        case 0x1bada4u: goto label_1bada4;
        case 0x1badecu: goto label_1badec;
        case 0x1bae30u: goto label_1bae30;
        case 0x1bae68u: goto label_1bae68;
        case 0x1baea0u: goto label_1baea0;
        default: break;
    }

    ctx->pc = 0x1baba0u;

    // 0x1baba0: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
    // 0x1baba4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baba8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1baba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1babac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1babacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1babb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1babb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1babb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1babb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1babb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1babb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1babbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1babbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1babc0: 0x8423f1f0  lh          $v1, -0xE10($at)
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963696)));
    // 0x1babc4: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1BABC4u;
    {
        const bool branch_taken_0x1babc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABC4u;
            // 0x1babc8: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babc4) {
            ctx->pc = 0x1BAEA0u;
            goto label_1baea0;
        }
    }
    ctx->pc = 0x1BABCCu;
    // 0x1babcc: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1babccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1babd0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1babd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1babd4: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1BABD4u;
    SET_GPR_U32(ctx, 31, 0x1BABDCu);
    ctx->pc = 0x1BABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABD4u;
            // 0x1babd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABDCu; }
        if (ctx->pc != 0x1BABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABDCu; }
        if (ctx->pc != 0x1BABDCu) { return; }
    }
    ctx->pc = 0x1BABDCu;
label_1babdc:
    // 0x1babdc: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BABDCu;
    SET_GPR_U32(ctx, 31, 0x1BABE4u);
    ctx->pc = 0x1BABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABDCu;
            // 0x1babe0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABE4u; }
        if (ctx->pc != 0x1BABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABE4u; }
        if (ctx->pc != 0x1BABE4u) { return; }
    }
    ctx->pc = 0x1BABE4u;
label_1babe4:
    // 0x1babe4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1babe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1babe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1babe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babec: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BABECu;
    SET_GPR_U32(ctx, 31, 0x1BABF4u);
    ctx->pc = 0x1BABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABECu;
            // 0x1babf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABF4u; }
        if (ctx->pc != 0x1BABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABF4u; }
        if (ctx->pc != 0x1BABF4u) { return; }
    }
    ctx->pc = 0x1BABF4u;
label_1babf4:
    // 0x1babf4: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BABF4u;
    SET_GPR_U32(ctx, 31, 0x1BABFCu);
    ctx->pc = 0x1BABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABF4u;
            // 0x1babf8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABFCu; }
        if (ctx->pc != 0x1BABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABFCu; }
        if (ctx->pc != 0x1BABFCu) { return; }
    }
    ctx->pc = 0x1BABFCu;
label_1babfc:
    // 0x1babfc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1babfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bac00: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1BAC00u;
    SET_GPR_U32(ctx, 31, 0x1BAC08u);
    ctx->pc = 0x1BAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC00u;
            // 0x1bac04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC08u; }
        if (ctx->pc != 0x1BAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC08u; }
        if (ctx->pc != 0x1BAC08u) { return; }
    }
    ctx->pc = 0x1BAC08u;
label_1bac08:
    // 0x1bac08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bac0c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC14u);
    ctx->pc = 0x1BAC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC0Cu;
            // 0x1bac10: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC14u; }
        if (ctx->pc != 0x1BAC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC14u; }
        if (ctx->pc != 0x1BAC14u) { return; }
    }
    ctx->pc = 0x1BAC14u;
label_1bac14:
    // 0x1bac14: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bac18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bac1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac20: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bac20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac24: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BAC24u;
    SET_GPR_U32(ctx, 31, 0x1BAC2Cu);
    ctx->pc = 0x1BAC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC24u;
            // 0x1bac28: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC2Cu; }
        if (ctx->pc != 0x1BAC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC2Cu; }
        if (ctx->pc != 0x1BAC2Cu) { return; }
    }
    ctx->pc = 0x1BAC2Cu;
label_1bac2c:
    // 0x1bac2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bac30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bac34: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1bac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bac38: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BAC38u;
    SET_GPR_U32(ctx, 31, 0x1BAC40u);
    ctx->pc = 0x1BAC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC38u;
            // 0x1bac3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC40u; }
        if (ctx->pc != 0x1BAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC40u; }
        if (ctx->pc != 0x1BAC40u) { return; }
    }
    ctx->pc = 0x1BAC40u;
label_1bac40:
    // 0x1bac40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bac44: 0x24050104  addiu       $a1, $zero, 0x104
    ctx->pc = 0x1bac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1bac48: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x1bac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x1bac4c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC54u);
    ctx->pc = 0x1BAC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC4Cu;
            // 0x1bac50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC54u; }
        if (ctx->pc != 0x1BAC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC54u; }
        if (ctx->pc != 0x1BAC54u) { return; }
    }
    ctx->pc = 0x1BAC54u;
label_1bac54:
    // 0x1bac54: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BAC54u;
    SET_GPR_U32(ctx, 31, 0x1BAC5Cu);
    ctx->pc = 0x1BAC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC54u;
            // 0x1bac58: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC5Cu; }
        if (ctx->pc != 0x1BAC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC5Cu; }
        if (ctx->pc != 0x1BAC5Cu) { return; }
    }
    ctx->pc = 0x1BAC5Cu;
label_1bac5c:
    // 0x1bac5c: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x1bac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1bac60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1bac64: 0x24a56b10  addiu       $a1, $a1, 0x6B10
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27408));
    // 0x1bac68: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BAC68u;
    SET_GPR_U32(ctx, 31, 0x1BAC70u);
    ctx->pc = 0x1BAC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC68u;
            // 0x1bac6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC70u; }
        if (ctx->pc != 0x1BAC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC70u; }
        if (ctx->pc != 0x1BAC70u) { return; }
    }
    ctx->pc = 0x1BAC70u;
label_1bac70:
    // 0x1bac70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bac74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bac74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bac78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BAC7Cu;
    {
        const bool branch_taken_0x1bac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC7Cu;
            // 0x1bac80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac7c) {
            ctx->pc = 0x1BAD00u;
            goto label_1bad00;
        }
    }
    ctx->pc = 0x1BAC84u;
label_1bac84:
    // 0x1bac84: 0x8422f1f2  lh          $v0, -0xE0E($at)
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
    // 0x1bac88: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAC88u;
    {
        const bool branch_taken_0x1bac88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC88u;
            // 0x1bac8c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac88) {
            ctx->pc = 0x1BACA4u;
            goto label_1baca4;
        }
    }
    ctx->pc = 0x1BAC90u;
    // 0x1bac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac94: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BAC94u;
    SET_GPR_U32(ctx, 31, 0x1BAC9Cu);
    ctx->pc = 0x1BAC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC94u;
            // 0x1bac98: 0x24a56b28  addiu       $a1, $a1, 0x6B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC9Cu; }
        if (ctx->pc != 0x1BAC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC9Cu; }
        if (ctx->pc != 0x1BAC9Cu) { return; }
    }
    ctx->pc = 0x1BAC9Cu;
label_1bac9c:
    // 0x1bac9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAC9Cu;
    {
        const bool branch_taken_0x1bac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC9Cu;
            // 0x1baca0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac9c) {
            ctx->pc = 0x1BACBCu;
            goto label_1bacbc;
        }
    }
    ctx->pc = 0x1BACA4u;
label_1baca4:
    // 0x1baca4: 0x0  nop
    ctx->pc = 0x1baca4u;
    // NOP
    // 0x1baca8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1baca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1bacac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bacacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacb0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BACB0u;
    SET_GPR_U32(ctx, 31, 0x1BACB8u);
    ctx->pc = 0x1BACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACB0u;
            // 0x1bacb4: 0x24a56b30  addiu       $a1, $a1, 0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB8u; }
        if (ctx->pc != 0x1BACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB8u; }
        if (ctx->pc != 0x1BACB8u) { return; }
    }
    ctx->pc = 0x1BACB8u;
label_1bacb8:
    // 0x1bacb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bacb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bacbc:
    // 0x1bacbc: 0x0  nop
    ctx->pc = 0x1bacbcu;
    // NOP
    // 0x1bacc0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1bacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bacc4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BACC4u;
    SET_GPR_U32(ctx, 31, 0x1BACCCu);
    ctx->pc = 0x1BACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACC4u;
            // 0x1bacc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACCCu; }
        if (ctx->pc != 0x1BACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACCCu; }
        if (ctx->pc != 0x1BACCCu) { return; }
    }
    ctx->pc = 0x1BACCCu;
label_1baccc:
    // 0x1baccc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bacccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bacd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bacd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1bacd4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bacd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacdc: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x1bacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x1bace0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1bace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1bace4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bace4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bace8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BACE8u;
    SET_GPR_U32(ctx, 31, 0x1BACF0u);
    ctx->pc = 0x1BACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACE8u;
            // 0x1bacec: 0x24a56b38  addiu       $a1, $a1, 0x6B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACF0u; }
        if (ctx->pc != 0x1BACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACF0u; }
        if (ctx->pc != 0x1BACF0u) { return; }
    }
    ctx->pc = 0x1BACF0u;
label_1bacf0:
    // 0x1bacf0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bacf4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bacf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bacf8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1bacf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1bacfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bacfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bad00:
    // 0x1bad00: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bad04: 0x24428bb0  addiu       $v0, $v0, -0x7450
    ctx->pc = 0x1bad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x1bad08: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1bad08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bad0c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bad10: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BAD10u;
    {
        const bool branch_taken_0x1bad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD10u;
            // 0x1bad14: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad10) {
            ctx->pc = 0x1BAC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bac84;
        }
    }
    ctx->pc = 0x1BAD18u;
    // 0x1bad18: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bad1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bad20: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bad20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
    // 0x1bad24: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BAD24u;
    {
        const bool branch_taken_0x1bad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD24u;
            // 0x1bad28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad24) {
            ctx->pc = 0x1BAE88u;
            goto label_1bae88;
        }
    }
    ctx->pc = 0x1BAD2Cu;
    // 0x1bad2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad30: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BAD30u;
    SET_GPR_U32(ctx, 31, 0x1BAD38u);
    ctx->pc = 0x1BAD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD30u;
            // 0x1bad34: 0x24a56b40  addiu       $a1, $a1, 0x6B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD38u; }
        if (ctx->pc != 0x1BAD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD38u; }
        if (ctx->pc != 0x1BAD38u) { return; }
    }
    ctx->pc = 0x1BAD38u;
label_1bad38:
    // 0x1bad38: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bad3c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bad40: 0x8c248bf8  lw          $a0, -0x7408($at)
    ctx->pc = 0x1bad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937592)));
    // 0x1bad44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bad44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bad48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bad48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad4c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bad50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BAD54u;
    {
        const bool branch_taken_0x1bad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD54u;
            // 0x1bad58: 0x2463d9e0  addiu       $v1, $v1, -0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad54) {
            ctx->pc = 0x1BADB8u;
            goto label_1badb8;
        }
    }
    ctx->pc = 0x1BAD5Cu;
label_1bad5c:
    // 0x1bad5c: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BAD5Cu;
    {
        const bool branch_taken_0x1bad5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD5Cu;
            // 0x1bad60: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad5c) {
            ctx->pc = 0x1BADB0u;
            goto label_1badb0;
        }
    }
    ctx->pc = 0x1BAD64u;
    // 0x1bad64: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bad68: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bad6c: 0x2463d9e2  addiu       $v1, $v1, -0x261E
    ctx->pc = 0x1bad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957538));
    // 0x1bad70: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1bad70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bad74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bad78: 0xb13023  subu        $a2, $a1, $s1
    ctx->pc = 0x1bad78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1bad7c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1bad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1bad80: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1bad80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bad84: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1bad88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bad8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bad90: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x1bad90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bad94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad98: 0x24a56b48  addiu       $a1, $a1, 0x6B48
    ctx->pc = 0x1bad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27464));
    // 0x1bad9c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1BADA4u);
    ctx->pc = 0x1BADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD9Cu;
            // 0x1bada0: 0x24470004  addiu       $a3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADA4u; }
        if (ctx->pc != 0x1BADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADA4u; }
        if (ctx->pc != 0x1BADA4u) { return; }
    }
    ctx->pc = 0x1BADA4u;
label_1bada4:
    // 0x1bada4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bada4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bada8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADA8u;
    {
        const bool branch_taken_0x1bada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADA8u;
            // 0x1badac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bada8) {
            ctx->pc = 0x1BADC8u;
            goto label_1badc8;
        }
    }
    ctx->pc = 0x1BADB0u;
label_1badb0:
    // 0x1badb0: 0x24a500b8  addiu       $a1, $a1, 0xB8
    ctx->pc = 0x1badb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 184));
    // 0x1badb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1badb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1badb8:
    // 0x1badb8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1badb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1badbc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1badbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1badc0: 0x1446ffe6  bne         $v0, $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1BADC0u;
    {
        const bool branch_taken_0x1badc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1badc0) {
            ctx->pc = 0x1BAD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bad5c;
        }
    }
    ctx->pc = 0x1BADC8u;
label_1badc8:
    // 0x1badc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1badc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1badcc: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BADCCu;
    {
        const bool branch_taken_0x1badcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADCCu;
            // 0x1badd0: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badcc) {
            ctx->pc = 0x1BADF4u;
            goto label_1badf4;
        }
    }
    ctx->pc = 0x1BADD4u;
    // 0x1badd4: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1badd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1badd8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1baddc: 0x8c268bf8  lw          $a2, -0x7408($at)
    ctx->pc = 0x1baddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937592)));
    // 0x1bade0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bade4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BADE4u;
    SET_GPR_U32(ctx, 31, 0x1BADECu);
    ctx->pc = 0x1BADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADE4u;
            // 0x1bade8: 0x24a56b58  addiu       $a1, $a1, 0x6B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADECu; }
        if (ctx->pc != 0x1BADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADECu; }
        if (ctx->pc != 0x1BADECu) { return; }
    }
    ctx->pc = 0x1BADECu;
label_1badec:
    // 0x1badec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BADECu;
    {
        const bool branch_taken_0x1badec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1badec) {
            ctx->pc = 0x1BAE88u;
            goto label_1bae88;
        }
    }
    ctx->pc = 0x1BADF4u;
label_1badf4:
    // 0x1badf4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1badf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1badf8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1badfc: 0x2442d9e2  addiu       $v0, $v0, -0x261E
    ctx->pc = 0x1badfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957538));
    // 0x1bae00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bae04: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bae08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bae0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bae10: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bae14: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BAE14u;
    {
        const bool branch_taken_0x1bae14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BAE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE14u;
            // 0x1bae18: 0x3c060034  lui         $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae14) {
            ctx->pc = 0x1BAE88u;
            goto label_1bae88;
        }
    }
    ctx->pc = 0x1BAE1Cu;
    // 0x1bae1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bae1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae20: 0x24c6d9e0  addiu       $a2, $a2, -0x2620
    ctx->pc = 0x1bae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957536));
    // 0x1bae24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BAE28u;
    {
        const bool branch_taken_0x1bae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE28u;
            // 0x1bae2c: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae28) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BAE30u;
label_1bae30:
    // 0x1bae30: 0x84840044  lh          $a0, 0x44($a0)
    ctx->pc = 0x1bae30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1bae34: 0x84620044  lh          $v0, 0x44($v1)
    ctx->pc = 0x1bae34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1bae38: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BAE38u;
    {
        const bool branch_taken_0x1bae38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE38u;
            // 0x1bae3c: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae38) {
            ctx->pc = 0x1BAE70u;
            goto label_1bae70;
        }
    }
    ctx->pc = 0x1BAE40u;
    // 0x1bae40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1bae44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1bae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1bae48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bae50: 0x24a56b68  addiu       $a1, $a1, 0x6B68
    ctx->pc = 0x1bae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    // 0x1bae54: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1bae54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1bae58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bae5c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bae60: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1BAE60u;
    SET_GPR_U32(ctx, 31, 0x1BAE68u);
    ctx->pc = 0x1BAE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE60u;
            // 0x1bae64: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE68u; }
        if (ctx->pc != 0x1BAE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE68u; }
        if (ctx->pc != 0x1BAE68u) { return; }
    }
    ctx->pc = 0x1BAE68u;
label_1bae68:
    // 0x1bae68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE68u;
    {
        const bool branch_taken_0x1bae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae68) {
            ctx->pc = 0x1BAE88u;
            goto label_1bae88;
        }
    }
    ctx->pc = 0x1BAE70u;
label_1bae70:
    // 0x1bae70: 0x24e700b8  addiu       $a3, $a3, 0xB8
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x1bae74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1bae78:
    // 0x1bae78: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x1bae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bae7c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bae80: 0x1445ffeb  bne         $v0, $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BAE80u;
    {
        const bool branch_taken_0x1bae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bae80) {
            ctx->pc = 0x1BAE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bae30;
        }
    }
    ctx->pc = 0x1BAE88u;
label_1bae88:
    // 0x1bae88: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1bae8c: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x1bae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1bae90: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1bae94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bae98: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1BAE98u;
    SET_GPR_U32(ctx, 31, 0x1BAEA0u);
    ctx->pc = 0x1BAE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE98u;
            // 0x1bae9c: 0x24070048  addiu       $a3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEA0u; }
        if (ctx->pc != 0x1BAEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEA0u; }
        if (ctx->pc != 0x1BAEA0u) { return; }
    }
    ctx->pc = 0x1BAEA0u;
label_1baea0:
    // 0x1baea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1baea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1baea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1baea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1baea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1baea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1baeac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1baeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baeb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEB8u;
            // 0x1baebc: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAEC0u;
}
