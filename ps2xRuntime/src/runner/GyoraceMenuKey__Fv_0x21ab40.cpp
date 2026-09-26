#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoraceMenuKey__Fv
// Address: 0x21ab40 - 0x21bdcc
void GyoraceMenuKey__Fv_0x21ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoraceMenuKey__Fv_0x21ab40");
#endif

    switch (ctx->pc) {
        case 0x21aba4u: goto label_21aba4;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abbcu: goto label_21abbc;
        case 0x21acc8u: goto label_21acc8;
        case 0x21acdcu: goto label_21acdc;
        case 0x21acfcu: goto label_21acfc;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad30u: goto label_21ad30;
        case 0x21ad50u: goto label_21ad50;
        case 0x21ad64u: goto label_21ad64;
        case 0x21ad74u: goto label_21ad74;
        case 0x21ad88u: goto label_21ad88;
        case 0x21ada0u: goto label_21ada0;
        case 0x21adb8u: goto label_21adb8;
        case 0x21add0u: goto label_21add0;
        case 0x21addcu: goto label_21addc;
        case 0x21adf4u: goto label_21adf4;
        case 0x21ae18u: goto label_21ae18;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae9cu: goto label_21ae9c;
        case 0x21aed4u: goto label_21aed4;
        case 0x21af48u: goto label_21af48;
        case 0x21af70u: goto label_21af70;
        case 0x21af7cu: goto label_21af7c;
        case 0x21afacu: goto label_21afac;
        case 0x21afd8u: goto label_21afd8;
        case 0x21b004u: goto label_21b004;
        case 0x21b010u: goto label_21b010;
        case 0x21b028u: goto label_21b028;
        case 0x21b090u: goto label_21b090;
        case 0x21b0a4u: goto label_21b0a4;
        case 0x21b0b4u: goto label_21b0b4;
        case 0x21b0bcu: goto label_21b0bc;
        case 0x21b0d4u: goto label_21b0d4;
        case 0x21b0e8u: goto label_21b0e8;
        case 0x21b10cu: goto label_21b10c;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b138u: goto label_21b138;
        case 0x21b144u: goto label_21b144;
        case 0x21b154u: goto label_21b154;
        case 0x21b174u: goto label_21b174;
        case 0x21b184u: goto label_21b184;
        case 0x21b1bcu: goto label_21b1bc;
        case 0x21b1c8u: goto label_21b1c8;
        case 0x21b1e0u: goto label_21b1e0;
        case 0x21b1f0u: goto label_21b1f0;
        case 0x21b200u: goto label_21b200;
        case 0x21b218u: goto label_21b218;
        case 0x21b240u: goto label_21b240;
        case 0x21b264u: goto label_21b264;
        case 0x21b278u: goto label_21b278;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b2b0u: goto label_21b2b0;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b2f0u: goto label_21b2f0;
        case 0x21b300u: goto label_21b300;
        case 0x21b318u: goto label_21b318;
        case 0x21b338u: goto label_21b338;
        case 0x21b358u: goto label_21b358;
        case 0x21b370u: goto label_21b370;
        case 0x21b390u: goto label_21b390;
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3d8u: goto label_21b3d8;
        case 0x21b3ecu: goto label_21b3ec;
        case 0x21b3fcu: goto label_21b3fc;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b424u: goto label_21b424;
        case 0x21b430u: goto label_21b430;
        case 0x21b450u: goto label_21b450;
        case 0x21b460u: goto label_21b460;
        case 0x21b478u: goto label_21b478;
        case 0x21b488u: goto label_21b488;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b4b0u: goto label_21b4b0;
        case 0x21b4ccu: goto label_21b4cc;
        case 0x21b4dcu: goto label_21b4dc;
        case 0x21b4f4u: goto label_21b4f4;
        case 0x21b510u: goto label_21b510;
        case 0x21b530u: goto label_21b530;
        case 0x21b540u: goto label_21b540;
        case 0x21b558u: goto label_21b558;
        case 0x21b560u: goto label_21b560;
        case 0x21b568u: goto label_21b568;
        case 0x21b57cu: goto label_21b57c;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5ccu: goto label_21b5cc;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5e8u: goto label_21b5e8;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b754u: goto label_21b754;
        case 0x21b774u: goto label_21b774;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b804u: goto label_21b804;
        case 0x21b828u: goto label_21b828;
        case 0x21b844u: goto label_21b844;
        case 0x21b858u: goto label_21b858;
        case 0x21b86cu: goto label_21b86c;
        case 0x21b884u: goto label_21b884;
        case 0x21b89cu: goto label_21b89c;
        case 0x21b8acu: goto label_21b8ac;
        case 0x21b8b4u: goto label_21b8b4;
        case 0x21b8d0u: goto label_21b8d0;
        case 0x21b8ecu: goto label_21b8ec;
        case 0x21b90cu: goto label_21b90c;
        case 0x21b914u: goto label_21b914;
        case 0x21b920u: goto label_21b920;
        case 0x21b940u: goto label_21b940;
        case 0x21b978u: goto label_21b978;
        case 0x21b984u: goto label_21b984;
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba28u: goto label_21ba28;
        case 0x21ba50u: goto label_21ba50;
        case 0x21ba8cu: goto label_21ba8c;
        case 0x21bab4u: goto label_21bab4;
        case 0x21bac8u: goto label_21bac8;
        case 0x21bae0u: goto label_21bae0;
        case 0x21baf4u: goto label_21baf4;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb18u: goto label_21bb18;
        case 0x21bb28u: goto label_21bb28;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb88u: goto label_21bb88;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bbc4u: goto label_21bbc4;
        case 0x21bbd0u: goto label_21bbd0;
        case 0x21bbe0u: goto label_21bbe0;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bc38u: goto label_21bc38;
        case 0x21bc68u: goto label_21bc68;
        case 0x21bc7cu: goto label_21bc7c;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd9cu: goto label_21bd9c;
        default: break;
    }

    ctx->pc = 0x21ab40u;

    // 0x21ab40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21ab44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21ab48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21ab4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21ab50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21ab54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21ab58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21ab5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ab60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ab64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ab68: 0x8382931c  lb          $v0, -0x6CE4($gp)
    ctx->pc = 0x21ab68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x21ab6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB6Cu;
    {
        const bool branch_taken_0x21ab6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AB6Cu;
            // 0x21ab70: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab6c) {
            ctx->pc = 0x21AB80u;
            goto label_21ab80;
        }
    }
    ctx->pc = 0x21AB74u;
    // 0x21ab74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ab78: 0xaf809318  sw          $zero, -0x6CE8($gp)
    ctx->pc = 0x21ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939416), GPR_U32(ctx, 0));
    // 0x21ab7c: 0xa382931c  sb          $v0, -0x6CE4($gp)
    ctx->pc = 0x21ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939420), (uint8_t)GPR_U32(ctx, 2));
label_21ab80:
    // 0x21ab80: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x21ab84: 0x8c30ca40  lw          $s0, -0x35C0($at)
    ctx->pc = 0x21ab84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x21ab88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21ab88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab8c: 0xaf8092fc  sw          $zero, -0x6D04($gp)
    ctx->pc = 0x21ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
    // 0x21ab90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21ab90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21ab98: 0x8c31ca44  lw          $s1, -0x35BC($at)
    ctx->pc = 0x21ab98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x21ab9c: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x21AB9Cu;
    SET_GPR_U32(ctx, 31, 0x21ABA4u);
    ctx->pc = 0x21ABA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AB9Cu;
            // 0x21aba0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABA4u; }
        if (ctx->pc != 0x21ABA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABA4u; }
        if (ctx->pc != 0x21ABA4u) { return; }
    }
    ctx->pc = 0x21ABA4u;
label_21aba4:
    // 0x21aba4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x21aba8: 0xc08f840  jal         func_23E100
    ctx->pc = 0x21ABA8u;
    SET_GPR_U32(ctx, 31, 0x21ABB0u);
    ctx->pc = 0x21ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABA8u;
            // 0x21abac: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABB0u; }
        if (ctx->pc != 0x21ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABB0u; }
        if (ctx->pc != 0x21ABB0u) { return; }
    }
    ctx->pc = 0x21ABB0u;
label_21abb0:
    // 0x21abb0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x21abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x21abb4: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x21ABB4u;
    SET_GPR_U32(ctx, 31, 0x21ABBCu);
    ctx->pc = 0x21ABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABB4u;
            // 0x21abb8: 0x2a2a825  or          $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABBCu; }
        if (ctx->pc != 0x21ABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ABBCu; }
        if (ctx->pc != 0x21ABBCu) { return; }
    }
    ctx->pc = 0x21ABBCu;
label_21abbc:
    // 0x21abbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21abbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abc0: 0x83829324  lb          $v0, -0x6CDC($gp)
    ctx->pc = 0x21abc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939428)));
    // 0x21abc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21ABC4u;
    {
        const bool branch_taken_0x21abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABC4u;
            // 0x21abc8: 0x8f9692bc  lw          $s6, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abc4) {
            ctx->pc = 0x21ABD8u;
            goto label_21abd8;
        }
    }
    ctx->pc = 0x21ABCCu;
    // 0x21abcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21abd0: 0xa3809320  sb          $zero, -0x6CE0($gp)
    ctx->pc = 0x21abd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939424), (uint8_t)GPR_U32(ctx, 0));
    // 0x21abd4: 0xa3829324  sb          $v0, -0x6CDC($gp)
    ctx->pc = 0x21abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939428), (uint8_t)GPR_U32(ctx, 2));
label_21abd8:
    // 0x21abd8: 0x878292c8  lh          $v0, -0x6D38($gp)
    ctx->pc = 0x21abd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21abdc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x21abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x21abe0: 0x10430360  beq         $v0, $v1, . + 4 + (0x360 << 2)
    ctx->pc = 0x21ABE0u;
    {
        const bool branch_taken_0x21abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABE0u;
            // 0x21abe4: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abe0) {
            ctx->pc = 0x21B964u;
            goto label_21b964;
        }
    }
    ctx->pc = 0x21ABE8u;
    // 0x21abe8: 0x1043031d  beq         $v0, $v1, . + 4 + (0x31D << 2)
    ctx->pc = 0x21ABE8u;
    {
        const bool branch_taken_0x21abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABE8u;
            // 0x21abec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abe8) {
            ctx->pc = 0x21B860u;
            goto label_21b860;
        }
    }
    ctx->pc = 0x21ABF0u;
    // 0x21abf0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x21abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21abf4: 0x1043031b  beq         $v0, $v1, . + 4 + (0x31B << 2)
    ctx->pc = 0x21ABF4u;
    {
        const bool branch_taken_0x21abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ABF4u;
            // 0x21abf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abf4) {
            ctx->pc = 0x21B864u;
            goto label_21b864;
        }
    }
    ctx->pc = 0x21ABFCu;
    // 0x21abfc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x21abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x21ac00: 0x104302e4  beq         $v0, $v1, . + 4 + (0x2E4 << 2)
    ctx->pc = 0x21AC00u;
    {
        const bool branch_taken_0x21ac00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC00u;
            // 0x21ac04: 0x2403003e  addiu       $v1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac00) {
            ctx->pc = 0x21B794u;
            goto label_21b794;
        }
    }
    ctx->pc = 0x21AC08u;
    // 0x21ac08: 0x104302d7  beq         $v0, $v1, . + 4 + (0x2D7 << 2)
    ctx->pc = 0x21AC08u;
    {
        const bool branch_taken_0x21ac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC08u;
            // 0x21ac0c: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac08) {
            ctx->pc = 0x21B768u;
            goto label_21b768;
        }
    }
    ctx->pc = 0x21AC10u;
    // 0x21ac10: 0x104302c0  beq         $v0, $v1, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x21AC10u;
    {
        const bool branch_taken_0x21ac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC10u;
            // 0x21ac14: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac10) {
            ctx->pc = 0x21B714u;
            goto label_21b714;
        }
    }
    ctx->pc = 0x21AC18u;
    // 0x21ac18: 0x104302b0  beq         $v0, $v1, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x21AC18u;
    {
        const bool branch_taken_0x21ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC18u;
            // 0x21ac1c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac18) {
            ctx->pc = 0x21B6DCu;
            goto label_21b6dc;
        }
    }
    ctx->pc = 0x21AC20u;
    // 0x21ac20: 0x104602a7  beq         $v0, $a2, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x21AC20u;
    {
        const bool branch_taken_0x21ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC20u;
            // 0x21ac24: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac20) {
            ctx->pc = 0x21B6C0u;
            goto label_21b6c0;
        }
    }
    ctx->pc = 0x21AC28u;
    // 0x21ac28: 0x10430286  beq         $v0, $v1, . + 4 + (0x286 << 2)
    ctx->pc = 0x21AC28u;
    {
        const bool branch_taken_0x21ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC28u;
            // 0x21ac2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac28) {
            ctx->pc = 0x21B644u;
            goto label_21b644;
        }
    }
    ctx->pc = 0x21AC30u;
    // 0x21ac30: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21ac34: 0x1043025d  beq         $v0, $v1, . + 4 + (0x25D << 2)
    ctx->pc = 0x21AC34u;
    {
        const bool branch_taken_0x21ac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC34u;
            // 0x21ac38: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac34) {
            ctx->pc = 0x21B5ACu;
            goto label_21b5ac;
        }
    }
    ctx->pc = 0x21AC3Cu;
    // 0x21ac3c: 0x10430254  beq         $v0, $v1, . + 4 + (0x254 << 2)
    ctx->pc = 0x21AC3Cu;
    {
        const bool branch_taken_0x21ac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC3Cu;
            // 0x21ac40: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac3c) {
            ctx->pc = 0x21B590u;
            goto label_21b590;
        }
    }
    ctx->pc = 0x21AC44u;
    // 0x21ac44: 0x1043023c  beq         $v0, $v1, . + 4 + (0x23C << 2)
    ctx->pc = 0x21AC44u;
    {
        const bool branch_taken_0x21ac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC44u;
            // 0x21ac48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac44) {
            ctx->pc = 0x21B538u;
            goto label_21b538;
        }
    }
    ctx->pc = 0x21AC4Cu;
    // 0x21ac4c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x21ac50: 0x10430231  beq         $v0, $v1, . + 4 + (0x231 << 2)
    ctx->pc = 0x21AC50u;
    {
        const bool branch_taken_0x21ac50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC50u;
            // 0x21ac54: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac50) {
            ctx->pc = 0x21B518u;
            goto label_21b518;
        }
    }
    ctx->pc = 0x21AC58u;
    // 0x21ac58: 0x10430213  beq         $v0, $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x21AC58u;
    {
        const bool branch_taken_0x21ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC58u;
            // 0x21ac5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac58) {
            ctx->pc = 0x21B4A8u;
            goto label_21b4a8;
        }
    }
    ctx->pc = 0x21AC60u;
    // 0x21ac60: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21ac64: 0x104301c0  beq         $v0, $v1, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x21AC64u;
    {
        const bool branch_taken_0x21ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC64u;
            // 0x21ac68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac64) {
            ctx->pc = 0x21B368u;
            goto label_21b368;
        }
    }
    ctx->pc = 0x21AC6Cu;
    // 0x21ac6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x21ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21ac70: 0x104301b5  beq         $v0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x21AC70u;
    {
        const bool branch_taken_0x21ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC70u;
            // 0x21ac74: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac70) {
            ctx->pc = 0x21B348u;
            goto label_21b348;
        }
    }
    ctx->pc = 0x21AC78u;
    // 0x21ac78: 0x1043018a  beq         $v0, $v1, . + 4 + (0x18A << 2)
    ctx->pc = 0x21AC78u;
    {
        const bool branch_taken_0x21ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC78u;
            // 0x21ac7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac78) {
            ctx->pc = 0x21B2A4u;
            goto label_21b2a4;
        }
    }
    ctx->pc = 0x21AC80u;
    // 0x21ac80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ac84: 0x10430131  beq         $v0, $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x21AC84u;
    {
        const bool branch_taken_0x21ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC84u;
            // 0x21ac88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac84) {
            ctx->pc = 0x21B14Cu;
            goto label_21b14c;
        }
    }
    ctx->pc = 0x21AC8Cu;
    // 0x21ac8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x21ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21ac90: 0x10430120  beq         $v0, $v1, . + 4 + (0x120 << 2)
    ctx->pc = 0x21AC90u;
    {
        const bool branch_taken_0x21ac90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC90u;
            // 0x21ac94: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac90) {
            ctx->pc = 0x21B114u;
            goto label_21b114;
        }
    }
    ctx->pc = 0x21AC98u;
    // 0x21ac98: 0x10430110  beq         $v0, $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x21AC98u;
    {
        const bool branch_taken_0x21ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC98u;
            // 0x21ac9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac98) {
            ctx->pc = 0x21B0DCu;
            goto label_21b0dc;
        }
    }
    ctx->pc = 0x21ACA0u;
    // 0x21aca0: 0x10430108  beq         $v0, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x21ACA0u;
    {
        const bool branch_taken_0x21aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACA0u;
            // 0x21aca4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aca0) {
            ctx->pc = 0x21B0C4u;
            goto label_21b0c4;
        }
    }
    ctx->pc = 0x21ACA8u;
    // 0x21aca8: 0x1047004f  beq         $v0, $a3, . + 4 + (0x4F << 2)
    ctx->pc = 0x21ACA8u;
    {
        const bool branch_taken_0x21aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x21aca8) {
            ctx->pc = 0x21ADE8u;
            goto label_21ade8;
        }
    }
    ctx->pc = 0x21ACB0u;
    // 0x21acb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ACB0u;
    {
        const bool branch_taken_0x21acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21acb0) {
            ctx->pc = 0x21ACC0u;
            goto label_21acc0;
        }
    }
    ctx->pc = 0x21ACB8u;
    // 0x21acb8: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x21ACB8u;
    {
        const bool branch_taken_0x21acb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACB8u;
            // 0x21acbc: 0x260082a  slt         $at, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acb8) {
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21ACC0u;
label_21acc0:
    // 0x21acc0: 0xc05239c  jal         func_148E70
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACC8u; }
        if (ctx->pc != 0x21ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACC8u; }
        if (ctx->pc != 0x21ACC8u) { return; }
    }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x1440032e  bnez        $v0, . + 4 + (0x32E << 2)
    ctx->pc = 0x21ACC8u;
    {
        const bool branch_taken_0x21acc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACC8u;
            // 0x21accc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acc8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21ACD0u;
    // 0x21acd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acd4: 0xc05231c  jal         func_148C70
    ctx->pc = 0x21ACD4u;
    SET_GPR_U32(ctx, 31, 0x21ACDCu);
    ctx->pc = 0x21ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACD4u;
            // 0x21acd8: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACDCu; }
        if (ctx->pc != 0x21ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACDCu; }
        if (ctx->pc != 0x21ACDCu) { return; }
    }
    ctx->pc = 0x21ACDCu;
label_21acdc:
    // 0x21acdc: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x21ace0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ace4: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x21ace8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21ace8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acec: 0x24a5a3a8  addiu       $a1, $a1, -0x5C58
    ctx->pc = 0x21acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943656));
    // 0x21acf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21acf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acf4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x21ACF4u;
    SET_GPR_U32(ctx, 31, 0x21ACFCu);
    ctx->pc = 0x21ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACF4u;
            // 0x21acf8: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACFCu; }
        if (ctx->pc != 0x21ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ACFCu; }
        if (ctx->pc != 0x21ACFCu) { return; }
    }
    ctx->pc = 0x21ACFCu;
label_21acfc:
    // 0x21acfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21ACFCu;
    {
        const bool branch_taken_0x21acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ACFCu;
            // 0x21ad00: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acfc) {
            ctx->pc = 0x21AD1Cu;
            goto label_21ad1c;
        }
    }
    ctx->pc = 0x21AD04u;
    // 0x21ad04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad08: 0x8c26c9c4  lw          $a2, -0x363C($at)
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
    // 0x21ad0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad14: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x21AD14u;
    SET_GPR_U32(ctx, 31, 0x21AD1Cu);
    ctx->pc = 0x21AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD14u;
            // 0x21ad18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD1Cu; }
        if (ctx->pc != 0x21AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD1Cu; }
        if (ctx->pc != 0x21AD1Cu) { return; }
    }
    ctx->pc = 0x21AD1Cu;
label_21ad1c:
    // 0x21ad1c: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x21ad20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ad24: 0x24a5a3b8  addiu       $a1, $a1, -0x5C48
    ctx->pc = 0x21ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943672));
    // 0x21ad28: 0xc052734  jal         func_149CD0
    ctx->pc = 0x21AD28u;
    SET_GPR_U32(ctx, 31, 0x21AD30u);
    ctx->pc = 0x21AD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD28u;
            // 0x21ad2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD30u; }
        if (ctx->pc != 0x21AD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD30u; }
        if (ctx->pc != 0x21AD30u) { return; }
    }
    ctx->pc = 0x21AD30u;
label_21ad30:
    // 0x21ad30: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AD30u;
    {
        const bool branch_taken_0x21ad30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD30u;
            // 0x21ad34: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad30) {
            ctx->pc = 0x21AD50u;
            goto label_21ad50;
        }
    }
    ctx->pc = 0x21AD38u;
    // 0x21ad38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad3c: 0x8c26c9c4  lw          $a2, -0x363C($at)
    ctx->pc = 0x21ad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
    // 0x21ad40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad48: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x21AD48u;
    SET_GPR_U32(ctx, 31, 0x21AD50u);
    ctx->pc = 0x21AD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD48u;
            // 0x21ad4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD50u; }
        if (ctx->pc != 0x21AD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD50u; }
        if (ctx->pc != 0x21AD50u) { return; }
    }
    ctx->pc = 0x21AD50u;
label_21ad50:
    // 0x21ad50: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x21ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x21ad54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ad58: 0x24a5a3c8  addiu       $a1, $a1, -0x5C38
    ctx->pc = 0x21ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943688));
    // 0x21ad5c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x21AD5Cu;
    SET_GPR_U32(ctx, 31, 0x21AD64u);
    ctx->pc = 0x21AD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD5Cu;
            // 0x21ad60: 0x278692ec  addiu       $a2, $gp, -0x6D14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD64u; }
        if (ctx->pc != 0x21AD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD64u; }
        if (ctx->pc != 0x21AD64u) { return; }
    }
    ctx->pc = 0x21AD64u;
label_21ad64:
    // 0x21ad64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21ad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21ad68: 0x8c24c9c4  lw          $a0, -0x363C($at)
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
    // 0x21ad6c: 0xc08cb18  jal         func_232C60
    ctx->pc = 0x21AD6Cu;
    SET_GPR_U32(ctx, 31, 0x21AD74u);
    ctx->pc = 0x21AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD6Cu;
            // 0x21ad70: 0xaf8292e8  sw          $v0, -0x6D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD74u; }
        if (ctx->pc != 0x21AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD74u; }
        if (ctx->pc != 0x21AD74u) { return; }
    }
    ctx->pc = 0x21AD74u;
label_21ad74:
    // 0x21ad74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ad78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad7c: 0x24a5a3d8  addiu       $a1, $a1, -0x5C28
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943704));
    // 0x21ad80: 0xc04b414  jal         func_12D050
    ctx->pc = 0x21AD80u;
    SET_GPR_U32(ctx, 31, 0x21AD88u);
    ctx->pc = 0x21AD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD80u;
            // 0x21ad84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD88u; }
        if (ctx->pc != 0x21AD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD88u; }
        if (ctx->pc != 0x21AD88u) { return; }
    }
    ctx->pc = 0x21AD88u;
label_21ad88:
    // 0x21ad88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ad8c: 0xaf8292c4  sw          $v0, -0x6D3C($gp)
    ctx->pc = 0x21ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 2));
    // 0x21ad90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad94: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20
    ctx->pc = 0x21ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
    // 0x21ad98: 0xc04b414  jal         func_12D050
    ctx->pc = 0x21AD98u;
    SET_GPR_U32(ctx, 31, 0x21ADA0u);
    ctx->pc = 0x21AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD98u;
            // 0x21ad9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADA0u; }
        if (ctx->pc != 0x21ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADA0u; }
        if (ctx->pc != 0x21ADA0u) { return; }
    }
    ctx->pc = 0x21ADA0u;
label_21ada0:
    // 0x21ada0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21ada4: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
    // 0x21ada8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adac: 0x24a59f58  addiu       $a1, $a1, -0x60A8
    ctx->pc = 0x21adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942552));
    // 0x21adb0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x21ADB0u;
    SET_GPR_U32(ctx, 31, 0x21ADB8u);
    ctx->pc = 0x21ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADB0u;
            // 0x21adb4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADB8u; }
        if (ctx->pc != 0x21ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADB8u; }
        if (ctx->pc != 0x21ADB8u) { return; }
    }
    ctx->pc = 0x21ADB8u;
label_21adb8:
    // 0x21adb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21adbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adc0: 0xaf8291d0  sw          $v0, -0x6E30($gp)
    ctx->pc = 0x21adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
    // 0x21adc4: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    // 0x21adc8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x21ADC8u;
    SET_GPR_U32(ctx, 31, 0x21ADD0u);
    ctx->pc = 0x21ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADC8u;
            // 0x21adcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADD0u; }
        if (ctx->pc != 0x21ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADD0u; }
        if (ctx->pc != 0x21ADD0u) { return; }
    }
    ctx->pc = 0x21ADD0u;
label_21add0:
    // 0x21add0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x21add4: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x21ADD4u;
    SET_GPR_U32(ctx, 31, 0x21ADDCu);
    ctx->pc = 0x21ADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADD4u;
            // 0x21add8: 0xaf829310  sw          $v0, -0x6CF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADDCu; }
        if (ctx->pc != 0x21ADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADDCu; }
        if (ctx->pc != 0x21ADDCu) { return; }
    }
    ctx->pc = 0x21ADDCu;
label_21addc:
    // 0x21addc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x21addcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ade0: 0x100002e8  b           . + 4 + (0x2E8 << 2)
    ctx->pc = 0x21ADE0u;
    {
        const bool branch_taken_0x21ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADE0u;
            // 0x21ade4: 0xaf9792fc  sw          $s7, -0x6D04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ade0) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21ADE8u;
label_21ade8:
    // 0x21ade8: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21adec: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x21ADECu;
    SET_GPR_U32(ctx, 31, 0x21ADF4u);
    ctx->pc = 0x21ADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADECu;
            // 0x21adf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADF4u; }
        if (ctx->pc != 0x21ADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADF4u; }
        if (ctx->pc != 0x21ADF4u) { return; }
    }
    ctx->pc = 0x21ADF4u;
label_21adf4:
    // 0x21adf4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x21adf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adf8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x21adf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x21adfc: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x21ADFCu;
    {
        const bool branch_taken_0x21adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADFCu;
            // 0x21ae00: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adfc) {
            ctx->pc = 0x21B018u;
            goto label_21b018;
        }
    }
    ctx->pc = 0x21AE04u;
    // 0x21ae04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ae04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ae0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae10: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x21ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x21ae14: 0x2463fea0  addiu       $v1, $v1, -0x160
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966944));
label_21ae18:
    // 0x21ae18: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21ae1c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x21ae1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ae20: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x21ae20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21ae24: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE24u;
    {
        const bool branch_taken_0x21ae24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae24) {
            ctx->pc = 0x21AE30u;
            goto label_21ae30;
        }
    }
    ctx->pc = 0x21AE2Cu;
    // 0x21ae2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ae2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21ae30:
    // 0x21ae30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21ae34: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x21ae34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21ae38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21AE38u;
    {
        const bool branch_taken_0x21ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE38u;
            // 0x21ae3c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae38) {
            ctx->pc = 0x21AE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ae18;
        }
    }
    ctx->pc = 0x21AE40u;
    // 0x21ae40: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21ae44: 0xc0bdc18  jal         func_2F7060
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x21AE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE44u;
            // 0x21ae48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7060u;
    if (runtime->hasFunction(0x2F7060u)) {
        auto targetFn = runtime->lookupFunction(0x2F7060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE4Cu; }
        if (ctx->pc != 0x21AE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceData__12CGyoRaceDataFPi_0x2f7060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE4Cu; }
        if (ctx->pc != 0x21AE4Cu) { return; }
    }
    ctx->pc = 0x21AE4Cu;
label_21ae4c:
    // 0x21ae4c: 0x2ec10007  sltiu       $at, $s6, 0x7
    ctx->pc = 0x21ae4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21ae50: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x21AE50u;
    {
        const bool branch_taken_0x21ae50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE50u;
            // 0x21ae54: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae50) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AE58u;
    // 0x21ae58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21ae5c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x21ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x21ae60: 0x2484a470  addiu       $a0, $a0, -0x5B90
    ctx->pc = 0x21ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943856));
    // 0x21ae64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21ae68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ae6c: 0x600008  jr          $v1
    ctx->pc = 0x21AE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AE74u: goto label_21ae74;
            case 0x21AEE0u: goto label_21aee0;
            case 0x21AF24u: goto label_21af24;
            case 0x21AF50u: goto label_21af50;
            case 0x21AFB4u: goto label_21afb4;
            case 0x21AFE0u: goto label_21afe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AE74u;
label_21ae74:
    // 0x21ae74: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AE74u;
    {
        const bool branch_taken_0x21ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE74u;
            // 0x21ae78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae74) {
            ctx->pc = 0x21AEA4u;
            goto label_21aea4;
        }
    }
    ctx->pc = 0x21AE7Cu;
    // 0x21ae7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ae80: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21ae84: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21ae88: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x21ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x21ae8c: 0x8f829298  lw          $v0, -0x6D68($gp)
    ctx->pc = 0x21ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21ae90: 0xa39592d0  sb          $s5, -0x6D30($gp)
    ctx->pc = 0x21ae90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 21));
    // 0x21ae94: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21AE94u;
    SET_GPR_U32(ctx, 31, 0x21AE9Cu);
    ctx->pc = 0x21AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE94u;
            // 0x21ae98: 0xa04021e8  sb          $zero, 0x21E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE9Cu; }
        if (ctx->pc != 0x21AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE9Cu; }
        if (ctx->pc != 0x21AE9Cu) { return; }
    }
    ctx->pc = 0x21AE9Cu;
label_21ae9c:
    // 0x21ae9c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x21AE9Cu;
    {
        const bool branch_taken_0x21ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE9Cu;
            // 0x21aea0: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae9c) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AEA4u;
label_21aea4:
    // 0x21aea4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x21aea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x21aea8: 0xa423dce0  sh          $v1, -0x2320($at)
    ctx->pc = 0x21aea8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 3));
    // 0x21aeac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21aeacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21aeb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x21aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x21aeb4: 0xaf829318  sw          $v0, -0x6CE8($gp)
    ctx->pc = 0x21aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939416), GPR_U32(ctx, 2));
    // 0x21aeb8: 0xac22dce4  sw          $v0, -0x231C($at)
    ctx->pc = 0x21aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958308), GPR_U32(ctx, 2));
    // 0x21aebc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x21aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21aec0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21aec4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21aec4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21aec8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21aec8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x21aecc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x21AECCu;
    SET_GPR_U32(ctx, 31, 0x21AED4u);
    ctx->pc = 0x21AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AECCu;
            // 0x21aed0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AED4u; }
        if (ctx->pc != 0x21AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AED4u; }
        if (ctx->pc != 0x21AED4u) { return; }
    }
    ctx->pc = 0x21AED4u;
label_21aed4:
    // 0x21aed4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21aed8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x21AED8u;
    {
        const bool branch_taken_0x21aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AED8u;
            // 0x21aedc: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed8) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AEE0u;
label_21aee0:
    // 0x21aee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21aee4: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AEE4u;
    {
        const bool branch_taken_0x21aee4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AEE4u;
            // 0x21aee8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aee4) {
            ctx->pc = 0x21AEF8u;
            goto label_21aef8;
        }
    }
    ctx->pc = 0x21AEECu;
    // 0x21aeec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21aef0: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21aef0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21aef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21aef8:
    // 0x21aef8: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AEF8u;
    {
        const bool branch_taken_0x21aef8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AEF8u;
            // 0x21aefc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aef8) {
            ctx->pc = 0x21AF04u;
            goto label_21af04;
        }
    }
    ctx->pc = 0x21AF00u;
    // 0x21af00: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21af00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
label_21af04:
    // 0x21af04: 0x8f829298  lw          $v0, -0x6D68($gp)
    ctx->pc = 0x21af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21af08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21af0c: 0xa04021e8  sb          $zero, 0x21E8($v0)
    ctx->pc = 0x21af0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 0));
    // 0x21af10: 0xa380929c  sb          $zero, -0x6D64($gp)
    ctx->pc = 0x21af10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939292), (uint8_t)GPR_U32(ctx, 0));
    // 0x21af14: 0xa39292ac  sb          $s2, -0x6D54($gp)
    ctx->pc = 0x21af14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939308), (uint8_t)GPR_U32(ctx, 18));
    // 0x21af18: 0xa39292d4  sb          $s2, -0x6D2C($gp)
    ctx->pc = 0x21af18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939348), (uint8_t)GPR_U32(ctx, 18));
    // 0x21af1c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x21AF1Cu;
    {
        const bool branch_taken_0x21af1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF1Cu;
            // 0x21af20: 0xaf9292fc  sw          $s2, -0x6D04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af1c) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AF24u;
label_21af24:
    // 0x21af24: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF24u;
    {
        const bool branch_taken_0x21af24 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x21AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF24u;
            // 0x21af28: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af24) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AF2Cu;
    // 0x21af2c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21AF2Cu;
    {
        const bool branch_taken_0x21af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF2Cu;
            // 0x21af30: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af2c) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AF34u;
label_21af34:
    // 0x21af34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21af34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21af38: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21af38u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21af3c: 0x2484a400  addiu       $a0, $a0, -0x5C00
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943744));
    // 0x21af40: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21AF40u;
    SET_GPR_U32(ctx, 31, 0x21AF48u);
    ctx->pc = 0x21AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF40u;
            // 0x21af44: 0xa39592d0  sb          $s5, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF48u; }
        if (ctx->pc != 0x21AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF48u; }
        if (ctx->pc != 0x21AF48u) { return; }
    }
    ctx->pc = 0x21AF48u;
label_21af48:
    // 0x21af48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21AF48u;
    {
        const bool branch_taken_0x21af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF48u;
            // 0x21af4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af48) {
            ctx->pc = 0x21B008u;
            goto label_21b008;
        }
    }
    ctx->pc = 0x21AF50u;
label_21af50:
    // 0x21af50: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x21af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21af54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af58: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21af58u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21af5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21af60: 0xa39592a0  sb          $s5, -0x6D60($gp)
    ctx->pc = 0x21af60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939296), (uint8_t)GPR_U32(ctx, 21));
    // 0x21af64: 0xaf809294  sw          $zero, -0x6D6C($gp)
    ctx->pc = 0x21af64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 0));
    // 0x21af68: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x21AF68u;
    SET_GPR_U32(ctx, 31, 0x21AF70u);
    ctx->pc = 0x21AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF68u;
            // 0x21af6c: 0xa39592b4  sb          $s5, -0x6D4C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF70u; }
        if (ctx->pc != 0x21AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF70u; }
        if (ctx->pc != 0x21AF70u) { return; }
    }
    ctx->pc = 0x21AF70u;
label_21af70:
    // 0x21af70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af74: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21AF74u;
    SET_GPR_U32(ctx, 31, 0x21AF7Cu);
    ctx->pc = 0x21AF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF74u;
            // 0x21af78: 0x2405139a  addiu       $a1, $zero, 0x139A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5018));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF7Cu; }
        if (ctx->pc != 0x21AF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF7Cu; }
        if (ctx->pc != 0x21AF7Cu) { return; }
    }
    ctx->pc = 0x21AF7Cu;
label_21af7c:
    // 0x21af7c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x21af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21af80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AF80u;
    {
        const bool branch_taken_0x21af80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF80u;
            // 0x21af84: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af80) {
            ctx->pc = 0x21AF94u;
            goto label_21af94;
        }
    }
    ctx->pc = 0x21AF88u;
    // 0x21af88: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x21af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21af8c: 0xae2201a8  sw          $v0, 0x1A8($s1)
    ctx->pc = 0x21af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 2));
    // 0x21af90: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_21af94:
    // 0x21af94: 0xae2201ac  sw          $v0, 0x1AC($s1)
    ctx->pc = 0x21af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x21af98: 0x8f829298  lw          $v0, -0x6D68($gp)
    ctx->pc = 0x21af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21af9c: 0xa04021e8  sb          $zero, 0x21E8($v0)
    ctx->pc = 0x21af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afa0: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21afa4: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x21AFA4u;
    SET_GPR_U32(ctx, 31, 0x21AFACu);
    ctx->pc = 0x21AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFA4u;
            // 0x21afa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFACu; }
        if (ctx->pc != 0x21AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFACu; }
        if (ctx->pc != 0x21AFACu) { return; }
    }
    ctx->pc = 0x21AFACu;
label_21afac:
    // 0x21afac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21AFACu;
    {
        const bool branch_taken_0x21afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afac) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AFB4u;
label_21afb4:
    // 0x21afb4: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AFB4u;
    {
        const bool branch_taken_0x21afb4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x21AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFB4u;
            // 0x21afb8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afb4) {
            ctx->pc = 0x21AFC4u;
            goto label_21afc4;
        }
    }
    ctx->pc = 0x21AFBCu;
    // 0x21afbc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21AFBCu;
    {
        const bool branch_taken_0x21afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFBCu;
            // 0x21afc0: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afbc) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AFC4u;
label_21afc4:
    // 0x21afc4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21afc8: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21afc8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21afcc: 0x2484a410  addiu       $a0, $a0, -0x5BF0
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943760));
    // 0x21afd0: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21AFD0u;
    SET_GPR_U32(ctx, 31, 0x21AFD8u);
    ctx->pc = 0x21AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFD0u;
            // 0x21afd4: 0xa39592d0  sb          $s5, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFD8u; }
        if (ctx->pc != 0x21AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFD8u; }
        if (ctx->pc != 0x21AFD8u) { return; }
    }
    ctx->pc = 0x21AFD8u;
label_21afd8:
    // 0x21afd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21AFD8u;
    {
        const bool branch_taken_0x21afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afd8) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AFE0u;
label_21afe0:
    // 0x21afe0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21afe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21afe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21afe8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21afec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x21afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21aff0: 0xa78392c8  sh          $v1, -0x6D38($gp)
    ctx->pc = 0x21aff0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 3));
    // 0x21aff4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21aff4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21aff8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21aff8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x21affc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x21AFFCu;
    SET_GPR_U32(ctx, 31, 0x21B004u);
    ctx->pc = 0x21B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFFCu;
            // 0x21b000: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B004u; }
        if (ctx->pc != 0x21B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B004u; }
        if (ctx->pc != 0x21B004u) { return; }
    }
    ctx->pc = 0x21B004u;
label_21b004:
    // 0x21b004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b008:
    // 0x21b008: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B008u;
    SET_GPR_U32(ctx, 31, 0x21B010u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B010u; }
        if (ctx->pc != 0x21B010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B010u; }
        if (ctx->pc != 0x21B010u) { return; }
    }
    ctx->pc = 0x21B010u;
label_21b010:
    // 0x21b010: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x21B010u;
    {
        const bool branch_taken_0x21b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b010) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B018u;
label_21b018:
    // 0x21b018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B018u;
    {
        const bool branch_taken_0x21b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B018u;
            // 0x21b01c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b018) {
            ctx->pc = 0x21B030u;
            goto label_21b030;
        }
    }
    ctx->pc = 0x21B020u;
    // 0x21b020: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B020u;
    SET_GPR_U32(ctx, 31, 0x21B028u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B028u; }
        if (ctx->pc != 0x21B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B028u; }
        if (ctx->pc != 0x21B028u) { return; }
    }
    ctx->pc = 0x21B028u;
label_21b028:
    // 0x21b028: 0x1000035d  b           . + 4 + (0x35D << 2)
    ctx->pc = 0x21B028u;
    {
        const bool branch_taken_0x21b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B028u;
            // 0x21b02c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b028) {
            ctx->pc = 0x21BDA0u;
            goto label_21bda0;
        }
    }
    ctx->pc = 0x21B030u;
label_21b030:
    // 0x21b030: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x21b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x21b034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b038: 0x14620252  bne         $v1, $v0, . + 4 + (0x252 << 2)
    ctx->pc = 0x21B038u;
    {
        const bool branch_taken_0x21b038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B038u;
            // 0x21b03c: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b038) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B040u;
    // 0x21b040: 0x10400250  beqz        $v0, . + 4 + (0x250 << 2)
    ctx->pc = 0x21B040u;
    {
        const bool branch_taken_0x21b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B040u;
            // 0x21b044: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b040) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B048u;
    // 0x21b048: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21b04c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x21b050: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b054: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21b054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b058: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x21b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b05c: 0x2442fef8  addiu       $v0, $v0, -0x108
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967032));
    // 0x21b060: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x21b060u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x21b064: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x21b068: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x21b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x21b06c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x21b06cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b074: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21b078: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x21b078u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x21b07c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x21b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x21b080: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x21b080u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b084: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b088: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x21B088u;
    SET_GPR_U32(ctx, 31, 0x21B090u);
    ctx->pc = 0x21B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B088u;
            // 0x21b08c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B090u; }
        if (ctx->pc != 0x21B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B090u; }
        if (ctx->pc != 0x21B090u) { return; }
    }
    ctx->pc = 0x21B090u;
label_21b090:
    // 0x21b090: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b094: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x21b098: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21b09c: 0xc065f04  jal         func_197C10
    ctx->pc = 0x21B09Cu;
    SET_GPR_U32(ctx, 31, 0x21B0A4u);
    ctx->pc = 0x21B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B09Cu;
            // 0x21b0a0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197C10u;
    if (runtime->hasFunction(0x197C10u)) {
        auto targetFn = runtime->lookupFunction(0x197C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0A4u; }
        if (ctx->pc != 0x21B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransToData__13CGameDataUsedFPci_0x197c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0A4u; }
        if (ctx->pc != 0x21B0A4u) { return; }
    }
    ctx->pc = 0x21B0A4u;
label_21b0a4:
    // 0x21b0a4: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b0a8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b0ac: 0xc065d8c  jal         func_197630
    ctx->pc = 0x21B0ACu;
    SET_GPR_U32(ctx, 31, 0x21B0B4u);
    ctx->pc = 0x21B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0ACu;
            // 0x21b0b0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0B4u; }
        if (ctx->pc != 0x21B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0B4u; }
        if (ctx->pc != 0x21B0B4u) { return; }
    }
    ctx->pc = 0x21B0B4u;
label_21b0b4:
    // 0x21b0b4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B0B4u;
    SET_GPR_U32(ctx, 31, 0x21B0BCu);
    ctx->pc = 0x21B0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0B4u;
            // 0x21b0b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0BCu; }
        if (ctx->pc != 0x21B0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0BCu; }
        if (ctx->pc != 0x21B0BCu) { return; }
    }
    ctx->pc = 0x21B0BCu;
label_21b0bc:
    // 0x21b0bc: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x21B0BCu;
    {
        const bool branch_taken_0x21b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b0bc) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B0C4u;
label_21b0c4:
    // 0x21b0c4: 0x1280022f  beqz        $s4, . + 4 + (0x22F << 2)
    ctx->pc = 0x21B0C4u;
    {
        const bool branch_taken_0x21b0c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0C4u;
            // 0x21b0c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0c4) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B0CCu;
    // 0x21b0cc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B0CCu;
    SET_GPR_U32(ctx, 31, 0x21B0D4u);
    ctx->pc = 0x21B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0CCu;
            // 0x21b0d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0D4u; }
        if (ctx->pc != 0x21B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0D4u; }
        if (ctx->pc != 0x21B0D4u) { return; }
    }
    ctx->pc = 0x21B0D4u;
label_21b0d4:
    // 0x21b0d4: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x21B0D4u;
    {
        const bool branch_taken_0x21b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b0d4) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B0DCu;
label_21b0dc:
    // 0x21b0dc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b0e0: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x21B0E0u;
    SET_GPR_U32(ctx, 31, 0x21B0E8u);
    ctx->pc = 0x21B0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0E0u;
            // 0x21b0e4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0E8u; }
        if (ctx->pc != 0x21B0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0E8u; }
        if (ctx->pc != 0x21B0E8u) { return; }
    }
    ctx->pc = 0x21B0E8u;
label_21b0e8:
    // 0x21b0e8: 0x10400226  beqz        $v0, . + 4 + (0x226 << 2)
    ctx->pc = 0x21B0E8u;
    {
        const bool branch_taken_0x21b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0E8u;
            // 0x21b0ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0e8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B0F0u;
    // 0x21b0f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21b0f4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21b0f8: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x21b0fc: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b100: 0x24a5c9d4  addiu       $a1, $a1, -0x362C
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953428));
    // 0x21b104: 0xc0c2bdc  jal         func_30AF70
    ctx->pc = 0x21B104u;
    SET_GPR_U32(ctx, 31, 0x21B10Cu);
    ctx->pc = 0x21B108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B104u;
            // 0x21b108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B10Cu; }
        if (ctx->pc != 0x21B10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistInit__FP9mgCMemoryPii_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B10Cu; }
        if (ctx->pc != 0x21B10Cu) { return; }
    }
    ctx->pc = 0x21B10Cu;
label_21b10c:
    // 0x21b10c: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x21B10Cu;
    {
        const bool branch_taken_0x21b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b10c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B114u;
label_21b114:
    // 0x21b114: 0xc0c2d3c  jal         func_30B4F0
    ctx->pc = 0x21B114u;
    SET_GPR_U32(ctx, 31, 0x21B11Cu);
    ctx->pc = 0x30B4F0u;
    if (runtime->hasFunction(0x30B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B11Cu; }
        if (ctx->pc != 0x21B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistKey__Fv_0x30b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B11Cu; }
        if (ctx->pc != 0x21B11Cu) { return; }
    }
    ctx->pc = 0x21B11Cu;
label_21b11c:
    // 0x21b11c: 0x10400219  beqz        $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x21B11Cu;
    {
        const bool branch_taken_0x21b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b11c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B124u;
    // 0x21b124: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b128: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b12c: 0xaf809318  sw          $zero, -0x6CE8($gp)
    ctx->pc = 0x21b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939416), GPR_U32(ctx, 0));
    // 0x21b130: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x21B130u;
    SET_GPR_U32(ctx, 31, 0x21B138u);
    ctx->pc = 0x21B134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B130u;
            // 0x21b134: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B138u; }
        if (ctx->pc != 0x21B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B138u; }
        if (ctx->pc != 0x21B138u) { return; }
    }
    ctx->pc = 0x21B138u;
label_21b138:
    // 0x21b138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b13c: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21B13Cu;
    SET_GPR_U32(ctx, 31, 0x21B144u);
    ctx->pc = 0x21B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B13Cu;
            // 0x21b140: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A4D0u;
    if (runtime->hasFunction(0x21A4D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B144u; }
        if (ctx->pc != 0x21B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoracerListUpdate__Fv_0x21a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B144u; }
        if (ctx->pc != 0x21B144u) { return; }
    }
    ctx->pc = 0x21B144u;
label_21b144:
    // 0x21b144: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0xc086a84  jal         func_21AA10
    ctx->pc = 0x21B14Cu;
    SET_GPR_U32(ctx, 31, 0x21B154u);
    ctx->pc = 0x21AA10u;
    if (runtime->hasFunction(0x21AA10u)) {
        auto targetFn = runtime->lookupFunction(0x21AA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B154u; }
        if (ctx->pc != 0x21B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OmakeGyoraceSelect__Fi_0x21aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B154u; }
        if (ctx->pc != 0x21B154u) { return; }
    }
    ctx->pc = 0x21B154u;
label_21b154:
    // 0x21b154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b158: 0x278592b8  addiu       $a1, $gp, -0x6D48
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939320));
    // 0x21b15c: 0x278692bc  addiu       $a2, $gp, -0x6D44
    ctx->pc = 0x21b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939324));
    // 0x21b160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b164: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21b168: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21b16c: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x21B16Cu;
    SET_GPR_U32(ctx, 31, 0x21B174u);
    ctx->pc = 0x21B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B16Cu;
            // 0x21b170: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B174u; }
        if (ctx->pc != 0x21B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B174u; }
        if (ctx->pc != 0x21B174u) { return; }
    }
    ctx->pc = 0x21B174u;
label_21b174:
    // 0x21b174: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B174u;
    {
        const bool branch_taken_0x21b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B174u;
            // 0x21b178: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b174) {
            ctx->pc = 0x21B1A8u;
            goto label_21b1a8;
        }
    }
    ctx->pc = 0x21B17Cu;
    // 0x21b17c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B17Cu;
    SET_GPR_U32(ctx, 31, 0x21B184u);
    ctx->pc = 0x21B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B17Cu;
            // 0x21b180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B184u; }
        if (ctx->pc != 0x21B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B184u; }
        if (ctx->pc != 0x21B184u) { return; }
    }
    ctx->pc = 0x21B184u;
label_21b184:
    // 0x21b184: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x21b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21b188: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B188u;
    {
        const bool branch_taken_0x21b188 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B188u;
            // 0x21b18c: 0x2c2082a  slt         $at, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b188) {
            ctx->pc = 0x21B1A4u;
            goto label_21b1a4;
        }
    }
    ctx->pc = 0x21B190u;
    // 0x21b190: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B190u;
    {
        const bool branch_taken_0x21b190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B190u;
            // 0x21b194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b190) {
            ctx->pc = 0x21B19Cu;
            goto label_21b19c;
        }
    }
    ctx->pc = 0x21B198u;
    // 0x21b198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b19c:
    // 0x21b19c: 0xa78292f0  sh          $v0, -0x6D10($gp)
    ctx->pc = 0x21b19cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939376), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b1a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b1a4:
    // 0x21b1a4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x21b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_21b1a8:
    // 0x21b1a8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x21B1A8u;
    {
        const bool branch_taken_0x21b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1A8u;
            // 0x21b1ac: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1a8) {
            ctx->pc = 0x21B28Cu;
            goto label_21b28c;
        }
    }
    ctx->pc = 0x21B1B0u;
    // 0x21b1b0: 0x8f8592b8  lw          $a1, -0x6D48($gp)
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b1b4: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21B1B4u;
    SET_GPR_U32(ctx, 31, 0x21B1BCu);
    ctx->pc = 0x21B1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1B4u;
            // 0x21b1b8: 0x8f849290  lw          $a0, -0x6D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1BCu; }
        if (ctx->pc != 0x21B1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1BCu; }
        if (ctx->pc != 0x21B1BCu) { return; }
    }
    ctx->pc = 0x21B1BCu;
label_21b1bc:
    // 0x21b1bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21b1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1c0: 0xc0868c8  jal         func_21A320
    ctx->pc = 0x21B1C0u;
    SET_GPR_U32(ctx, 31, 0x21B1C8u);
    ctx->pc = 0x21B1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1C0u;
            // 0x21b1c4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A320u;
    if (runtime->hasFunction(0x21A320u)) {
        auto targetFn = runtime->lookupFunction(0x21A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1C8u; }
        if (ctx->pc != 0x21B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchOmakeGyoracer__Fi_0x21a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1C8u; }
        if (ctx->pc != 0x21B1C8u) { return; }
    }
    ctx->pc = 0x21B1C8u;
label_21b1c8:
    // 0x21b1c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B1C8u;
    {
        const bool branch_taken_0x21b1c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1C8u;
            // 0x21b1cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1c8) {
            ctx->pc = 0x21B1D8u;
            goto label_21b1d8;
        }
    }
    ctx->pc = 0x21B1D0u;
    // 0x21b1d0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B1D0u;
    {
        const bool branch_taken_0x21b1d0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x21B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1D0u;
            // 0x21b1d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1d0) {
            ctx->pc = 0x21B1E8u;
            goto label_21b1e8;
        }
    }
    ctx->pc = 0x21B1D8u;
label_21b1d8:
    // 0x21b1d8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B1D8u;
    SET_GPR_U32(ctx, 31, 0x21B1E0u);
    ctx->pc = 0x21B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1D8u;
            // 0x21b1dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1E0u; }
        if (ctx->pc != 0x21B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1E0u; }
        if (ctx->pc != 0x21B1E0u) { return; }
    }
    ctx->pc = 0x21B1E0u;
label_21b1e0:
    // 0x21b1e0: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x21B1E0u;
    {
        const bool branch_taken_0x21b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1e0) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B1E8u;
label_21b1e8:
    // 0x21b1e8: 0xc0bdbfc  jal         func_2F6FF0
    ctx->pc = 0x21B1E8u;
    SET_GPR_U32(ctx, 31, 0x21B1F0u);
    ctx->pc = 0x2F6FF0u;
    if (runtime->hasFunction(0x2F6FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1F0u; }
        if (ctx->pc != 0x21B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsUsed__12GYORACE_DATAFv_0x2f6ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1F0u; }
        if (ctx->pc != 0x21B1F0u) { return; }
    }
    ctx->pc = 0x21B1F0u;
label_21b1f0:
    // 0x21b1f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B1F0u;
    {
        const bool branch_taken_0x21b1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1F0u;
            // 0x21b1f4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1f0) {
            ctx->pc = 0x21B210u;
            goto label_21b210;
        }
    }
    ctx->pc = 0x21B1F8u;
    // 0x21b1f8: 0xc0868e4  jal         func_21A390
    ctx->pc = 0x21B1F8u;
    SET_GPR_U32(ctx, 31, 0x21B200u);
    ctx->pc = 0x21B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1F8u;
            // 0x21b1fc: 0x8f8492b8  lw          $a0, -0x6D48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A390u;
    if (runtime->hasFunction(0x21A390u)) {
        auto targetFn = runtime->lookupFunction(0x21A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B200u; }
        if (ctx->pc != 0x21B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSameRacerFish__Fi_0x21a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B200u; }
        if (ctx->pc != 0x21B200u) { return; }
    }
    ctx->pc = 0x21B200u;
label_21b200:
    // 0x21b200: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x21b200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21b204: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B204u;
    {
        const bool branch_taken_0x21b204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b204) {
            ctx->pc = 0x21B220u;
            goto label_21b220;
        }
    }
    ctx->pc = 0x21B20Cu;
    // 0x21b20c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21b210:
    // 0x21b210: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B210u;
    SET_GPR_U32(ctx, 31, 0x21B218u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B218u; }
        if (ctx->pc != 0x21B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B218u; }
        if (ctx->pc != 0x21B218u) { return; }
    }
    ctx->pc = 0x21B218u;
label_21b218:
    // 0x21b218: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x21B218u;
    {
        const bool branch_taken_0x21b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b218) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B220u;
label_21b220:
    // 0x21b220: 0x878392b8  lh          $v1, -0x6D48($gp)
    ctx->pc = 0x21b220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b224: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21b228: 0xa3949320  sb          $s4, -0x6CE0($gp)
    ctx->pc = 0x21b228u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939424), (uint8_t)GPR_U32(ctx, 20));
    // 0x21b22c: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x21b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x21b230: 0x14a040  sll         $s4, $s4, 1
    ctx->pc = 0x21b230u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x21b234: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b238: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21B238u;
    SET_GPR_U32(ctx, 31, 0x21B240u);
    ctx->pc = 0x21B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B238u;
            // 0x21b23c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A4D0u;
    if (runtime->hasFunction(0x21A4D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B240u; }
        if (ctx->pc != 0x21B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoracerListUpdate__Fv_0x21a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B240u; }
        if (ctx->pc != 0x21B240u) { return; }
    }
    ctx->pc = 0x21B240u;
label_21b240:
    // 0x21b240: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21b244: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21b248: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x21b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x21b24c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b250: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b254: 0x2484a420  addiu       $a0, $a0, -0x5BE0
    ctx->pc = 0x21b254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943776));
    // 0x21b258: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x21b258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x21b25c: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21B25Cu;
    SET_GPR_U32(ctx, 31, 0x21B264u);
    ctx->pc = 0x21B260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B25Cu;
            // 0x21b260: 0xa39292b4  sb          $s2, -0x6D4C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B264u; }
        if (ctx->pc != 0x21B264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B264u; }
        if (ctx->pc != 0x21B264u) { return; }
    }
    ctx->pc = 0x21B264u;
label_21b264:
    // 0x21b264: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x21b264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x21b268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b26c: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x21b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x21b270: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x21B270u;
    SET_GPR_U32(ctx, 31, 0x21B278u);
    ctx->pc = 0x21B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B270u;
            // 0x21b274: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B278u; }
        if (ctx->pc != 0x21B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B278u; }
        if (ctx->pc != 0x21B278u) { return; }
    }
    ctx->pc = 0x21B278u;
label_21b278:
    // 0x21b278: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x21b278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b27c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b280: 0xae231b14  sw          $v1, 0x1B14($s1)
    ctx->pc = 0x21b280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6932), GPR_U32(ctx, 3));
    // 0x21b284: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x21B284u;
    {
        const bool branch_taken_0x21b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B284u;
            // 0x21b288: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b284) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B28Cu;
label_21b28c:
    // 0x21b28c: 0x104001bd  beqz        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x21B28Cu;
    {
        const bool branch_taken_0x21b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B28Cu;
            // 0x21b290: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b28c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B294u;
    // 0x21b294: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B294u;
    SET_GPR_U32(ctx, 31, 0x21B29Cu);
    ctx->pc = 0x21B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B294u;
            // 0x21b298: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B29Cu; }
        if (ctx->pc != 0x21B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B29Cu; }
        if (ctx->pc != 0x21B29Cu) { return; }
    }
    ctx->pc = 0x21B29Cu;
label_21b29c:
    // 0x21b29c: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x21B29Cu;
    {
        const bool branch_taken_0x21b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b29c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B2A4u;
label_21b2a4:
    // 0x21b2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2a8: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x21B2A8u;
    SET_GPR_U32(ctx, 31, 0x21B2B0u);
    ctx->pc = 0x21B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2A8u;
            // 0x21b2ac: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2B0u; }
        if (ctx->pc != 0x21B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2B0u; }
        if (ctx->pc != 0x21B2B0u) { return; }
    }
    ctx->pc = 0x21B2B0u;
label_21b2b0:
    // 0x21b2b0: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x21b2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x21b2b4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B2B4u;
    {
        const bool branch_taken_0x21b2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b2b4) {
            ctx->pc = 0x21B324u;
            goto label_21b324;
        }
    }
    ctx->pc = 0x21B2BCu;
    // 0x21b2bc: 0x83839320  lb          $v1, -0x6CE0($gp)
    ctx->pc = 0x21b2bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939424)));
    // 0x21b2c0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x21b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21b2c4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21b2c8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21b2cc: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x21b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x21b2d0: 0x2484a430  addiu       $a0, $a0, -0x5BD0
    ctx->pc = 0x21b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943792));
    // 0x21b2d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x21b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21b2d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b2dc: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21B2DCu;
    SET_GPR_U32(ctx, 31, 0x21B2E4u);
    ctx->pc = 0x21B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2DCu;
            // 0x21b2e0: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2E4u; }
        if (ctx->pc != 0x21B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2E4u; }
        if (ctx->pc != 0x21B2E4u) { return; }
    }
    ctx->pc = 0x21B2E4u;
label_21b2e4:
    // 0x21b2e4: 0x83849320  lb          $a0, -0x6CE0($gp)
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939424)));
    // 0x21b2e8: 0xc0868f8  jal         func_21A3E0
    ctx->pc = 0x21B2E8u;
    SET_GPR_U32(ctx, 31, 0x21B2F0u);
    ctx->pc = 0x21B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2E8u;
            // 0x21b2ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A3E0u;
    if (runtime->hasFunction(0x21A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x21A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2F0u; }
        if (ctx->pc != 0x21B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOmakeGyoracer2__Fi_0x21a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2F0u; }
        if (ctx->pc != 0x21B2F0u) { return; }
    }
    ctx->pc = 0x21B2F0u;
label_21b2f0:
    // 0x21b2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2F0u;
    {
        const bool branch_taken_0x21b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2F0u;
            // 0x21b2f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f0) {
            ctx->pc = 0x21B304u;
            goto label_21b304;
        }
    }
    ctx->pc = 0x21B2F8u;
    // 0x21b2f8: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21B2F8u;
    SET_GPR_U32(ctx, 31, 0x21B300u);
    ctx->pc = 0x21B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2F8u;
            // 0x21b2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B300u; }
        if (ctx->pc != 0x21B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B300u; }
        if (ctx->pc != 0x21B300u) { return; }
    }
    ctx->pc = 0x21B300u;
label_21b300:
    // 0x21b300: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b304:
    // 0x21b304: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B304u;
    {
        const bool branch_taken_0x21b304 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B304u;
            // 0x21b308: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b304) {
            ctx->pc = 0x21B31Cu;
            goto label_21b31c;
        }
    }
    ctx->pc = 0x21B30Cu;
    // 0x21b30c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21b30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b310: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21B310u;
    SET_GPR_U32(ctx, 31, 0x21B318u);
    ctx->pc = 0x21B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B310u;
            // 0x21b314: 0x26241801  addiu       $a0, $s1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B318u; }
        if (ctx->pc != 0x21B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B318u; }
        if (ctx->pc != 0x21B318u) { return; }
    }
    ctx->pc = 0x21B318u;
label_21b318:
    // 0x21b318: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21b31c:
    // 0x21b31c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x21B31Cu;
    {
        const bool branch_taken_0x21b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B31Cu;
            // 0x21b320: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b31c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B324u;
label_21b324:
    // 0x21b324: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x21b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x21b328: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x21B328u;
    {
        const bool branch_taken_0x21b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B328u;
            // 0x21b32c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b328) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B330u;
    // 0x21b330: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B330u;
    SET_GPR_U32(ctx, 31, 0x21B338u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B338u; }
        if (ctx->pc != 0x21B338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B338u; }
        if (ctx->pc != 0x21B338u) { return; }
    }
    ctx->pc = 0x21B338u;
label_21b338:
    // 0x21b338: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21b33c: 0xa38092b4  sb          $zero, -0x6D4C($gp)
    ctx->pc = 0x21b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b340: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x21B340u;
    {
        const bool branch_taken_0x21b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B340u;
            // 0x21b344: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b340) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B348u;
label_21b348:
    // 0x21b348: 0x1280018e  beqz        $s4, . + 4 + (0x18E << 2)
    ctx->pc = 0x21B348u;
    {
        const bool branch_taken_0x21b348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B348u;
            // 0x21b34c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b348) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B350u;
    // 0x21b350: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B350u;
    SET_GPR_U32(ctx, 31, 0x21B358u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B358u; }
        if (ctx->pc != 0x21B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B358u; }
        if (ctx->pc != 0x21B358u) { return; }
    }
    ctx->pc = 0x21B358u;
label_21b358:
    // 0x21b358: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21b35c: 0xa38092b4  sb          $zero, -0x6D4C($gp)
    ctx->pc = 0x21b35cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b360: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x21B360u;
    {
        const bool branch_taken_0x21b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B360u;
            // 0x21b364: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b360) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B368u;
label_21b368:
    // 0x21b368: 0xc086a84  jal         func_21AA10
    ctx->pc = 0x21B368u;
    SET_GPR_U32(ctx, 31, 0x21B370u);
    ctx->pc = 0x21AA10u;
    if (runtime->hasFunction(0x21AA10u)) {
        auto targetFn = runtime->lookupFunction(0x21AA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B370u; }
        if (ctx->pc != 0x21B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OmakeGyoraceSelect__Fi_0x21aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B370u; }
        if (ctx->pc != 0x21B370u) { return; }
    }
    ctx->pc = 0x21B370u;
label_21b370:
    // 0x21b370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b374: 0x278592b8  addiu       $a1, $gp, -0x6D48
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939320));
    // 0x21b378: 0x278692bc  addiu       $a2, $gp, -0x6D44
    ctx->pc = 0x21b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939324));
    // 0x21b37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b380: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x21b380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21b384: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21b388: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x21B388u;
    SET_GPR_U32(ctx, 31, 0x21B390u);
    ctx->pc = 0x21B38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B388u;
            // 0x21b38c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B390u; }
        if (ctx->pc != 0x21B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B390u; }
        if (ctx->pc != 0x21B390u) { return; }
    }
    ctx->pc = 0x21B390u;
label_21b390:
    // 0x21b390: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B390u;
    {
        const bool branch_taken_0x21b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B390u;
            // 0x21b394: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b390) {
            ctx->pc = 0x21B3C4u;
            goto label_21b3c4;
        }
    }
    ctx->pc = 0x21B398u;
    // 0x21b398: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B398u;
    SET_GPR_U32(ctx, 31, 0x21B3A0u);
    ctx->pc = 0x21B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B398u;
            // 0x21b39c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3A0u; }
        if (ctx->pc != 0x21B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3A0u; }
        if (ctx->pc != 0x21B3A0u) { return; }
    }
    ctx->pc = 0x21B3A0u;
label_21b3a0:
    // 0x21b3a0: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x21b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21b3a4: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B3A4u;
    {
        const bool branch_taken_0x21b3a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3A4u;
            // 0x21b3a8: 0x2c2082a  slt         $at, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3a4) {
            ctx->pc = 0x21B3C0u;
            goto label_21b3c0;
        }
    }
    ctx->pc = 0x21B3ACu;
    // 0x21b3ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B3ACu;
    {
        const bool branch_taken_0x21b3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3ACu;
            // 0x21b3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3ac) {
            ctx->pc = 0x21B3B8u;
            goto label_21b3b8;
        }
    }
    ctx->pc = 0x21B3B4u;
    // 0x21b3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b3b8:
    // 0x21b3b8: 0xa78292f0  sh          $v0, -0x6D10($gp)
    ctx->pc = 0x21b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939376), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b3bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b3c0:
    // 0x21b3c0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x21b3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_21b3c4:
    // 0x21b3c4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21B3C4u;
    {
        const bool branch_taken_0x21b3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3C4u;
            // 0x21b3c8: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3c4) {
            ctx->pc = 0x21B490u;
            goto label_21b490;
        }
    }
    ctx->pc = 0x21B3CCu;
    // 0x21b3cc: 0x8f8592b8  lw          $a1, -0x6D48($gp)
    ctx->pc = 0x21b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b3d0: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21B3D0u;
    SET_GPR_U32(ctx, 31, 0x21B3D8u);
    ctx->pc = 0x21B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3D0u;
            // 0x21b3d4: 0x8f849290  lw          $a0, -0x6D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3D8u; }
        if (ctx->pc != 0x21B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3D8u; }
        if (ctx->pc != 0x21B3D8u) { return; }
    }
    ctx->pc = 0x21B3D8u;
label_21b3d8:
    // 0x21b3d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b3d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3dc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B3DCu;
    {
        const bool branch_taken_0x21b3dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3DCu;
            // 0x21b3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3dc) {
            ctx->pc = 0x21B3F4u;
            goto label_21b3f4;
        }
    }
    ctx->pc = 0x21B3E4u;
    // 0x21b3e4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B3E4u;
    SET_GPR_U32(ctx, 31, 0x21B3ECu);
    ctx->pc = 0x21B3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3E4u;
            // 0x21b3e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3ECu; }
        if (ctx->pc != 0x21B3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3ECu; }
        if (ctx->pc != 0x21B3ECu) { return; }
    }
    ctx->pc = 0x21B3ECu;
label_21b3ec:
    // 0x21b3ec: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x21B3ECu;
    {
        const bool branch_taken_0x21b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b3ec) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B3F4u;
label_21b3f4:
    // 0x21b3f4: 0xc0bdbfc  jal         func_2F6FF0
    ctx->pc = 0x21B3F4u;
    SET_GPR_U32(ctx, 31, 0x21B3FCu);
    ctx->pc = 0x2F6FF0u;
    if (runtime->hasFunction(0x2F6FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3FCu; }
        if (ctx->pc != 0x21B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsUsed__12GYORACE_DATAFv_0x2f6ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B3FCu; }
        if (ctx->pc != 0x21B3FCu) { return; }
    }
    ctx->pc = 0x21B3FCu;
label_21b3fc:
    // 0x21b3fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B3FCu;
    {
        const bool branch_taken_0x21b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B3FCu;
            // 0x21b400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3fc) {
            ctx->pc = 0x21B414u;
            goto label_21b414;
        }
    }
    ctx->pc = 0x21B404u;
    // 0x21b404: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B404u;
    SET_GPR_U32(ctx, 31, 0x21B40Cu);
    ctx->pc = 0x21B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B404u;
            // 0x21b408: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B40Cu; }
        if (ctx->pc != 0x21B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B40Cu; }
        if (ctx->pc != 0x21B40Cu) { return; }
    }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x21B40Cu;
    {
        const bool branch_taken_0x21b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b40c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B414u;
label_21b414:
    // 0x21b414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b418: 0xa38292d0  sb          $v0, -0x6D30($gp)
    ctx->pc = 0x21b418u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 2));
    // 0x21b41c: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21B41Cu;
    SET_GPR_U32(ctx, 31, 0x21B424u);
    ctx->pc = 0x21B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B41Cu;
            // 0x21b420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B424u; }
        if (ctx->pc != 0x21B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B424u; }
        if (ctx->pc != 0x21B424u) { return; }
    }
    ctx->pc = 0x21B424u;
label_21b424:
    // 0x21b424: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b428: 0xc0868e4  jal         func_21A390
    ctx->pc = 0x21B428u;
    SET_GPR_U32(ctx, 31, 0x21B430u);
    ctx->pc = 0x21B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B428u;
            // 0x21b42c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A390u;
    if (runtime->hasFunction(0x21A390u)) {
        auto targetFn = runtime->lookupFunction(0x21A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B430u; }
        if (ctx->pc != 0x21B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSameRacerFish__Fi_0x21a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B430u; }
        if (ctx->pc != 0x21B430u) { return; }
    }
    ctx->pc = 0x21B430u;
label_21b430:
    // 0x21b430: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x21b430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21b434: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x21B434u;
    {
        const bool branch_taken_0x21b434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B434u;
            // 0x21b438: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b434) {
            ctx->pc = 0x21B468u;
            goto label_21b468;
        }
    }
    ctx->pc = 0x21B43Cu;
    // 0x21b43c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x21b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x21b440: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21b440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21b444: 0x2484a440  addiu       $a0, $a0, -0x5BC0
    ctx->pc = 0x21b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943808));
    // 0x21b448: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21B448u;
    SET_GPR_U32(ctx, 31, 0x21B450u);
    ctx->pc = 0x21B44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B448u;
            // 0x21b44c: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B450u; }
        if (ctx->pc != 0x21B450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B450u; }
        if (ctx->pc != 0x21B450u) { return; }
    }
    ctx->pc = 0x21B450u;
label_21b450:
    // 0x21b450: 0x1280014c  beqz        $s4, . + 4 + (0x14C << 2)
    ctx->pc = 0x21B450u;
    {
        const bool branch_taken_0x21b450 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B450u;
            // 0x21b454: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b450) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B458u;
    // 0x21b458: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21B458u;
    SET_GPR_U32(ctx, 31, 0x21B460u);
    ctx->pc = 0x21B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B458u;
            // 0x21b45c: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B460u; }
        if (ctx->pc != 0x21B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B460u; }
        if (ctx->pc != 0x21B460u) { return; }
    }
    ctx->pc = 0x21B460u;
label_21b460:
    // 0x21b460: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x21B460u;
    {
        const bool branch_taken_0x21b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b460) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B468u;
label_21b468:
    // 0x21b468: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21b468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21b46c: 0x2484a450  addiu       $a0, $a0, -0x5BB0
    ctx->pc = 0x21b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943824));
    // 0x21b470: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21B470u;
    SET_GPR_U32(ctx, 31, 0x21B478u);
    ctx->pc = 0x21B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B470u;
            // 0x21b474: 0xa78292c8  sh          $v0, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B478u; }
        if (ctx->pc != 0x21B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B478u; }
        if (ctx->pc != 0x21B478u) { return; }
    }
    ctx->pc = 0x21B478u;
label_21b478:
    // 0x21b478: 0x12800142  beqz        $s4, . + 4 + (0x142 << 2)
    ctx->pc = 0x21B478u;
    {
        const bool branch_taken_0x21b478 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B478u;
            // 0x21b47c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b478) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B480u;
    // 0x21b480: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21B480u;
    SET_GPR_U32(ctx, 31, 0x21B488u);
    ctx->pc = 0x21B484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B480u;
            // 0x21b484: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B488u; }
        if (ctx->pc != 0x21B488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B488u; }
        if (ctx->pc != 0x21B488u) { return; }
    }
    ctx->pc = 0x21B488u;
label_21b488:
    // 0x21b488: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x21B488u;
    {
        const bool branch_taken_0x21b488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b488) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B490u;
label_21b490:
    // 0x21b490: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x21B490u;
    {
        const bool branch_taken_0x21b490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B490u;
            // 0x21b494: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b490) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B498u;
    // 0x21b498: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B498u;
    SET_GPR_U32(ctx, 31, 0x21B4A0u);
    ctx->pc = 0x21B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B498u;
            // 0x21b49c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4A0u; }
        if (ctx->pc != 0x21B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4A0u; }
        if (ctx->pc != 0x21B4A0u) { return; }
    }
    ctx->pc = 0x21B4A0u;
label_21b4a0:
    // 0x21b4a0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x21B4A0u;
    {
        const bool branch_taken_0x21b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4a0) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B4A8u;
label_21b4a8:
    // 0x21b4a8: 0xc087654  jal         func_21D950
    ctx->pc = 0x21B4A8u;
    SET_GPR_U32(ctx, 31, 0x21B4B0u);
    ctx->pc = 0x21B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4A8u;
            // 0x21b4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4B0u; }
        if (ctx->pc != 0x21B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4B0u; }
        if (ctx->pc != 0x21B4B0u) { return; }
    }
    ctx->pc = 0x21B4B0u;
label_21b4b0:
    // 0x21b4b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b4b8: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21B4B8u;
    {
        const bool branch_taken_0x21b4b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4B8u;
            // 0x21b4bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4b8) {
            ctx->pc = 0x21B4F8u;
            goto label_21b4f8;
        }
    }
    ctx->pc = 0x21B4C0u;
    // 0x21b4c0: 0x8f8592b8  lw          $a1, -0x6D48($gp)
    ctx->pc = 0x21b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b4c4: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21B4C4u;
    SET_GPR_U32(ctx, 31, 0x21B4CCu);
    ctx->pc = 0x21B4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4C4u;
            // 0x21b4c8: 0x8f849290  lw          $a0, -0x6D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4CCu; }
        if (ctx->pc != 0x21B4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4CCu; }
        if (ctx->pc != 0x21B4CCu) { return; }
    }
    ctx->pc = 0x21B4CCu;
label_21b4cc:
    // 0x21b4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B4CCu;
    {
        const bool branch_taken_0x21b4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4CCu;
            // 0x21b4d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4cc) {
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B4D4u;
    // 0x21b4d4: 0xc0bdc00  jal         func_2F7000
    ctx->pc = 0x21B4D4u;
    SET_GPR_U32(ctx, 31, 0x21B4DCu);
    ctx->pc = 0x21B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4D4u;
            // 0x21b4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7000u;
    if (runtime->hasFunction(0x2F7000u)) {
        auto targetFn = runtime->lookupFunction(0x2F7000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4DCu; }
        if (ctx->pc != 0x21B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__12GYORACE_DATAFv_0x2f7000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4DCu; }
        if (ctx->pc != 0x21B4DCu) { return; }
    }
    ctx->pc = 0x21B4DCu;
label_21b4dc:
    // 0x21b4dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b4e0:
    // 0x21b4e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4e8: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b4ec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B4ECu;
    SET_GPR_U32(ctx, 31, 0x21B4F4u);
    ctx->pc = 0x21B4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4ECu;
            // 0x21b4f0: 0xa38092d0  sb          $zero, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4F4u; }
        if (ctx->pc != 0x21B4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4F4u; }
        if (ctx->pc != 0x21B4F4u) { return; }
    }
    ctx->pc = 0x21B4F4u;
label_21b4f4:
    // 0x21b4f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b4f8:
    // 0x21b4f8: 0x16820122  bne         $s4, $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x21B4F8u;
    {
        const bool branch_taken_0x21b4f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4F8u;
            // 0x21b4fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4f8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B500u;
    // 0x21b500: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21b500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b504: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b504u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b508: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B508u;
    SET_GPR_U32(ctx, 31, 0x21B510u);
    ctx->pc = 0x21B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B508u;
            // 0x21b50c: 0xa38092d0  sb          $zero, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B510u; }
        if (ctx->pc != 0x21B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B510u; }
        if (ctx->pc != 0x21B510u) { return; }
    }
    ctx->pc = 0x21B510u;
label_21b510:
    // 0x21b510: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x21B510u;
    {
        const bool branch_taken_0x21b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b510) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B518u;
label_21b518:
    // 0x21b518: 0x1280011a  beqz        $s4, . + 4 + (0x11A << 2)
    ctx->pc = 0x21B518u;
    {
        const bool branch_taken_0x21b518 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B518u;
            // 0x21b51c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b518) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B520u;
    // 0x21b520: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21b520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b524: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b524u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b528: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B528u;
    SET_GPR_U32(ctx, 31, 0x21B530u);
    ctx->pc = 0x21B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B528u;
            // 0x21b52c: 0xa38092d0  sb          $zero, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B530u; }
        if (ctx->pc != 0x21B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B530u; }
        if (ctx->pc != 0x21B530u) { return; }
    }
    ctx->pc = 0x21B530u;
label_21b530:
    // 0x21b530: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x21B530u;
    {
        const bool branch_taken_0x21b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b530) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B538u;
label_21b538:
    // 0x21b538: 0xc087654  jal         func_21D950
    ctx->pc = 0x21B538u;
    SET_GPR_U32(ctx, 31, 0x21B540u);
    ctx->pc = 0x21B53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B538u;
            // 0x21b53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B540u; }
        if (ctx->pc != 0x21B540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B540u; }
        if (ctx->pc != 0x21B540u) { return; }
    }
    ctx->pc = 0x21B540u;
label_21b540:
    // 0x21b540: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b548: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B548u;
    {
        const bool branch_taken_0x21b548 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B548u;
            // 0x21b54c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b548) {
            ctx->pc = 0x21B56Cu;
            goto label_21b56c;
        }
    }
    ctx->pc = 0x21B550u;
    // 0x21b550: 0xc086974  jal         func_21A5D0
    ctx->pc = 0x21B550u;
    SET_GPR_U32(ctx, 31, 0x21B558u);
    ctx->pc = 0x21A5D0u;
    if (runtime->hasFunction(0x21A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B558u; }
        if (ctx->pc != 0x21B558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceSubGameInitData__Fv_0x21a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B558u; }
        if (ctx->pc != 0x21B558u) { return; }
    }
    ctx->pc = 0x21B558u;
label_21b558:
    // 0x21b558: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21B558u;
    SET_GPR_U32(ctx, 31, 0x21B560u);
    ctx->pc = 0x21A4D0u;
    if (runtime->hasFunction(0x21A4D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B560u; }
        if (ctx->pc != 0x21B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoracerListUpdate__Fv_0x21a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B560u; }
        if (ctx->pc != 0x21B560u) { return; }
    }
    ctx->pc = 0x21B560u;
label_21b560:
    // 0x21b560: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B560u;
    SET_GPR_U32(ctx, 31, 0x21B568u);
    ctx->pc = 0x21B564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B560u;
            // 0x21b564: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B568u; }
        if (ctx->pc != 0x21B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B568u; }
        if (ctx->pc != 0x21B568u) { return; }
    }
    ctx->pc = 0x21B568u;
label_21b568:
    // 0x21b568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b56c:
    // 0x21b56c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B56Cu;
    {
        const bool branch_taken_0x21b56c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B56Cu;
            // 0x21b570: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b56c) {
            ctx->pc = 0x21B580u;
            goto label_21b580;
        }
    }
    ctx->pc = 0x21B574u;
    // 0x21b574: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B574u;
    SET_GPR_U32(ctx, 31, 0x21B57Cu);
    ctx->pc = 0x21B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B574u;
            // 0x21b578: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B57Cu; }
        if (ctx->pc != 0x21B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B57Cu; }
        if (ctx->pc != 0x21B57Cu) { return; }
    }
    ctx->pc = 0x21B57Cu;
label_21b57c:
    // 0x21b57c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x21b57cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_21b580:
    // 0x21b580: 0x10200100  beqz        $at, . + 4 + (0x100 << 2)
    ctx->pc = 0x21B580u;
    {
        const bool branch_taken_0x21b580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b580) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B588u;
    // 0x21b588: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x21B588u;
    {
        const bool branch_taken_0x21b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B588u;
            // 0x21b58c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b588) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B590u;
label_21b590:
    // 0x21b590: 0x128000fc  beqz        $s4, . + 4 + (0xFC << 2)
    ctx->pc = 0x21B590u;
    {
        const bool branch_taken_0x21b590 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b590) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B598u;
    // 0x21b598: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b59c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B59Cu;
    SET_GPR_U32(ctx, 31, 0x21B5A4u);
    ctx->pc = 0x21B5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B59Cu;
            // 0x21b5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5A4u; }
        if (ctx->pc != 0x21B5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5A4u; }
        if (ctx->pc != 0x21B5A4u) { return; }
    }
    ctx->pc = 0x21B5A4u;
label_21b5a4:
    // 0x21b5a4: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x21B5A4u;
    {
        const bool branch_taken_0x21b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5a4) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B5ACu;
label_21b5ac:
    // 0x21b5ac: 0xc087690  jal         func_21DA40
    ctx->pc = 0x21B5ACu;
    SET_GPR_U32(ctx, 31, 0x21B5B4u);
    ctx->pc = 0x21B5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5ACu;
            // 0x21b5b0: 0x8f8492a4  lw          $a0, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5B4u; }
        if (ctx->pc != 0x21B5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5B4u; }
        if (ctx->pc != 0x21B5B4u) { return; }
    }
    ctx->pc = 0x21B5B4u;
label_21b5b4:
    // 0x21b5b4: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21b5b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x21b5b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5c0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b5c4: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x21B5C4u;
    SET_GPR_U32(ctx, 31, 0x21B5CCu);
    ctx->pc = 0x21B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5C4u;
            // 0x21b5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5CCu; }
        if (ctx->pc != 0x21B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5CCu; }
        if (ctx->pc != 0x21B5CCu) { return; }
    }
    ctx->pc = 0x21B5CCu;
label_21b5cc:
    // 0x21b5cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21b5ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5d0: 0xc0868f8  jal         func_21A3E0
    ctx->pc = 0x21B5D0u;
    SET_GPR_U32(ctx, 31, 0x21B5D8u);
    ctx->pc = 0x21B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5D0u;
            // 0x21b5d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A3E0u;
    if (runtime->hasFunction(0x21A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x21A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5D8u; }
        if (ctx->pc != 0x21B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOmakeGyoracer2__Fi_0x21a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5D8u; }
        if (ctx->pc != 0x21B5D8u) { return; }
    }
    ctx->pc = 0x21B5D8u;
label_21b5d8:
    // 0x21b5d8: 0x12d50003  beq         $s6, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B5D8u;
    {
        const bool branch_taken_0x21b5d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 21));
        ctx->pc = 0x21B5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5D8u;
            // 0x21b5dc: 0xaf829294  sw          $v0, -0x6D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5d8) {
            ctx->pc = 0x21B5E8u;
            goto label_21b5e8;
        }
    }
    ctx->pc = 0x21B5E0u;
    // 0x21b5e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B5E0u;
    SET_GPR_U32(ctx, 31, 0x21B5E8u);
    ctx->pc = 0x21B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5E0u;
            // 0x21b5e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5E8u; }
        if (ctx->pc != 0x21B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5E8u; }
        if (ctx->pc != 0x21B5E8u) { return; }
    }
    ctx->pc = 0x21B5E8u;
label_21b5e8:
    // 0x21b5e8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x21b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x21b5ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B5ECu;
    {
        const bool branch_taken_0x21b5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5ECu;
            // 0x21b5f0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5ec) {
            ctx->pc = 0x21B5FCu;
            goto label_21b5fc;
        }
    }
    ctx->pc = 0x21B5F4u;
    // 0x21b5f4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B5F4u;
    SET_GPR_U32(ctx, 31, 0x21B5FCu);
    ctx->pc = 0x21B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5F4u;
            // 0x21b5f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5FCu; }
        if (ctx->pc != 0x21B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5FCu; }
        if (ctx->pc != 0x21B5FCu) { return; }
    }
    ctx->pc = 0x21B5FCu;
label_21b5fc:
    // 0x21b5fc: 0xc78082a0  lwc1        $f0, -0x7D60($gp)
    ctx->pc = 0x21b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b600: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x21b604: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21b604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21b608: 0x8f829294  lw          $v0, -0x6D6C($gp)
    ctx->pc = 0x21b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939284)));
    // 0x21b60c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B60Cu;
    {
        const bool branch_taken_0x21b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B60Cu;
            // 0x21b610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b60c) {
            ctx->pc = 0x21B630u;
            goto label_21b630;
        }
    }
    ctx->pc = 0x21B614u;
    // 0x21b614: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21b618: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x21b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x21b61c: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x21b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x21b620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b624: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x21b624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b628: 0x2442139c  addiu       $v0, $v0, 0x139C
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5020));
    // 0x21b62c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x21b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_21b630:
    // 0x21b630: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x21b630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x21b634: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x21B634u;
    SET_GPR_U32(ctx, 31, 0x21B63Cu);
    ctx->pc = 0x21B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B634u;
            // 0x21b638: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B63Cu; }
        if (ctx->pc != 0x21B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B63Cu; }
        if (ctx->pc != 0x21B63Cu) { return; }
    }
    ctx->pc = 0x21B63Cu;
label_21b63c:
    // 0x21b63c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x21B63Cu;
    {
        const bool branch_taken_0x21b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b63c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B644u;
label_21b644:
    // 0x21b644: 0xc087654  jal         func_21D950
    ctx->pc = 0x21B644u;
    SET_GPR_U32(ctx, 31, 0x21B64Cu);
    ctx->pc = 0x21B648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B644u;
            // 0x21b648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B64Cu; }
        if (ctx->pc != 0x21B64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B64Cu; }
        if (ctx->pc != 0x21B64Cu) { return; }
    }
    ctx->pc = 0x21B64Cu;
label_21b64c:
    // 0x21b64c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b654: 0x16820014  bne         $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B654u;
    {
        const bool branch_taken_0x21b654 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B654u;
            // 0x21b658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b654) {
            ctx->pc = 0x21B6A8u;
            goto label_21b6a8;
        }
    }
    ctx->pc = 0x21B65Cu;
    // 0x21b65c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21b660: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21b660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21b664: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b664u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21b668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21b66c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21b670: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21b674: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x21b674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x21b678: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21b678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21b67c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x21b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x21b680: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21b680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21b684: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x21b684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x21b688: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21b688u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x21b68c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b690: 0xa38092d0  sb          $zero, -0x6D30($gp)
    ctx->pc = 0x21b690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b694: 0xc05f610  jal         func_17D840
    ctx->pc = 0x21B694u;
    SET_GPR_U32(ctx, 31, 0x21B69Cu);
    ctx->pc = 0x21B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B694u;
            // 0x21b698: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B69Cu; }
        if (ctx->pc != 0x21B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B69Cu; }
        if (ctx->pc != 0x21B69Cu) { return; }
    }
    ctx->pc = 0x21B69Cu;
label_21b69c:
    // 0x21b69c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B69Cu;
    SET_GPR_U32(ctx, 31, 0x21B6A4u);
    ctx->pc = 0x21B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B69Cu;
            // 0x21b6a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6A4u; }
        if (ctx->pc != 0x21B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6A4u; }
        if (ctx->pc != 0x21B6A4u) { return; }
    }
    ctx->pc = 0x21B6A4u;
label_21b6a4:
    // 0x21b6a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b6a8:
    // 0x21b6a8: 0x168200b6  bne         $s4, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x21B6A8u;
    {
        const bool branch_taken_0x21b6a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6A8u;
            // 0x21b6ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B6B0u;
    // 0x21b6b0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B6B0u;
    SET_GPR_U32(ctx, 31, 0x21B6B8u);
    ctx->pc = 0x21B6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6B0u;
            // 0x21b6b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6B8u; }
        if (ctx->pc != 0x21B6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6B8u; }
        if (ctx->pc != 0x21B6B8u) { return; }
    }
    ctx->pc = 0x21B6B8u;
label_21b6b8:
    // 0x21b6b8: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x21B6B8u;
    {
        const bool branch_taken_0x21b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b6b8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B6C0u;
label_21b6c0:
    // 0x21b6c0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b6c4: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x21B6C4u;
    SET_GPR_U32(ctx, 31, 0x21B6CCu);
    ctx->pc = 0x21B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6C4u;
            // 0x21b6c8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6CCu; }
        if (ctx->pc != 0x21B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6CCu; }
        if (ctx->pc != 0x21B6CCu) { return; }
    }
    ctx->pc = 0x21B6CCu;
label_21b6cc:
    // 0x21b6cc: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x21B6CCu;
    {
        const bool branch_taken_0x21b6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6CCu;
            // 0x21b6d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6cc) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B6D4u;
    // 0x21b6d4: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x21B6D4u;
    {
        const bool branch_taken_0x21b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6D4u;
            // 0x21b6d8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6d4) {
            ctx->pc = 0x21BDA4u;
            goto label_21bda4;
        }
    }
    ctx->pc = 0x21B6DCu;
label_21b6dc:
    // 0x21b6dc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b6e0: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x21B6E0u;
    SET_GPR_U32(ctx, 31, 0x21B6E8u);
    ctx->pc = 0x21B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6E0u;
            // 0x21b6e4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6E8u; }
        if (ctx->pc != 0x21B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6E8u; }
        if (ctx->pc != 0x21B6E8u) { return; }
    }
    ctx->pc = 0x21B6E8u;
label_21b6e8:
    // 0x21b6e8: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x21B6E8u;
    {
        const bool branch_taken_0x21b6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6E8u;
            // 0x21b6ec: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6e8) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B6F0u;
    // 0x21b6f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21b6f4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21b6f8: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x21b6fc: 0xa78292c8  sh          $v0, -0x6D38($gp)
    ctx->pc = 0x21b6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 2));
    // 0x21b700: 0x24a5c9d4  addiu       $a1, $a1, -0x362C
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953428));
    // 0x21b704: 0xc0b1474  jal         func_2C51D0
    ctx->pc = 0x21B704u;
    SET_GPR_U32(ctx, 31, 0x21B70Cu);
    ctx->pc = 0x21B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B704u;
            // 0x21b708: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C51D0u;
    if (runtime->hasFunction(0x2C51D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C51D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B70Cu; }
        if (ctx->pc != 0x21B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveInit__FP9mgCMemoryPii_0x2c51d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B70Cu; }
        if (ctx->pc != 0x21B70Cu) { return; }
    }
    ctx->pc = 0x21B70Cu;
label_21b70c:
    // 0x21b70c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x21B70Cu;
    {
        const bool branch_taken_0x21b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b70c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B714u;
label_21b714:
    // 0x21b714: 0xc0b1618  jal         func_2C5860
    ctx->pc = 0x21B714u;
    SET_GPR_U32(ctx, 31, 0x21B71Cu);
    ctx->pc = 0x2C5860u;
    if (runtime->hasFunction(0x2C5860u)) {
        auto targetFn = runtime->lookupFunction(0x2C5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B71Cu; }
        if (ctx->pc != 0x21B71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveKey__Fv_0x2c5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B71Cu; }
        if (ctx->pc != 0x21B71Cu) { return; }
    }
    ctx->pc = 0x21B71Cu;
label_21b71c:
    // 0x21b71c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x21b71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b720: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x21B720u;
    {
        const bool branch_taken_0x21b720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B720u;
            // 0x21b724: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b720) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B728u;
    // 0x21b728: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21b72c: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x21b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
    // 0x21b730: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B730u;
    {
        const bool branch_taken_0x21b730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B730u;
            // 0x21b734: 0xa3809300  sb          $zero, -0x6D00($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b730) {
            ctx->pc = 0x21B740u;
            goto label_21b740;
        }
    }
    ctx->pc = 0x21B738u;
    // 0x21b738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b73c: 0xa3829300  sb          $v0, -0x6D00($gp)
    ctx->pc = 0x21b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939392), (uint8_t)GPR_U32(ctx, 2));
label_21b740:
    // 0x21b740: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b744: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x21b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b748: 0x2413003e  addiu       $s3, $zero, 0x3E
    ctx->pc = 0x21b748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x21b74c: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x21B74Cu;
    SET_GPR_U32(ctx, 31, 0x21B754u);
    ctx->pc = 0x21B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B74Cu;
            // 0x21b750: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B754u; }
        if (ctx->pc != 0x21B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B754u; }
        if (ctx->pc != 0x21B754u) { return; }
    }
    ctx->pc = 0x21B754u;
label_21b754:
    // 0x21b754: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21b758: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x21b758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
    // 0x21b75c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21b75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21b760: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x21B760u;
    {
        const bool branch_taken_0x21b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B760u;
            // 0x21b764: 0xac20d630  sw          $zero, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b760) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B768u;
label_21b768:
    // 0x21b768: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x21b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21b76c: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x21B76Cu;
    SET_GPR_U32(ctx, 31, 0x21B774u);
    ctx->pc = 0x21B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B76Cu;
            // 0x21b770: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B774u; }
        if (ctx->pc != 0x21B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B774u; }
        if (ctx->pc != 0x21B774u) { return; }
    }
    ctx->pc = 0x21B774u;
label_21b774:
    // 0x21b774: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x21B774u;
    {
        const bool branch_taken_0x21b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b774) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B77Cu;
    // 0x21b77c: 0x93829300  lbu         $v0, -0x6D00($gp)
    ctx->pc = 0x21b77cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939392)));
    // 0x21b780: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21b780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b784: 0x1453007f  bne         $v0, $s3, . + 4 + (0x7F << 2)
    ctx->pc = 0x21B784u;
    {
        const bool branch_taken_0x21b784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x21b784) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B78Cu;
    // 0x21b78c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x21B78Cu;
    {
        const bool branch_taken_0x21b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B78Cu;
            // 0x21b790: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b78c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B794u;
label_21b794:
    // 0x21b794: 0x8f829314  lw          $v0, -0x6CEC($gp)
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939412)));
    // 0x21b798: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x21b798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x21b79c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B79Cu;
    {
        const bool branch_taken_0x21b79c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B79Cu;
            // 0x21b7a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b79c) {
            ctx->pc = 0x21B7C4u;
            goto label_21b7c4;
        }
    }
    ctx->pc = 0x21B7A4u;
    // 0x21b7a4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21b7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21b7a8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x21b7ac: 0x27859314  addiu       $a1, $gp, -0x6CEC
    ctx->pc = 0x21b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939412));
    // 0x21b7b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7b4: 0xc094538  jal         func_2514E0
    ctx->pc = 0x21B7B4u;
    SET_GPR_U32(ctx, 31, 0x21B7BCu);
    ctx->pc = 0x21B7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7B4u;
            // 0x21b7b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2514E0u;
    if (runtime->hasFunction(0x2514E0u)) {
        auto targetFn = runtime->lookupFunction(0x2514E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B7BCu; }
        if (ctx->pc != 0x21B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FiPiiii_0x2514e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B7BCu; }
        if (ctx->pc != 0x21B7BCu) { return; }
    }
    ctx->pc = 0x21B7BCu;
label_21b7bc:
    // 0x21b7bc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x21B7BCu;
    {
        const bool branch_taken_0x21b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b7bc) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B7C4u;
label_21b7c4:
    // 0x21b7c4: 0x27859304  addiu       $a1, $gp, -0x6CFC
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939396));
    // 0x21b7c8: 0x27869308  addiu       $a2, $gp, -0x6CF8
    ctx->pc = 0x21b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939400));
    // 0x21b7cc: 0xc08ede0  jal         func_23B780
    ctx->pc = 0x21B7CCu;
    SET_GPR_U32(ctx, 31, 0x21B7D4u);
    ctx->pc = 0x21B7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7CCu;
            // 0x21b7d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B780u;
    if (runtime->hasFunction(0x23B780u)) {
        auto targetFn = runtime->lookupFunction(0x23B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B7D4u; }
        if (ctx->pc != 0x21B7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdKey__FiPiPii_0x23b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B7D4u; }
        if (ctx->pc != 0x21B7D4u) { return; }
    }
    ctx->pc = 0x21B7D4u;
label_21b7d4:
    // 0x21b7d4: 0x8f849304  lw          $a0, -0x6CFC($gp)
    ctx->pc = 0x21b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939396)));
    // 0x21b7d8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x21b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x21b7dc: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x21b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
    // 0x21b7e0: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x21b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x21b7e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b7e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b7ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b7f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B7F0u;
    {
        const bool branch_taken_0x21b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7F0u;
            // 0x21b7f4: 0xaf839294  sw          $v1, -0x6D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7f0) {
            ctx->pc = 0x21B80Cu;
            goto label_21b80c;
        }
    }
    ctx->pc = 0x21B7F8u;
    // 0x21b7f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b7fc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B7FCu;
    SET_GPR_U32(ctx, 31, 0x21B804u);
    ctx->pc = 0x21B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7FCu;
            // 0x21b800: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B804u; }
        if (ctx->pc != 0x21B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B804u; }
        if (ctx->pc != 0x21B804u) { return; }
    }
    ctx->pc = 0x21B804u;
label_21b804:
    // 0x21b804: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x21B804u;
    {
        const bool branch_taken_0x21b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b804) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B80Cu;
label_21b80c:
    // 0x21b80c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x21b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x21b810: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21B810u;
    {
        const bool branch_taken_0x21b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b810) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B818u;
    // 0x21b818: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b81c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b820: 0xc0bdc18  jal         func_2F7060
    ctx->pc = 0x21B820u;
    SET_GPR_U32(ctx, 31, 0x21B828u);
    ctx->pc = 0x21B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B820u;
            // 0x21b824: 0xaf83930c  sw          $v1, -0x6CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7060u;
    if (runtime->hasFunction(0x2F7060u)) {
        auto targetFn = runtime->lookupFunction(0x2F7060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B828u; }
        if (ctx->pc != 0x21B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceData__12CGyoRaceDataFPi_0x2f7060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B828u; }
        if (ctx->pc != 0x21B828u) { return; }
    }
    ctx->pc = 0x21B828u;
label_21b828:
    // 0x21b828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B828u;
    {
        const bool branch_taken_0x21b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B828u;
            // 0x21b82c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b828) {
            ctx->pc = 0x21B83Cu;
            goto label_21b83c;
        }
    }
    ctx->pc = 0x21B830u;
    // 0x21b830: 0x8f82930c  lw          $v0, -0x6CF4($gp)
    ctx->pc = 0x21b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21b834: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B834u;
    {
        const bool branch_taken_0x21b834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b834) {
            ctx->pc = 0x21B84Cu;
            goto label_21b84c;
        }
    }
    ctx->pc = 0x21B83Cu;
label_21b83c:
    // 0x21b83c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B83Cu;
    SET_GPR_U32(ctx, 31, 0x21B844u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B844u; }
        if (ctx->pc != 0x21B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B844u; }
        if (ctx->pc != 0x21B844u) { return; }
    }
    ctx->pc = 0x21B844u;
label_21b844:
    // 0x21b844: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x21B844u;
    {
        const bool branch_taken_0x21b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b844) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B84Cu;
label_21b84c:
    // 0x21b84c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b850: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B850u;
    SET_GPR_U32(ctx, 31, 0x21B858u);
    ctx->pc = 0x21B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B850u;
            // 0x21b854: 0x24130041  addiu       $s3, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B858u; }
        if (ctx->pc != 0x21B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B858u; }
        if (ctx->pc != 0x21B858u) { return; }
    }
    ctx->pc = 0x21B858u;
label_21b858:
    // 0x21b858: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x21B858u;
    {
        const bool branch_taken_0x21b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b858) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B860u;
label_21b860:
    // 0x21b860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b864:
    // 0x21b864: 0xc087654  jal         func_21D950
    ctx->pc = 0x21B864u;
    SET_GPR_U32(ctx, 31, 0x21B86Cu);
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B86Cu; }
        if (ctx->pc != 0x21B86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B86Cu; }
        if (ctx->pc != 0x21B86Cu) { return; }
    }
    ctx->pc = 0x21B86Cu;
label_21b86c:
    // 0x21b86c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b874: 0x1684002e  bne         $s4, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x21B874u;
    {
        const bool branch_taken_0x21b874 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x21B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B874u;
            // 0x21b878: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b874) {
            ctx->pc = 0x21B930u;
            goto label_21b930;
        }
    }
    ctx->pc = 0x21B87Cu;
    // 0x21b87c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B87Cu;
    SET_GPR_U32(ctx, 31, 0x21B884u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B884u; }
        if (ctx->pc != 0x21B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B884u; }
        if (ctx->pc != 0x21B884u) { return; }
    }
    ctx->pc = 0x21B884u;
label_21b884:
    // 0x21b884: 0x878392c8  lh          $v1, -0x6D38($gp)
    ctx->pc = 0x21b884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21b888: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x21b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21b88c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21B88Cu;
    {
        const bool branch_taken_0x21b88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b88c) {
            ctx->pc = 0x21B8D0u;
            goto label_21b8d0;
        }
    }
    ctx->pc = 0x21B894u;
    // 0x21b894: 0xc064228  jal         func_1908A0
    ctx->pc = 0x21B894u;
    SET_GPR_U32(ctx, 31, 0x21B89Cu);
    ctx->pc = 0x21B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B894u;
            // 0x21b898: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B89Cu; }
        if (ctx->pc != 0x21B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B89Cu; }
        if (ctx->pc != 0x21B89Cu) { return; }
    }
    ctx->pc = 0x21B89Cu;
label_21b89c:
    // 0x21b89c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8a4: 0xc0a7c44  jal         func_29F110
    ctx->pc = 0x21B8A4u;
    SET_GPR_U32(ctx, 31, 0x21B8ACu);
    ctx->pc = 0x21B8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B8A4u;
            // 0x21b8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F110u;
    if (runtime->hasFunction(0x29F110u)) {
        auto targetFn = runtime->lookupFunction(0x29F110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8ACu; }
        if (ctx->pc != 0x21B8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitOmakeEnv__FiP13INIT_LOOP_ARGPi_0x29f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8ACu; }
        if (ctx->pc != 0x21B8ACu) { return; }
    }
    ctx->pc = 0x21B8ACu;
label_21b8ac:
    // 0x21b8ac: 0xc064220  jal         func_190880
    ctx->pc = 0x21B8ACu;
    SET_GPR_U32(ctx, 31, 0x21B8B4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8B4u; }
        if (ctx->pc != 0x21B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8B4u; }
        if (ctx->pc != 0x21B8B4u) { return; }
    }
    ctx->pc = 0x21B8B4u;
label_21b8b4:
    // 0x21b8b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21b8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x21b8b8: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21b8bc: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x21b8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x21b8c0: 0x24a5ca00  addiu       $a1, $a1, -0x3600
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
    // 0x21b8c4: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21b8c8: 0xc049c18  jal         func_127060
    ctx->pc = 0x21B8C8u;
    SET_GPR_U32(ctx, 31, 0x21B8D0u);
    ctx->pc = 0x21B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B8C8u;
            // 0x21b8cc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8D0u; }
        if (ctx->pc != 0x21B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8D0u; }
        if (ctx->pc != 0x21B8D0u) { return; }
    }
    ctx->pc = 0x21B8D0u;
label_21b8d0:
    // 0x21b8d0: 0x878392c8  lh          $v1, -0x6D38($gp)
    ctx->pc = 0x21b8d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21b8d4: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x21b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x21b8d8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B8D8u;
    {
        const bool branch_taken_0x21b8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b8d8) {
            ctx->pc = 0x21B92Cu;
            goto label_21b92c;
        }
    }
    ctx->pc = 0x21B8E0u;
    // 0x21b8e0: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b8e4: 0xc0bdc18  jal         func_2F7060
    ctx->pc = 0x21B8E4u;
    SET_GPR_U32(ctx, 31, 0x21B8ECu);
    ctx->pc = 0x21B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B8E4u;
            // 0x21b8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7060u;
    if (runtime->hasFunction(0x2F7060u)) {
        auto targetFn = runtime->lookupFunction(0x2F7060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8ECu; }
        if (ctx->pc != 0x21B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceData__12CGyoRaceDataFPi_0x2f7060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B8ECu; }
        if (ctx->pc != 0x21B8ECu) { return; }
    }
    ctx->pc = 0x21B8ECu;
label_21b8ec:
    // 0x21b8ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21b8ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8f0: 0x12a00024  beqz        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x21B8F0u;
    {
        const bool branch_taken_0x21b8f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8f0) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B8F8u;
    // 0x21b8f8: 0x8f82930c  lw          $v0, -0x6CF4($gp)
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21b8fc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21B8FCu;
    {
        const bool branch_taken_0x21b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8fc) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B904u;
    // 0x21b904: 0xc086a98  jal         func_21AA60
    ctx->pc = 0x21B904u;
    SET_GPR_U32(ctx, 31, 0x21B90Cu);
    ctx->pc = 0x21AA60u;
    if (runtime->hasFunction(0x21AA60u)) {
        auto targetFn = runtime->lookupFunction(0x21AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B90Cu; }
        if (ctx->pc != 0x21B90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ForceSetGyoList__Fv_0x21aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B90Cu; }
        if (ctx->pc != 0x21B90Cu) { return; }
    }
    ctx->pc = 0x21B90Cu;
label_21b90c:
    // 0x21b90c: 0xc0bdc00  jal         func_2F7000
    ctx->pc = 0x21B90Cu;
    SET_GPR_U32(ctx, 31, 0x21B914u);
    ctx->pc = 0x21B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B90Cu;
            // 0x21b910: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7000u;
    if (runtime->hasFunction(0x2F7000u)) {
        auto targetFn = runtime->lookupFunction(0x2F7000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B914u; }
        if (ctx->pc != 0x21B914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__12GYORACE_DATAFv_0x2f7000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B914u; }
        if (ctx->pc != 0x21B914u) { return; }
    }
    ctx->pc = 0x21B914u;
label_21b914:
    // 0x21b914: 0x8f85930c  lw          $a1, -0x6CF4($gp)
    ctx->pc = 0x21b914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21b918: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x21B918u;
    SET_GPR_U32(ctx, 31, 0x21B920u);
    ctx->pc = 0x21B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B918u;
            // 0x21b91c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B920u; }
        if (ctx->pc != 0x21B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B920u; }
        if (ctx->pc != 0x21B920u) { return; }
    }
    ctx->pc = 0x21B920u;
label_21b920:
    // 0x21b920: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b924: 0x24130042  addiu       $s3, $zero, 0x42
    ctx->pc = 0x21b924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x21b928: 0xaf9292fc  sw          $s2, -0x6D04($gp)
    ctx->pc = 0x21b928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 18));
label_21b92c:
    // 0x21b92c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b930:
    // 0x21b930: 0x16820014  bne         $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B930u;
    {
        const bool branch_taken_0x21b930 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B930u;
            // 0x21b934: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b930) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B938u;
    // 0x21b938: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B938u;
    SET_GPR_U32(ctx, 31, 0x21B940u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B940u; }
        if (ctx->pc != 0x21B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B940u; }
        if (ctx->pc != 0x21B940u) { return; }
    }
    ctx->pc = 0x21B940u;
label_21b940:
    // 0x21b940: 0x878392c8  lh          $v1, -0x6D38($gp)
    ctx->pc = 0x21b940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21b944: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x21b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21b948: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B948u;
    {
        const bool branch_taken_0x21b948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B948u;
            // 0x21b94c: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b948) {
            ctx->pc = 0x21B954u;
            goto label_21b954;
        }
    }
    ctx->pc = 0x21B950u;
    // 0x21b950: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x21b950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_21b954:
    // 0x21b954: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B954u;
    {
        const bool branch_taken_0x21b954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b954) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B95Cu;
    // 0x21b95c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21B95Cu;
    {
        const bool branch_taken_0x21b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B95Cu;
            // 0x21b960: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b95c) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B964u;
label_21b964:
    // 0x21b964: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B964u;
    {
        const bool branch_taken_0x21b964 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b964) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B96Cu;
    // 0x21b96c: 0x8f84930c  lw          $a0, -0x6CF4($gp)
    ctx->pc = 0x21b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21b970: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x21B970u;
    SET_GPR_U32(ctx, 31, 0x21B978u);
    ctx->pc = 0x21B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B970u;
            // 0x21b974: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B978u; }
        if (ctx->pc != 0x21B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B978u; }
        if (ctx->pc != 0x21B978u) { return; }
    }
    ctx->pc = 0x21B978u;
label_21b978:
    // 0x21b978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b97c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21B97Cu;
    SET_GPR_U32(ctx, 31, 0x21B984u);
    ctx->pc = 0x21B980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B97Cu;
            // 0x21b980: 0xaf80930c  sw          $zero, -0x6CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B984u; }
        if (ctx->pc != 0x21B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B984u; }
        if (ctx->pc != 0x21B984u) { return; }
    }
    ctx->pc = 0x21B984u;
label_21b984:
    // 0x21b984: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x21b984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_21b988:
    // 0x21b988: 0x1420006f  bnez        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x21B988u;
    {
        const bool branch_taken_0x21b988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B988u;
            // 0x21b98c: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b988) {
            ctx->pc = 0x21BB48u;
            goto label_21bb48;
        }
    }
    ctx->pc = 0x21B990u;
    // 0x21b990: 0x12620063  beq         $s3, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x21B990u;
    {
        const bool branch_taken_0x21b990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B990u;
            // 0x21b994: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b990) {
            ctx->pc = 0x21BB20u;
            goto label_21bb20;
        }
    }
    ctx->pc = 0x21B998u;
    // 0x21b998: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x21b99c: 0x12620041  beq         $s3, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21B99Cu;
    {
        const bool branch_taken_0x21b99c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B99Cu;
            // 0x21b9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b99c) {
            ctx->pc = 0x21BAA4u;
            goto label_21baa4;
        }
    }
    ctx->pc = 0x21B9A4u;
    // 0x21b9a4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x21b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21b9a8: 0x1262003d  beq         $s3, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x21B9A8u;
    {
        const bool branch_taken_0x21b9a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9A8u;
            // 0x21b9ac: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9a8) {
            ctx->pc = 0x21BAA0u;
            goto label_21baa0;
        }
    }
    ctx->pc = 0x21B9B0u;
    // 0x21b9b0: 0x12620034  beq         $s3, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21B9B0u;
    {
        const bool branch_taken_0x21b9b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9B0u;
            // 0x21b9b4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9b0) {
            ctx->pc = 0x21BA84u;
            goto label_21ba84;
        }
    }
    ctx->pc = 0x21B9B8u;
    // 0x21b9b8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x21b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x21b9bc: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21B9BCu;
    {
        const bool branch_taken_0x21b9bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9BCu;
            // 0x21b9c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9bc) {
            ctx->pc = 0x21BA04u;
            goto label_21ba04;
        }
    }
    ctx->pc = 0x21B9C4u;
    // 0x21b9c4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B9C4u;
    {
        const bool branch_taken_0x21b9c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b9c4) {
            ctx->pc = 0x21B9D4u;
            goto label_21b9d4;
        }
    }
    ctx->pc = 0x21B9CCu;
    // 0x21b9cc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x21B9CCu;
    {
        const bool branch_taken_0x21b9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9CCu;
            // 0x21b9d0: 0xa79392c8  sh          $s3, -0x6D38($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9cc) {
            ctx->pc = 0x21BB48u;
            goto label_21bb48;
        }
    }
    ctx->pc = 0x21B9D4u;
label_21b9d4:
    // 0x21b9d4: 0x8f829298  lw          $v0, -0x6D68($gp)
    ctx->pc = 0x21b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21b9d8: 0xa383929c  sb          $v1, -0x6D64($gp)
    ctx->pc = 0x21b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939292), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b9dc: 0xa38092ac  sb          $zero, -0x6D54($gp)
    ctx->pc = 0x21b9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939308), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b9e0: 0xa38092a0  sb          $zero, -0x6D60($gp)
    ctx->pc = 0x21b9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939296), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b9e4: 0xa38092b4  sb          $zero, -0x6D4C($gp)
    ctx->pc = 0x21b9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b9e8: 0xa38092d0  sb          $zero, -0x6D30($gp)
    ctx->pc = 0x21b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b9ec: 0xa04321e8  sb          $v1, 0x21E8($v0)
    ctx->pc = 0x21b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b9f0: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21b9f4: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x21B9F4u;
    SET_GPR_U32(ctx, 31, 0x21B9FCu);
    ctx->pc = 0x21B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9F4u;
            // 0x21b9f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9FCu; }
        if (ctx->pc != 0x21B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9FCu; }
        if (ctx->pc != 0x21B9FCu) { return; }
    }
    ctx->pc = 0x21B9FCu;
label_21b9fc:
    // 0x21b9fc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x21B9FCu;
    {
        const bool branch_taken_0x21b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b9fc) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BA04u;
label_21ba04:
    // 0x21ba04: 0x93829300  lbu         $v0, -0x6D00($gp)
    ctx->pc = 0x21ba04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939392)));
    // 0x21ba08: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x21BA08u;
    {
        const bool branch_taken_0x21ba08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA08u;
            // 0x21ba0c: 0xa38092a0  sb          $zero, -0x6D60($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939296), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba08) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BA10u;
    // 0x21ba10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ba14: 0xaf809304  sw          $zero, -0x6CFC($gp)
    ctx->pc = 0x21ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939396), GPR_U32(ctx, 0));
    // 0x21ba18: 0xc088080  jal         func_220200
    ctx->pc = 0x21BA18u;
    SET_GPR_U32(ctx, 31, 0x21BA20u);
    ctx->pc = 0x21BA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA18u;
            // 0x21ba1c: 0xaf809308  sw          $zero, -0x6CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA20u; }
        if (ctx->pc != 0x21BA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA20u; }
        if (ctx->pc != 0x21BA20u) { return; }
    }
    ctx->pc = 0x21BA20u;
label_21ba20:
    // 0x21ba20: 0xc068644  jal         func_1A1910
    ctx->pc = 0x21BA20u;
    SET_GPR_U32(ctx, 31, 0x21BA28u);
    ctx->pc = 0x21BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA20u;
            // 0x21ba24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA28u; }
        if (ctx->pc != 0x21BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA28u; }
        if (ctx->pc != 0x21BA28u) { return; }
    }
    ctx->pc = 0x21BA28u;
label_21ba28:
    // 0x21ba28: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x21ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x21ba2c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x21ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x21ba30: 0x3485aaab  ori         $a1, $a0, 0xAAAB
    ctx->pc = 0x21ba30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x21ba34: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x21ba34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ba38: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x21ba38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x21ba3c: 0x8f849304  lw          $a0, -0x6CFC($gp)
    ctx->pc = 0x21ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939396)));
    // 0x21ba40: 0x8f859308  lw          $a1, -0x6CF8($gp)
    ctx->pc = 0x21ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939400)));
    // 0x21ba44: 0x1010  mfhi        $v0
    ctx->pc = 0x21ba44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21ba48: 0xc089b7c  jal         func_226DF0
    ctx->pc = 0x21BA48u;
    SET_GPR_U32(ctx, 31, 0x21BA50u);
    ctx->pc = 0x21BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA48u;
            // 0x21ba4c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226DF0u;
    if (runtime->hasFunction(0x226DF0u)) {
        auto targetFn = runtime->lookupFunction(0x226DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA50u; }
        if (ctx->pc != 0x21BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdSetInfo__Fiiii_0x226df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA50u; }
        if (ctx->pc != 0x21BA50u) { return; }
    }
    ctx->pc = 0x21BA50u;
label_21ba50:
    // 0x21ba50: 0x8f859298  lw          $a1, -0x6D68($gp)
    ctx->pc = 0x21ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21ba54: 0x3c04434e  lui         $a0, 0x434E
    ctx->pc = 0x21ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17230 << 16));
    // 0x21ba58: 0xa38093f8  sb          $zero, -0x6C08($gp)
    ctx->pc = 0x21ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ba5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ba60: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x21ba64: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x21ba68: 0xa0a021e8  sb          $zero, 0x21E8($a1)
    ctx->pc = 0x21ba68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8680), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ba6c: 0xaf8492e0  sw          $a0, -0x6D20($gp)
    ctx->pc = 0x21ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 4));
    // 0x21ba70: 0xaf8392e4  sw          $v1, -0x6D1C($gp)
    ctx->pc = 0x21ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 3));
    // 0x21ba74: 0xaf829314  sw          $v0, -0x6CEC($gp)
    ctx->pc = 0x21ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939412), GPR_U32(ctx, 2));
    // 0x21ba78: 0xa39292a0  sb          $s2, -0x6D60($gp)
    ctx->pc = 0x21ba78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939296), (uint8_t)GPR_U32(ctx, 18));
    // 0x21ba7c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21BA7Cu;
    {
        const bool branch_taken_0x21ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA7Cu;
            // 0x21ba80: 0xaf809294  sw          $zero, -0x6D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba7c) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BA84u;
label_21ba84:
    // 0x21ba84: 0xc088080  jal         func_220200
    ctx->pc = 0x21BA84u;
    SET_GPR_U32(ctx, 31, 0x21BA8Cu);
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA8Cu; }
        if (ctx->pc != 0x21BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA8Cu; }
        if (ctx->pc != 0x21BA8Cu) { return; }
    }
    ctx->pc = 0x21BA8Cu;
label_21ba8c:
    // 0x21ba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ba90: 0xa38092d0  sb          $zero, -0x6D30($gp)
    ctx->pc = 0x21ba90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ba94: 0xa38292ac  sb          $v0, -0x6D54($gp)
    ctx->pc = 0x21ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939308), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ba98: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21BA98u;
    {
        const bool branch_taken_0x21ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA98u;
            // 0x21ba9c: 0xa38092d4  sb          $zero, -0x6D2C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939348), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba98) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BAA0u;
label_21baa0:
    // 0x21baa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21baa4:
    // 0x21baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21baa8: 0xa38292d0  sb          $v0, -0x6D30($gp)
    ctx->pc = 0x21baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 2));
    // 0x21baac: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x21BAACu;
    SET_GPR_U32(ctx, 31, 0x21BAB4u);
    ctx->pc = 0x21BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAACu;
            // 0x21bab0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAB4u; }
        if (ctx->pc != 0x21BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAB4u; }
        if (ctx->pc != 0x21BAB4u) { return; }
    }
    ctx->pc = 0x21BAB4u;
label_21bab4:
    // 0x21bab4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21bab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21babc: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x21babcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x21bac0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x21BAC0u;
    SET_GPR_U32(ctx, 31, 0x21BAC8u);
    ctx->pc = 0x21BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAC0u;
            // 0x21bac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAC8u; }
        if (ctx->pc != 0x21BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAC8u; }
        if (ctx->pc != 0x21BAC8u) { return; }
    }
    ctx->pc = 0x21BAC8u;
label_21bac8:
    // 0x21bac8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x21bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21bacc: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BACCu;
    {
        const bool branch_taken_0x21bacc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BACCu;
            // 0x21bad0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bacc) {
            ctx->pc = 0x21BAE4u;
            goto label_21bae4;
        }
    }
    ctx->pc = 0x21BAD4u;
    // 0x21bad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bad8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21BAD8u;
    SET_GPR_U32(ctx, 31, 0x21BAE0u);
    ctx->pc = 0x21BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAD8u;
            // 0x21badc: 0x240513ac  addiu       $a1, $zero, 0x13AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5036));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAE0u; }
        if (ctx->pc != 0x21BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAE0u; }
        if (ctx->pc != 0x21BAE0u) { return; }
    }
    ctx->pc = 0x21BAE0u;
label_21bae0:
    // 0x21bae0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x21bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_21bae4:
    // 0x21bae4: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21BAE4u;
    {
        const bool branch_taken_0x21bae4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAE4u;
            // 0x21bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bae4) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BAECu;
    // 0x21baec: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21BAECu;
    SET_GPR_U32(ctx, 31, 0x21BAF4u);
    ctx->pc = 0x21BAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAECu;
            // 0x21baf0: 0x24051393  addiu       $a1, $zero, 0x1393 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5011));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAF4u; }
        if (ctx->pc != 0x21BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAF4u; }
        if (ctx->pc != 0x21BAF4u) { return; }
    }
    ctx->pc = 0x21BAF4u;
label_21baf4:
    // 0x21baf4: 0x8f84930c  lw          $a0, -0x6CF4($gp)
    ctx->pc = 0x21baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21baf8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21BAF8u;
    {
        const bool branch_taken_0x21baf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAF8u;
            // 0x21bafc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21baf8) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BB00u;
    // 0x21bb00: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21BB00u;
    SET_GPR_U32(ctx, 31, 0x21BB08u);
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB08u; }
        if (ctx->pc != 0x21BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB08u; }
        if (ctx->pc != 0x21BB08u) { return; }
    }
    ctx->pc = 0x21BB08u;
label_21bb08:
    // 0x21bb08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21BB08u;
    {
        const bool branch_taken_0x21bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB08u;
            // 0x21bb0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb08) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BB10u;
    // 0x21bb10: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21BB10u;
    SET_GPR_U32(ctx, 31, 0x21BB18u);
    ctx->pc = 0x21BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB10u;
            // 0x21bb14: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB18u; }
        if (ctx->pc != 0x21BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB18u; }
        if (ctx->pc != 0x21BB18u) { return; }
    }
    ctx->pc = 0x21BB18u;
label_21bb18:
    // 0x21bb18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21BB18u;
    {
        const bool branch_taken_0x21bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb18) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BB20u;
label_21bb20:
    // 0x21bb20: 0xc0868c4  jal         func_21A310
    ctx->pc = 0x21BB20u;
    SET_GPR_U32(ctx, 31, 0x21BB28u);
    ctx->pc = 0x21BB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB20u;
            // 0x21bb24: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A310u;
    if (runtime->hasFunction(0x21A310u)) {
        auto targetFn = runtime->lookupFunction(0x21A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB28u; }
        if (ctx->pc != 0x21BB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceCFGAnalyze__FPc_0x21a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB28u; }
        if (ctx->pc != 0x21BB28u) { return; }
    }
    ctx->pc = 0x21BB28u;
label_21bb28:
    // 0x21bb28: 0x8f84930c  lw          $a0, -0x6CF4($gp)
    ctx->pc = 0x21bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939404)));
    // 0x21bb2c: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21BB2Cu;
    SET_GPR_U32(ctx, 31, 0x21BB34u);
    ctx->pc = 0x21BB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB2Cu;
            // 0x21bb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB34u; }
        if (ctx->pc != 0x21BB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB34u; }
        if (ctx->pc != 0x21BB34u) { return; }
    }
    ctx->pc = 0x21BB34u;
label_21bb34:
    // 0x21bb34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BB34u;
    {
        const bool branch_taken_0x21bb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB34u;
            // 0x21bb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb34) {
            ctx->pc = 0x21BB44u;
            goto label_21bb44;
        }
    }
    ctx->pc = 0x21BB3Cu;
    // 0x21bb3c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21BB3Cu;
    SET_GPR_U32(ctx, 31, 0x21BB44u);
    ctx->pc = 0x21BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB3Cu;
            // 0x21bb40: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB44u; }
        if (ctx->pc != 0x21BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB44u; }
        if (ctx->pc != 0x21BB44u) { return; }
    }
    ctx->pc = 0x21BB44u;
label_21bb44:
    // 0x21bb44: 0xa79392c8  sh          $s3, -0x6D38($gp)
    ctx->pc = 0x21bb44u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 19));
label_21bb48:
    // 0x21bb48: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21bb4c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x21BB4Cu;
    {
        const bool branch_taken_0x21bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb4c) {
            ctx->pc = 0x21BD10u;
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21BB54u;
    // 0x21bb54: 0x878392f0  lh          $v1, -0x6D10($gp)
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939376)));
    // 0x21bb58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bb5c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BB5Cu;
    {
        const bool branch_taken_0x21bb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB5Cu;
            // 0x21bb60: 0x8f9392bc  lw          $s3, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb5c) {
            ctx->pc = 0x21BB74u;
            goto label_21bb74;
        }
    }
    ctx->pc = 0x21BB64u;
    // 0x21bb64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x21bb68: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BB68u;
    {
        const bool branch_taken_0x21bb68 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x21bb68) {
            ctx->pc = 0x21BB74u;
            goto label_21bb74;
        }
    }
    ctx->pc = 0x21BB70u;
    // 0x21bb70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21bb70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bb74:
    // 0x21bb74: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x21BB74u;
    {
        const bool branch_taken_0x21bb74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb74) {
            ctx->pc = 0x21BC38u;
            goto label_21bc38;
        }
    }
    ctx->pc = 0x21BB7Cu;
    // 0x21bb7c: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21bb80: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21BB80u;
    SET_GPR_U32(ctx, 31, 0x21BB88u);
    ctx->pc = 0x21BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB80u;
            // 0x21bb84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB88u; }
        if (ctx->pc != 0x21BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB88u; }
        if (ctx->pc != 0x21BB88u) { return; }
    }
    ctx->pc = 0x21BB88u;
label_21bb88:
    // 0x21bb88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21bb88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21bb8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21BB90u;
    {
        const bool branch_taken_0x21bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB90u;
            // 0x21bb94: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb90) {
            ctx->pc = 0x21BC04u;
            goto label_21bc04;
        }
    }
    ctx->pc = 0x21BB98u;
label_21bb98:
    // 0x21bb98: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x21bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21bb9c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21bba0: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x21bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x21bba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21bba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bbac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbb0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BBB0u;
    {
        const bool branch_taken_0x21bbb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBB0u;
            // 0x21bbb4: 0x8f8492a8  lw          $a0, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb0) {
            ctx->pc = 0x21BBC4u;
            goto label_21bbc4;
        }
    }
    ctx->pc = 0x21BBB8u;
    // 0x21bbb8: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x21bbbc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21BBBCu;
    SET_GPR_U32(ctx, 31, 0x21BBC4u);
    ctx->pc = 0x21BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBBCu;
            // 0x21bbc0: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBC4u; }
        if (ctx->pc != 0x21BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBC4u; }
        if (ctx->pc != 0x21BBC4u) { return; }
    }
    ctx->pc = 0x21BBC4u;
label_21bbc4:
    // 0x21bbc4: 0x0  nop
    ctx->pc = 0x21bbc4u;
    // NOP
    // 0x21bbc8: 0xc0bdbfc  jal         func_2F6FF0
    ctx->pc = 0x21BBC8u;
    SET_GPR_U32(ctx, 31, 0x21BBD0u);
    ctx->pc = 0x21BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBC8u;
            // 0x21bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FF0u;
    if (runtime->hasFunction(0x2F6FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBD0u; }
        if (ctx->pc != 0x21BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsUsed__12GYORACE_DATAFv_0x2f6ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBD0u; }
        if (ctx->pc != 0x21BBD0u) { return; }
    }
    ctx->pc = 0x21BBD0u;
label_21bbd0:
    // 0x21bbd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BBD0u;
    {
        const bool branch_taken_0x21bbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBD0u;
            // 0x21bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbd0) {
            ctx->pc = 0x21BBF8u;
            goto label_21bbf8;
        }
    }
    ctx->pc = 0x21BBD8u;
    // 0x21bbd8: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21BBD8u;
    SET_GPR_U32(ctx, 31, 0x21BBE0u);
    ctx->pc = 0x21BBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBD8u;
            // 0x21bbdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBE0u; }
        if (ctx->pc != 0x21BBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBE0u; }
        if (ctx->pc != 0x21BBE0u) { return; }
    }
    ctx->pc = 0x21BBE0u;
label_21bbe0:
    // 0x21bbe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BBE0u;
    {
        const bool branch_taken_0x21bbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBE0u;
            // 0x21bbe4: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbe0) {
            ctx->pc = 0x21BBF8u;
            goto label_21bbf8;
        }
    }
    ctx->pc = 0x21BBE8u;
    // 0x21bbe8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x21bbec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbf0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21BBF0u;
    SET_GPR_U32(ctx, 31, 0x21BBF8u);
    ctx->pc = 0x21BBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBF0u;
            // 0x21bbf4: 0x24641801  addiu       $a0, $v1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBF8u; }
        if (ctx->pc != 0x21BBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBF8u; }
        if (ctx->pc != 0x21BBF8u) { return; }
    }
    ctx->pc = 0x21BBF8u;
label_21bbf8:
    // 0x21bbf8: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x21bbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x21bbfc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x21bbfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x21bc00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21bc00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21bc04:
    // 0x21bc04: 0x0  nop
    ctx->pc = 0x21bc04u;
    // NOP
    // 0x21bc08: 0x2a81000a  slti        $at, $s4, 0xA
    ctx->pc = 0x21bc08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21bc0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BC0Cu;
    {
        const bool branch_taken_0x21bc0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc0c) {
            ctx->pc = 0x21BC1Cu;
            goto label_21bc1c;
        }
    }
    ctx->pc = 0x21BC14u;
    // 0x21bc14: 0x1640ffe0  bnez        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x21BC14u;
    {
        const bool branch_taken_0x21bc14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc14) {
            ctx->pc = 0x21BB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21bb98;
        }
    }
    ctx->pc = 0x21BC1Cu;
label_21bc1c:
    // 0x21bc1c: 0x0  nop
    ctx->pc = 0x21bc1cu;
    // NOP
    // 0x21bc20: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21bc24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21bc28: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x21bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x21bc2c: 0x8f8492a8  lw          $a0, -0x6D58($gp)
    ctx->pc = 0x21bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21bc30: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21BC30u;
    SET_GPR_U32(ctx, 31, 0x21BC38u);
    ctx->pc = 0x21BC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC30u;
            // 0x21bc34: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC38u; }
        if (ctx->pc != 0x21BC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC38u; }
        if (ctx->pc != 0x21BC38u) { return; }
    }
    ctx->pc = 0x21BC38u;
label_21bc38:
    // 0x21bc38: 0xc78092bc  lwc1        $f0, -0x6D44($gp)
    ctx->pc = 0x21bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc3c: 0x3c02c1d0  lui         $v0, 0xC1D0
    ctx->pc = 0x21bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49616 << 16));
    // 0x21bc40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bc44: 0x8f8592fc  lw          $a1, -0x6D04($gp)
    ctx->pc = 0x21bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x21bc48: 0x278492f4  addiu       $a0, $gp, -0x6D0C
    ctx->pc = 0x21bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939380));
    // 0x21bc4c: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x21bc50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21bc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21bc54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21bc54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21bc58: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x21bc5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21bc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21bc60: 0xc094514  jal         func_251450
    ctx->pc = 0x21BC60u;
    SET_GPR_U32(ctx, 31, 0x21BC68u);
    ctx->pc = 0x21BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC60u;
            // 0x21bc64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC68u; }
        if (ctx->pc != 0x21BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC68u; }
        if (ctx->pc != 0x21BC68u) { return; }
    }
    ctx->pc = 0x21BC68u;
label_21bc68:
    // 0x21bc68: 0xc78092f4  lwc1        $f0, -0x6D0C($gp)
    ctx->pc = 0x21bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc6c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x21bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x21bc70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bc74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21BC74u;
    SET_GPR_U32(ctx, 31, 0x21BC7Cu);
    ctx->pc = 0x21BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC74u;
            // 0x21bc78: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC7Cu; }
        if (ctx->pc != 0x21BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC7Cu; }
        if (ctx->pc != 0x21BC7Cu) { return; }
    }
    ctx->pc = 0x21BC7Cu;
label_21bc7c:
    // 0x21bc7c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x21bc7cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bc80: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x21bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x21bc84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bc84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bc88: 0x0  nop
    ctx->pc = 0x21bc88u;
    // NOP
    // 0x21bc8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21bc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21bc90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21bc90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bc94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bc98: 0x0  nop
    ctx->pc = 0x21bc98u;
    // NOP
    // 0x21bc9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21bc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21bca0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21BCA0u;
    SET_GPR_U32(ctx, 31, 0x21BCA8u);
    ctx->pc = 0x21BCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCA0u;
            // 0x21bca4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCA8u; }
        if (ctx->pc != 0x21BCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCA8u; }
        if (ctx->pc != 0x21BCA8u) { return; }
    }
    ctx->pc = 0x21BCA8u;
label_21bca8:
    // 0x21bca8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21bca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21bcacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21bcb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bcb4:
    // 0x21bcb4: 0x640000a  bltz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x21BCB4u;
    {
        const bool branch_taken_0x21bcb4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x21BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCB4u;
            // 0x21bcb8: 0x8f8692a8  lw          $a2, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcb4) {
            ctx->pc = 0x21BCE0u;
            goto label_21bce0;
        }
    }
    ctx->pc = 0x21BCBCu;
    // 0x21bcbc: 0x2a410014  slti        $at, $s2, 0x14
    ctx->pc = 0x21bcbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21bcc0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BCC0u;
    {
        const bool branch_taken_0x21bcc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCC0u;
            // 0x21bcc4: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcc0) {
            ctx->pc = 0x21BCE0u;
            goto label_21bce0;
        }
    }
    ctx->pc = 0x21BCC8u;
    // 0x21bcc8: 0xd33821  addu        $a3, $a2, $s3
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x21bccc: 0xace31b94  sw          $v1, 0x1B94($a3)
    ctx->pc = 0x21bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7060), GPR_U32(ctx, 3));
    // 0x21bcd0: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21bcd4: 0xace21b98  sw          $v0, 0x1B98($a3)
    ctx->pc = 0x21bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7064), GPR_U32(ctx, 2));
    // 0x21bcd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bcdc: 0xac661c34  sw          $a2, 0x1C34($v1)
    ctx->pc = 0x21bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7220), GPR_U32(ctx, 6));
label_21bce0:
    // 0x21bce0: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x21bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x21bce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bcec: 0x0  nop
    ctx->pc = 0x21bcecu;
    // NOP
    // 0x21bcf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21bcf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21bcf4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21BCF4u;
    SET_GPR_U32(ctx, 31, 0x21BCFCu);
    ctx->pc = 0x21BCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCF4u;
            // 0x21bcf8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCFCu; }
        if (ctx->pc != 0x21BCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCFCu; }
        if (ctx->pc != 0x21BCFCu) { return; }
    }
    ctx->pc = 0x21BCFCu;
label_21bcfc:
    // 0x21bcfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21bcfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21bd00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x21bd04: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x21bd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21bd08: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21BD08u;
    {
        const bool branch_taken_0x21bd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD08u;
            // 0x21bd0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd08) {
            ctx->pc = 0x21BCB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21bcb4;
        }
    }
    ctx->pc = 0x21BD10u;
label_21bd10:
    // 0x21bd10: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21bd14: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BD14u;
    {
        const bool branch_taken_0x21bd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bd14) {
            ctx->pc = 0x21BD3Cu;
            goto label_21bd3c;
        }
    }
    ctx->pc = 0x21BD1Cu;
    // 0x21bd1c: 0xc087898  jal         func_21E260
    ctx->pc = 0x21BD1Cu;
    SET_GPR_U32(ctx, 31, 0x21BD24u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD24u; }
        if (ctx->pc != 0x21BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD24u; }
        if (ctx->pc != 0x21BD24u) { return; }
    }
    ctx->pc = 0x21BD24u;
label_21bd24:
    // 0x21bd24: 0xc087898  jal         func_21E260
    ctx->pc = 0x21BD24u;
    SET_GPR_U32(ctx, 31, 0x21BD2Cu);
    ctx->pc = 0x21BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD24u;
            // 0x21bd28: 0x8f8492a4  lw          $a0, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD2Cu; }
        if (ctx->pc != 0x21BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD2Cu; }
        if (ctx->pc != 0x21BD2Cu) { return; }
    }
    ctx->pc = 0x21BD2Cu;
label_21bd2c:
    // 0x21bd2c: 0xc087898  jal         func_21E260
    ctx->pc = 0x21BD2Cu;
    SET_GPR_U32(ctx, 31, 0x21BD34u);
    ctx->pc = 0x21BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD2Cu;
            // 0x21bd30: 0x8f8492a8  lw          $a0, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD34u; }
        if (ctx->pc != 0x21BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD34u; }
        if (ctx->pc != 0x21BD34u) { return; }
    }
    ctx->pc = 0x21BD34u;
label_21bd34:
    // 0x21bd34: 0xc087898  jal         func_21E260
    ctx->pc = 0x21BD34u;
    SET_GPR_U32(ctx, 31, 0x21BD3Cu);
    ctx->pc = 0x21BD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD34u;
            // 0x21bd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD3Cu; }
        if (ctx->pc != 0x21BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD3Cu; }
        if (ctx->pc != 0x21BD3Cu) { return; }
    }
    ctx->pc = 0x21BD3Cu;
label_21bd3c:
    // 0x21bd3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BD3Cu;
    {
        const bool branch_taken_0x21bd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD3Cu;
            // 0x21bd40: 0x3c0241d0  lui         $v0, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd3c) {
            ctx->pc = 0x21BD50u;
            goto label_21bd50;
        }
    }
    ctx->pc = 0x21BD44u;
    // 0x21bd44: 0xc087898  jal         func_21E260
    ctx->pc = 0x21BD44u;
    SET_GPR_U32(ctx, 31, 0x21BD4Cu);
    ctx->pc = 0x21BD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD44u;
            // 0x21bd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD4Cu; }
        if (ctx->pc != 0x21BD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD4Cu; }
        if (ctx->pc != 0x21BD4Cu) { return; }
    }
    ctx->pc = 0x21BD4Cu;
label_21bd4c:
    // 0x21bd4c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_21bd50:
    // 0x21bd50: 0x8f8792b8  lw          $a3, -0x6D48($gp)
    ctx->pc = 0x21bd50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21bd54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd58: 0x8f8692bc  lw          $a2, -0x6D44($gp)
    ctx->pc = 0x21bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21bd5c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd60: 0x278492d8  addiu       $a0, $gp, -0x6D28
    ctx->pc = 0x21bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939352));
    // 0x21bd64: 0x3c0242e4  lui         $v0, 0x42E4
    ctx->pc = 0x21bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17124 << 16));
    // 0x21bd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bd6c: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x21bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
    // 0x21bd70: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x21bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21bd74: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x21bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x21bd78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21bd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21bd7c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x21bd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21bd80: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x21bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21bd84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21bd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21bd88: 0x0  nop
    ctx->pc = 0x21bd88u;
    // NOP
    // 0x21bd8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21bd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21bd90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21bd90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bd94: 0xc094514  jal         func_251450
    ctx->pc = 0x21BD94u;
    SET_GPR_U32(ctx, 31, 0x21BD9Cu);
    ctx->pc = 0x21BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD94u;
            // 0x21bd98: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD9Cu; }
        if (ctx->pc != 0x21BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD9Cu; }
        if (ctx->pc != 0x21BD9Cu) { return; }
    }
    ctx->pc = 0x21BD9Cu;
label_21bd9c:
    // 0x21bd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21bd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bda0:
    // 0x21bda0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21bda4:
    // 0x21bda4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21bda4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21bda8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21bda8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21bdac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21bdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21bdb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21bdb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21bdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21bdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21bdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21bdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21bdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDC4u;
            // 0x21bdc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21BDCCu;
}
