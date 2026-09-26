#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CSphidaFv
// Address: 0x2eb790 - 0x2ebc58
void Draw__7CSphidaFv_0x2eb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CSphidaFv_0x2eb790");
#endif

    switch (ctx->pc) {
        case 0x2eb790u: goto label_2eb790;
        case 0x2eb794u: goto label_2eb794;
        case 0x2eb798u: goto label_2eb798;
        case 0x2eb79cu: goto label_2eb79c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb7a4u: goto label_2eb7a4;
        case 0x2eb7a8u: goto label_2eb7a8;
        case 0x2eb7acu: goto label_2eb7ac;
        case 0x2eb7b0u: goto label_2eb7b0;
        case 0x2eb7b4u: goto label_2eb7b4;
        case 0x2eb7b8u: goto label_2eb7b8;
        case 0x2eb7bcu: goto label_2eb7bc;
        case 0x2eb7c0u: goto label_2eb7c0;
        case 0x2eb7c4u: goto label_2eb7c4;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb7ccu: goto label_2eb7cc;
        case 0x2eb7d0u: goto label_2eb7d0;
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7d8u: goto label_2eb7d8;
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb7e0u: goto label_2eb7e0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        case 0x2eb7f0u: goto label_2eb7f0;
        case 0x2eb7f4u: goto label_2eb7f4;
        case 0x2eb7f8u: goto label_2eb7f8;
        case 0x2eb7fcu: goto label_2eb7fc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb808u: goto label_2eb808;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb810u: goto label_2eb810;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb818u: goto label_2eb818;
        case 0x2eb81cu: goto label_2eb81c;
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb824u: goto label_2eb824;
        case 0x2eb828u: goto label_2eb828;
        case 0x2eb82cu: goto label_2eb82c;
        case 0x2eb830u: goto label_2eb830;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb83cu: goto label_2eb83c;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb844u: goto label_2eb844;
        case 0x2eb848u: goto label_2eb848;
        case 0x2eb84cu: goto label_2eb84c;
        case 0x2eb850u: goto label_2eb850;
        case 0x2eb854u: goto label_2eb854;
        case 0x2eb858u: goto label_2eb858;
        case 0x2eb85cu: goto label_2eb85c;
        case 0x2eb860u: goto label_2eb860;
        case 0x2eb864u: goto label_2eb864;
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb86cu: goto label_2eb86c;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb874u: goto label_2eb874;
        case 0x2eb878u: goto label_2eb878;
        case 0x2eb87cu: goto label_2eb87c;
        case 0x2eb880u: goto label_2eb880;
        case 0x2eb884u: goto label_2eb884;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eb88cu: goto label_2eb88c;
        case 0x2eb890u: goto label_2eb890;
        case 0x2eb894u: goto label_2eb894;
        case 0x2eb898u: goto label_2eb898;
        case 0x2eb89cu: goto label_2eb89c;
        case 0x2eb8a0u: goto label_2eb8a0;
        case 0x2eb8a4u: goto label_2eb8a4;
        case 0x2eb8a8u: goto label_2eb8a8;
        case 0x2eb8acu: goto label_2eb8ac;
        case 0x2eb8b0u: goto label_2eb8b0;
        case 0x2eb8b4u: goto label_2eb8b4;
        case 0x2eb8b8u: goto label_2eb8b8;
        case 0x2eb8bcu: goto label_2eb8bc;
        case 0x2eb8c0u: goto label_2eb8c0;
        case 0x2eb8c4u: goto label_2eb8c4;
        case 0x2eb8c8u: goto label_2eb8c8;
        case 0x2eb8ccu: goto label_2eb8cc;
        case 0x2eb8d0u: goto label_2eb8d0;
        case 0x2eb8d4u: goto label_2eb8d4;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8dcu: goto label_2eb8dc;
        case 0x2eb8e0u: goto label_2eb8e0;
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8ecu: goto label_2eb8ec;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb8f4u: goto label_2eb8f4;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        case 0x2eb90cu: goto label_2eb90c;
        case 0x2eb910u: goto label_2eb910;
        case 0x2eb914u: goto label_2eb914;
        case 0x2eb918u: goto label_2eb918;
        case 0x2eb91cu: goto label_2eb91c;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb928u: goto label_2eb928;
        case 0x2eb92cu: goto label_2eb92c;
        case 0x2eb930u: goto label_2eb930;
        case 0x2eb934u: goto label_2eb934;
        case 0x2eb938u: goto label_2eb938;
        case 0x2eb93cu: goto label_2eb93c;
        case 0x2eb940u: goto label_2eb940;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb948u: goto label_2eb948;
        case 0x2eb94cu: goto label_2eb94c;
        case 0x2eb950u: goto label_2eb950;
        case 0x2eb954u: goto label_2eb954;
        case 0x2eb958u: goto label_2eb958;
        case 0x2eb95cu: goto label_2eb95c;
        case 0x2eb960u: goto label_2eb960;
        case 0x2eb964u: goto label_2eb964;
        case 0x2eb968u: goto label_2eb968;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb974u: goto label_2eb974;
        case 0x2eb978u: goto label_2eb978;
        case 0x2eb97cu: goto label_2eb97c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb984u: goto label_2eb984;
        case 0x2eb988u: goto label_2eb988;
        case 0x2eb98cu: goto label_2eb98c;
        case 0x2eb990u: goto label_2eb990;
        case 0x2eb994u: goto label_2eb994;
        case 0x2eb998u: goto label_2eb998;
        case 0x2eb99cu: goto label_2eb99c;
        case 0x2eb9a0u: goto label_2eb9a0;
        case 0x2eb9a4u: goto label_2eb9a4;
        case 0x2eb9a8u: goto label_2eb9a8;
        case 0x2eb9acu: goto label_2eb9ac;
        case 0x2eb9b0u: goto label_2eb9b0;
        case 0x2eb9b4u: goto label_2eb9b4;
        case 0x2eb9b8u: goto label_2eb9b8;
        case 0x2eb9bcu: goto label_2eb9bc;
        case 0x2eb9c0u: goto label_2eb9c0;
        case 0x2eb9c4u: goto label_2eb9c4;
        case 0x2eb9c8u: goto label_2eb9c8;
        case 0x2eb9ccu: goto label_2eb9cc;
        case 0x2eb9d0u: goto label_2eb9d0;
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9d8u: goto label_2eb9d8;
        case 0x2eb9dcu: goto label_2eb9dc;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eb9e4u: goto label_2eb9e4;
        case 0x2eb9e8u: goto label_2eb9e8;
        case 0x2eb9ecu: goto label_2eb9ec;
        case 0x2eb9f0u: goto label_2eb9f0;
        case 0x2eb9f4u: goto label_2eb9f4;
        case 0x2eb9f8u: goto label_2eb9f8;
        case 0x2eb9fcu: goto label_2eb9fc;
        case 0x2eba00u: goto label_2eba00;
        case 0x2eba04u: goto label_2eba04;
        case 0x2eba08u: goto label_2eba08;
        case 0x2eba0cu: goto label_2eba0c;
        case 0x2eba10u: goto label_2eba10;
        case 0x2eba14u: goto label_2eba14;
        case 0x2eba18u: goto label_2eba18;
        case 0x2eba1cu: goto label_2eba1c;
        case 0x2eba20u: goto label_2eba20;
        case 0x2eba24u: goto label_2eba24;
        case 0x2eba28u: goto label_2eba28;
        case 0x2eba2cu: goto label_2eba2c;
        case 0x2eba30u: goto label_2eba30;
        case 0x2eba34u: goto label_2eba34;
        case 0x2eba38u: goto label_2eba38;
        case 0x2eba3cu: goto label_2eba3c;
        case 0x2eba40u: goto label_2eba40;
        case 0x2eba44u: goto label_2eba44;
        case 0x2eba48u: goto label_2eba48;
        case 0x2eba4cu: goto label_2eba4c;
        case 0x2eba50u: goto label_2eba50;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba58u: goto label_2eba58;
        case 0x2eba5cu: goto label_2eba5c;
        case 0x2eba60u: goto label_2eba60;
        case 0x2eba64u: goto label_2eba64;
        case 0x2eba68u: goto label_2eba68;
        case 0x2eba6cu: goto label_2eba6c;
        case 0x2eba70u: goto label_2eba70;
        case 0x2eba74u: goto label_2eba74;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba7cu: goto label_2eba7c;
        case 0x2eba80u: goto label_2eba80;
        case 0x2eba84u: goto label_2eba84;
        case 0x2eba88u: goto label_2eba88;
        case 0x2eba8cu: goto label_2eba8c;
        case 0x2eba90u: goto label_2eba90;
        case 0x2eba94u: goto label_2eba94;
        case 0x2eba98u: goto label_2eba98;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebaa0u: goto label_2ebaa0;
        case 0x2ebaa4u: goto label_2ebaa4;
        case 0x2ebaa8u: goto label_2ebaa8;
        case 0x2ebaacu: goto label_2ebaac;
        case 0x2ebab0u: goto label_2ebab0;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebab8u: goto label_2ebab8;
        case 0x2ebabcu: goto label_2ebabc;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebac4u: goto label_2ebac4;
        case 0x2ebac8u: goto label_2ebac8;
        case 0x2ebaccu: goto label_2ebacc;
        case 0x2ebad0u: goto label_2ebad0;
        case 0x2ebad4u: goto label_2ebad4;
        case 0x2ebad8u: goto label_2ebad8;
        case 0x2ebadcu: goto label_2ebadc;
        case 0x2ebae0u: goto label_2ebae0;
        case 0x2ebae4u: goto label_2ebae4;
        case 0x2ebae8u: goto label_2ebae8;
        case 0x2ebaecu: goto label_2ebaec;
        case 0x2ebaf0u: goto label_2ebaf0;
        case 0x2ebaf4u: goto label_2ebaf4;
        case 0x2ebaf8u: goto label_2ebaf8;
        case 0x2ebafcu: goto label_2ebafc;
        case 0x2ebb00u: goto label_2ebb00;
        case 0x2ebb04u: goto label_2ebb04;
        case 0x2ebb08u: goto label_2ebb08;
        case 0x2ebb0cu: goto label_2ebb0c;
        case 0x2ebb10u: goto label_2ebb10;
        case 0x2ebb14u: goto label_2ebb14;
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebb1cu: goto label_2ebb1c;
        case 0x2ebb20u: goto label_2ebb20;
        case 0x2ebb24u: goto label_2ebb24;
        case 0x2ebb28u: goto label_2ebb28;
        case 0x2ebb2cu: goto label_2ebb2c;
        case 0x2ebb30u: goto label_2ebb30;
        case 0x2ebb34u: goto label_2ebb34;
        case 0x2ebb38u: goto label_2ebb38;
        case 0x2ebb3cu: goto label_2ebb3c;
        case 0x2ebb40u: goto label_2ebb40;
        case 0x2ebb44u: goto label_2ebb44;
        case 0x2ebb48u: goto label_2ebb48;
        case 0x2ebb4cu: goto label_2ebb4c;
        case 0x2ebb50u: goto label_2ebb50;
        case 0x2ebb54u: goto label_2ebb54;
        case 0x2ebb58u: goto label_2ebb58;
        case 0x2ebb5cu: goto label_2ebb5c;
        case 0x2ebb60u: goto label_2ebb60;
        case 0x2ebb64u: goto label_2ebb64;
        case 0x2ebb68u: goto label_2ebb68;
        case 0x2ebb6cu: goto label_2ebb6c;
        case 0x2ebb70u: goto label_2ebb70;
        case 0x2ebb74u: goto label_2ebb74;
        case 0x2ebb78u: goto label_2ebb78;
        case 0x2ebb7cu: goto label_2ebb7c;
        case 0x2ebb80u: goto label_2ebb80;
        case 0x2ebb84u: goto label_2ebb84;
        case 0x2ebb88u: goto label_2ebb88;
        case 0x2ebb8cu: goto label_2ebb8c;
        case 0x2ebb90u: goto label_2ebb90;
        case 0x2ebb94u: goto label_2ebb94;
        case 0x2ebb98u: goto label_2ebb98;
        case 0x2ebb9cu: goto label_2ebb9c;
        case 0x2ebba0u: goto label_2ebba0;
        case 0x2ebba4u: goto label_2ebba4;
        case 0x2ebba8u: goto label_2ebba8;
        case 0x2ebbacu: goto label_2ebbac;
        case 0x2ebbb0u: goto label_2ebbb0;
        case 0x2ebbb4u: goto label_2ebbb4;
        case 0x2ebbb8u: goto label_2ebbb8;
        case 0x2ebbbcu: goto label_2ebbbc;
        case 0x2ebbc0u: goto label_2ebbc0;
        case 0x2ebbc4u: goto label_2ebbc4;
        case 0x2ebbc8u: goto label_2ebbc8;
        case 0x2ebbccu: goto label_2ebbcc;
        case 0x2ebbd0u: goto label_2ebbd0;
        case 0x2ebbd4u: goto label_2ebbd4;
        case 0x2ebbd8u: goto label_2ebbd8;
        case 0x2ebbdcu: goto label_2ebbdc;
        case 0x2ebbe0u: goto label_2ebbe0;
        case 0x2ebbe4u: goto label_2ebbe4;
        case 0x2ebbe8u: goto label_2ebbe8;
        case 0x2ebbecu: goto label_2ebbec;
        case 0x2ebbf0u: goto label_2ebbf0;
        case 0x2ebbf4u: goto label_2ebbf4;
        case 0x2ebbf8u: goto label_2ebbf8;
        case 0x2ebbfcu: goto label_2ebbfc;
        case 0x2ebc00u: goto label_2ebc00;
        case 0x2ebc04u: goto label_2ebc04;
        case 0x2ebc08u: goto label_2ebc08;
        case 0x2ebc0cu: goto label_2ebc0c;
        case 0x2ebc10u: goto label_2ebc10;
        case 0x2ebc14u: goto label_2ebc14;
        case 0x2ebc18u: goto label_2ebc18;
        case 0x2ebc1cu: goto label_2ebc1c;
        case 0x2ebc20u: goto label_2ebc20;
        case 0x2ebc24u: goto label_2ebc24;
        case 0x2ebc28u: goto label_2ebc28;
        case 0x2ebc2cu: goto label_2ebc2c;
        case 0x2ebc30u: goto label_2ebc30;
        case 0x2ebc34u: goto label_2ebc34;
        case 0x2ebc38u: goto label_2ebc38;
        case 0x2ebc3cu: goto label_2ebc3c;
        case 0x2ebc40u: goto label_2ebc40;
        case 0x2ebc44u: goto label_2ebc44;
        case 0x2ebc48u: goto label_2ebc48;
        case 0x2ebc4cu: goto label_2ebc4c;
        case 0x2ebc50u: goto label_2ebc50;
        case 0x2ebc54u: goto label_2ebc54;
        default: break;
    }

    ctx->pc = 0x2eb790u;

label_2eb790:
    // 0x2eb790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2eb794:
    // 0x2eb794: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2eb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2eb798:
    // 0x2eb798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2eb79c:
    // 0x2eb79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eb79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2eb7a0:
    // 0x2eb7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2eb7a4:
    // 0x2eb7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eb7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2eb7a8:
    // 0x2eb7a8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2eb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2eb7ac:
    // 0x2eb7ac: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
label_2eb7b0:
    if (ctx->pc == 0x2EB7B0u) {
        ctx->pc = 0x2EB7B0u;
            // 0x2eb7b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7B4u;
        goto label_2eb7b4;
    }
    ctx->pc = 0x2EB7ACu;
    {
        const bool branch_taken_0x2eb7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB7ACu;
            // 0x2eb7b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7ac) {
            ctx->pc = 0x2EBC3Cu;
            goto label_2ebc3c;
        }
    }
    ctx->pc = 0x2EB7B4u;
label_2eb7b4:
    // 0x2eb7b4: 0xc0ba8e4  jal         func_2EA390
label_2eb7b8:
    if (ctx->pc == 0x2EB7B8u) {
        ctx->pc = 0x2EB7BCu;
        goto label_2eb7bc;
    }
    ctx->pc = 0x2EB7B4u;
    SET_GPR_U32(ctx, 31, 0x2EB7BCu);
    ctx->pc = 0x2EA390u;
    if (runtime->hasFunction(0x2EA390u)) {
        auto targetFn = runtime->lookupFunction(0x2EA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB7BCu; }
        if (ctx->pc != 0x2EB7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawStatusSprite__7CSphidaFv_0x2ea390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB7BCu; }
        if (ctx->pc != 0x2EB7BCu) { return; }
    }
    ctx->pc = 0x2EB7BCu;
label_2eb7bc:
    // 0x2eb7bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb7c0:
    // 0x2eb7c0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2eb7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2eb7c4:
    // 0x2eb7c4: 0x8c25f6e0  lw          $a1, -0x920($at)
    ctx->pc = 0x2eb7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_2eb7c8:
    // 0x2eb7c8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2eb7cc:
    // 0x2eb7cc: 0x8f838da4  lw          $v1, -0x725C($gp)
    ctx->pc = 0x2eb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_2eb7d0:
    // 0x2eb7d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2eb7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2eb7d4:
    // 0x2eb7d4: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2eb7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_2eb7d8:
    // 0x2eb7d8: 0x10a000b7  beqz        $a1, . + 4 + (0xB7 << 2)
label_2eb7dc:
    if (ctx->pc == 0x2EB7DCu) {
        ctx->pc = 0x2EB7DCu;
            // 0x2eb7dc: 0x619021  addu        $s2, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->pc = 0x2EB7E0u;
        goto label_2eb7e0;
    }
    ctx->pc = 0x2EB7D8u;
    {
        const bool branch_taken_0x2eb7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB7D8u;
            // 0x2eb7dc: 0x619021  addu        $s2, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7d8) {
            ctx->pc = 0x2EBAB8u;
            goto label_2ebab8;
        }
    }
    ctx->pc = 0x2EB7E0u;
label_2eb7e0:
    // 0x2eb7e0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x2eb7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2eb7e4:
    // 0x2eb7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb7e8:
    // 0x2eb7e8: 0x148300b3  bne         $a0, $v1, . + 4 + (0xB3 << 2)
label_2eb7ec:
    if (ctx->pc == 0x2EB7ECu) {
        ctx->pc = 0x2EB7F0u;
        goto label_2eb7f0;
    }
    ctx->pc = 0x2EB7E8u;
    {
        const bool branch_taken_0x2eb7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb7e8) {
            ctx->pc = 0x2EBAB8u;
            goto label_2ebab8;
        }
    }
    ctx->pc = 0x2EB7F0u;
label_2eb7f0:
    // 0x2eb7f0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2eb7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2eb7f4:
    // 0x2eb7f4: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
label_2eb7f8:
    if (ctx->pc == 0x2EB7F8u) {
        ctx->pc = 0x2EB7FCu;
        goto label_2eb7fc;
    }
    ctx->pc = 0x2EB7F4u;
    {
        const bool branch_taken_0x2eb7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7f4) {
            ctx->pc = 0x2EBA68u;
            goto label_2eba68;
        }
    }
    ctx->pc = 0x2EB7FCu;
label_2eb7fc:
    // 0x2eb7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb800:
    // 0x2eb800: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2eb800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2eb804:
    // 0x2eb804: 0xc04ba14  jal         func_12E850
label_2eb808:
    if (ctx->pc == 0x2EB808u) {
        ctx->pc = 0x2EB808u;
            // 0x2eb808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EB80Cu;
        goto label_2eb80c;
    }
    ctx->pc = 0x2EB804u;
    SET_GPR_U32(ctx, 31, 0x2EB80Cu);
    ctx->pc = 0x2EB808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB804u;
            // 0x2eb808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB80Cu; }
        if (ctx->pc != 0x2EB80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB80Cu; }
        if (ctx->pc != 0x2EB80Cu) { return; }
    }
    ctx->pc = 0x2EB80Cu;
label_2eb80c:
    // 0x2eb80c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2eb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2eb810:
    // 0x2eb810: 0xc0a0ed8  jal         func_283B60
label_2eb814:
    if (ctx->pc == 0x2EB814u) {
        ctx->pc = 0x2EB814u;
            // 0x2eb814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EB818u;
        goto label_2eb818;
    }
    ctx->pc = 0x2EB810u;
    SET_GPR_U32(ctx, 31, 0x2EB818u);
    ctx->pc = 0x2EB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB810u;
            // 0x2eb814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB818u; }
        if (ctx->pc != 0x2EB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB818u; }
        if (ctx->pc != 0x2EB818u) { return; }
    }
    ctx->pc = 0x2EB818u;
label_2eb818:
    // 0x2eb818: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2eb81c:
    // 0x2eb81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eb81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb820:
    // 0x2eb820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb824:
    // 0x2eb824: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2eb828:
    if (ctx->pc == 0x2EB828u) {
        ctx->pc = 0x2EB828u;
            // 0x2eb828: 0x240201a4  addiu       $v0, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->pc = 0x2EB82Cu;
        goto label_2eb82c;
    }
    ctx->pc = 0x2EB824u;
    {
        const bool branch_taken_0x2eb824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB824u;
            // 0x2eb828: 0x240201a4  addiu       $v0, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb824) {
            ctx->pc = 0x2EB854u;
            goto label_2eb854;
        }
    }
    ctx->pc = 0x2EB82Cu;
label_2eb82c:
    // 0x2eb82c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb830:
    // 0x2eb830: 0xa4220620  sh          $v0, 0x620($at)
    ctx->pc = 0x2eb830u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 2));
label_2eb834:
    // 0x2eb834: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2eb834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2eb838:
    // 0x2eb838: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb83c:
    // 0x2eb83c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2eb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2eb840:
    // 0x2eb840: 0xa4230622  sh          $v1, 0x622($at)
    ctx->pc = 0x2eb840u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 3));
label_2eb844:
    // 0x2eb844: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb848:
    // 0x2eb848: 0xa4220624  sh          $v0, 0x624($at)
    ctx->pc = 0x2eb848u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 2));
label_2eb84c:
    // 0x2eb84c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb850:
    // 0x2eb850: 0xa4220626  sh          $v0, 0x626($at)
    ctx->pc = 0x2eb850u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 2));
label_2eb854:
    // 0x2eb854: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2eb858:
    // 0x2eb858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eb858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eb85c:
    // 0x2eb85c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2eb860:
    if (ctx->pc == 0x2EB860u) {
        ctx->pc = 0x2EB860u;
            // 0x2eb860: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2EB864u;
        goto label_2eb864;
    }
    ctx->pc = 0x2EB85Cu;
    {
        const bool branch_taken_0x2eb85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB85Cu;
            // 0x2eb860: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb85c) {
            ctx->pc = 0x2EB894u;
            goto label_2eb894;
        }
    }
    ctx->pc = 0x2EB864u;
label_2eb864:
    // 0x2eb864: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2eb868:
    // 0x2eb868: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb86c:
    // 0x2eb86c: 0xa4230620  sh          $v1, 0x620($at)
    ctx->pc = 0x2eb86cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 3));
label_2eb870:
    // 0x2eb870: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x2eb870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_2eb874:
    // 0x2eb874: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb878:
    // 0x2eb878: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2eb878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2eb87c:
    // 0x2eb87c: 0xa4220622  sh          $v0, 0x622($at)
    ctx->pc = 0x2eb87cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 2));
label_2eb880:
    // 0x2eb880: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb884:
    // 0x2eb884: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_2eb888:
    // 0x2eb888: 0xa4230624  sh          $v1, 0x624($at)
    ctx->pc = 0x2eb888u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 3));
label_2eb88c:
    // 0x2eb88c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb890:
    // 0x2eb890: 0xa4220626  sh          $v0, 0x626($at)
    ctx->pc = 0x2eb890u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 2));
label_2eb894:
    // 0x2eb894: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2eb894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2eb898:
    // 0x2eb898: 0xc052cf0  jal         func_14B3C0
label_2eb89c:
    if (ctx->pc == 0x2EB89Cu) {
        ctx->pc = 0x2EB89Cu;
            // 0x2eb89c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EB8A0u;
        goto label_2eb8a0;
    }
    ctx->pc = 0x2EB898u;
    SET_GPR_U32(ctx, 31, 0x2EB8A0u);
    ctx->pc = 0x2EB89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB898u;
            // 0x2eb89c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8A0u; }
        if (ctx->pc != 0x2EB8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8A0u; }
        if (ctx->pc != 0x2EB8A0u) { return; }
    }
    ctx->pc = 0x2EB8A0u;
label_2eb8a0:
    // 0x2eb8a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2eb8a4:
    if (ctx->pc == 0x2EB8A4u) {
        ctx->pc = 0x2EB8A4u;
            // 0x2eb8a4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2EB8A8u;
        goto label_2eb8a8;
    }
    ctx->pc = 0x2EB8A0u;
    {
        const bool branch_taken_0x2eb8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB8A0u;
            // 0x2eb8a4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8a0) {
            ctx->pc = 0x2EB8F4u;
            goto label_2eb8f4;
        }
    }
    ctx->pc = 0x2EB8A8u;
label_2eb8a8:
    // 0x2eb8a8: 0xc66101e0  lwc1        $f1, 0x1E0($s3)
    ctx->pc = 0x2eb8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb8ac:
    // 0x2eb8ac: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2eb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2eb8b0:
    // 0x2eb8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb8b4:
    // 0x2eb8b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb8b8:
    // 0x2eb8b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2eb8bc:
    // 0x2eb8bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eb8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2eb8c0:
    // 0x2eb8c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2eb8c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2eb8c4:
    // 0x2eb8c4: 0xe66001e0  swc1        $f0, 0x1E0($s3)
    ctx->pc = 0x2eb8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
label_2eb8c8:
    // 0x2eb8c8: 0xc421063c  lwc1        $f1, 0x63C($at)
    ctx->pc = 0x2eb8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb8cc:
    // 0x2eb8cc: 0xc66300a0  lwc1        $f3, 0xA0($s3)
    ctx->pc = 0x2eb8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2eb8d0:
    // 0x2eb8d0: 0xc66001e0  lwc1        $f0, 0x1E0($s3)
    ctx->pc = 0x2eb8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb8d4:
    // 0x2eb8d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eb8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2eb8d8:
    // 0x2eb8d8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2eb8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2eb8dc:
    // 0x2eb8dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb8e0:
    // 0x2eb8e0: 0x0  nop
    ctx->pc = 0x2eb8e0u;
    // NOP
label_2eb8e4:
    // 0x2eb8e4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2eb8e8:
    if (ctx->pc == 0x2EB8E8u) {
        ctx->pc = 0x2EB8ECu;
        goto label_2eb8ec;
    }
    ctx->pc = 0x2EB8E4u;
    {
        const bool branch_taken_0x2eb8e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb8e4) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB8ECu;
label_2eb8ec:
    // 0x2eb8ec: 0x10000018  b           . + 4 + (0x18 << 2)
label_2eb8f0:
    if (ctx->pc == 0x2EB8F0u) {
        ctx->pc = 0x2EB8F0u;
            // 0x2eb8f0: 0xe66101e0  swc1        $f1, 0x1E0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
        ctx->pc = 0x2EB8F4u;
        goto label_2eb8f4;
    }
    ctx->pc = 0x2EB8ECu;
    {
        const bool branch_taken_0x2eb8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB8ECu;
            // 0x2eb8f0: 0xe66101e0  swc1        $f1, 0x1E0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8ec) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB8F4u;
label_2eb8f4:
    // 0x2eb8f4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2eb8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2eb8f8:
    // 0x2eb8f8: 0xc052cf0  jal         func_14B3C0
label_2eb8fc:
    if (ctx->pc == 0x2EB8FCu) {
        ctx->pc = 0x2EB8FCu;
            // 0x2eb8fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EB900u;
        goto label_2eb900;
    }
    ctx->pc = 0x2EB8F8u;
    SET_GPR_U32(ctx, 31, 0x2EB900u);
    ctx->pc = 0x2EB8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB8F8u;
            // 0x2eb8fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB900u; }
        if (ctx->pc != 0x2EB900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB900u; }
        if (ctx->pc != 0x2EB900u) { return; }
    }
    ctx->pc = 0x2EB900u;
label_2eb900:
    // 0x2eb900: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2eb904:
    if (ctx->pc == 0x2EB904u) {
        ctx->pc = 0x2EB908u;
        goto label_2eb908;
    }
    ctx->pc = 0x2EB900u;
    {
        const bool branch_taken_0x2eb900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb900) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB908u;
label_2eb908:
    // 0x2eb908: 0xc66101e0  lwc1        $f1, 0x1E0($s3)
    ctx->pc = 0x2eb908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb90c:
    // 0x2eb90c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2eb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2eb910:
    // 0x2eb910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb914:
    // 0x2eb914: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb918:
    // 0x2eb918: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2eb91c:
    // 0x2eb91c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eb91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2eb920:
    // 0x2eb920: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2eb924:
    // 0x2eb924: 0xe66001e0  swc1        $f0, 0x1E0($s3)
    ctx->pc = 0x2eb924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
label_2eb928:
    // 0x2eb928: 0xc421063c  lwc1        $f1, 0x63C($at)
    ctx->pc = 0x2eb928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb92c:
    // 0x2eb92c: 0xc66300a0  lwc1        $f3, 0xA0($s3)
    ctx->pc = 0x2eb92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2eb930:
    // 0x2eb930: 0xc66001e0  lwc1        $f0, 0x1E0($s3)
    ctx->pc = 0x2eb930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb934:
    // 0x2eb934: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eb934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2eb938:
    // 0x2eb938: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2eb938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2eb93c:
    // 0x2eb93c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2eb93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb940:
    // 0x2eb940: 0x0  nop
    ctx->pc = 0x2eb940u;
    // NOP
label_2eb944:
    // 0x2eb944: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2eb948:
    if (ctx->pc == 0x2EB948u) {
        ctx->pc = 0x2EB94Cu;
        goto label_2eb94c;
    }
    ctx->pc = 0x2EB944u;
    {
        const bool branch_taken_0x2eb944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb944) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB94Cu;
label_2eb94c:
    // 0x2eb94c: 0xe66101e0  swc1        $f1, 0x1E0($s3)
    ctx->pc = 0x2eb94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
label_2eb950:
    // 0x2eb950: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2eb954:
    // 0x2eb954: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2eb954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2eb958:
    // 0x2eb958: 0xc052cf0  jal         func_14B3C0
label_2eb95c:
    if (ctx->pc == 0x2EB95Cu) {
        ctx->pc = 0x2EB95Cu;
            // 0x2eb95c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EB960u;
        goto label_2eb960;
    }
    ctx->pc = 0x2EB958u;
    SET_GPR_U32(ctx, 31, 0x2EB960u);
    ctx->pc = 0x2EB95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB958u;
            // 0x2eb95c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB960u; }
        if (ctx->pc != 0x2EB960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB960u; }
        if (ctx->pc != 0x2EB960u) { return; }
    }
    ctx->pc = 0x2EB960u;
label_2eb960:
    // 0x2eb960: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2eb964:
    if (ctx->pc == 0x2EB964u) {
        ctx->pc = 0x2EB964u;
            // 0x2eb964: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2EB968u;
        goto label_2eb968;
    }
    ctx->pc = 0x2EB960u;
    {
        const bool branch_taken_0x2eb960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB960u;
            // 0x2eb964: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb960) {
            ctx->pc = 0x2EB9B4u;
            goto label_2eb9b4;
        }
    }
    ctx->pc = 0x2EB968u;
label_2eb968:
    // 0x2eb968: 0xc66101e8  lwc1        $f1, 0x1E8($s3)
    ctx->pc = 0x2eb968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb96c:
    // 0x2eb96c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2eb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2eb970:
    // 0x2eb970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb974:
    // 0x2eb974: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb978:
    // 0x2eb978: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2eb97c:
    // 0x2eb97c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eb97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2eb980:
    // 0x2eb980: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2eb984:
    // 0x2eb984: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x2eb984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_2eb988:
    // 0x2eb988: 0xc421063c  lwc1        $f1, 0x63C($at)
    ctx->pc = 0x2eb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb98c:
    // 0x2eb98c: 0xc66300a8  lwc1        $f3, 0xA8($s3)
    ctx->pc = 0x2eb98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2eb990:
    // 0x2eb990: 0xc66001e8  lwc1        $f0, 0x1E8($s3)
    ctx->pc = 0x2eb990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb994:
    // 0x2eb994: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eb994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2eb998:
    // 0x2eb998: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2eb998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2eb99c:
    // 0x2eb99c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2eb99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb9a0:
    // 0x2eb9a0: 0x0  nop
    ctx->pc = 0x2eb9a0u;
    // NOP
label_2eb9a4:
    // 0x2eb9a4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_2eb9a8:
    if (ctx->pc == 0x2EB9A8u) {
        ctx->pc = 0x2EB9ACu;
        goto label_2eb9ac;
    }
    ctx->pc = 0x2EB9A4u;
    {
        const bool branch_taken_0x2eb9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb9a4) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EB9ACu;
label_2eb9ac:
    // 0x2eb9ac: 0x10000018  b           . + 4 + (0x18 << 2)
label_2eb9b0:
    if (ctx->pc == 0x2EB9B0u) {
        ctx->pc = 0x2EB9B0u;
            // 0x2eb9b0: 0xe66101e8  swc1        $f1, 0x1E8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
        ctx->pc = 0x2EB9B4u;
        goto label_2eb9b4;
    }
    ctx->pc = 0x2EB9ACu;
    {
        const bool branch_taken_0x2eb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9ACu;
            // 0x2eb9b0: 0xe66101e8  swc1        $f1, 0x1E8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9ac) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EB9B4u;
label_2eb9b4:
    // 0x2eb9b4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2eb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2eb9b8:
    // 0x2eb9b8: 0xc052cf0  jal         func_14B3C0
label_2eb9bc:
    if (ctx->pc == 0x2EB9BCu) {
        ctx->pc = 0x2EB9BCu;
            // 0x2eb9bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EB9C0u;
        goto label_2eb9c0;
    }
    ctx->pc = 0x2EB9B8u;
    SET_GPR_U32(ctx, 31, 0x2EB9C0u);
    ctx->pc = 0x2EB9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9B8u;
            // 0x2eb9bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9C0u; }
        if (ctx->pc != 0x2EB9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9C0u; }
        if (ctx->pc != 0x2EB9C0u) { return; }
    }
    ctx->pc = 0x2EB9C0u;
label_2eb9c0:
    // 0x2eb9c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2eb9c4:
    if (ctx->pc == 0x2EB9C4u) {
        ctx->pc = 0x2EB9C8u;
        goto label_2eb9c8;
    }
    ctx->pc = 0x2EB9C0u;
    {
        const bool branch_taken_0x2eb9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9c0) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EB9C8u;
label_2eb9c8:
    // 0x2eb9c8: 0xc66101e8  lwc1        $f1, 0x1E8($s3)
    ctx->pc = 0x2eb9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb9cc:
    // 0x2eb9cc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2eb9d0:
    // 0x2eb9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb9d4:
    // 0x2eb9d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eb9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eb9d8:
    // 0x2eb9d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2eb9dc:
    // 0x2eb9dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eb9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2eb9e0:
    // 0x2eb9e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2eb9e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2eb9e4:
    // 0x2eb9e4: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x2eb9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_2eb9e8:
    // 0x2eb9e8: 0xc421063c  lwc1        $f1, 0x63C($at)
    ctx->pc = 0x2eb9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eb9ec:
    // 0x2eb9ec: 0xc66300a8  lwc1        $f3, 0xA8($s3)
    ctx->pc = 0x2eb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2eb9f0:
    // 0x2eb9f0: 0xc66001e8  lwc1        $f0, 0x1E8($s3)
    ctx->pc = 0x2eb9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb9f4:
    // 0x2eb9f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eb9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2eb9f8:
    // 0x2eb9f8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2eb9f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2eb9fc:
    // 0x2eb9fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eba00:
    // 0x2eba00: 0x0  nop
    ctx->pc = 0x2eba00u;
    // NOP
label_2eba04:
    // 0x2eba04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2eba08:
    if (ctx->pc == 0x2EBA08u) {
        ctx->pc = 0x2EBA0Cu;
        goto label_2eba0c;
    }
    ctx->pc = 0x2EBA04u;
    {
        const bool branch_taken_0x2eba04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eba04) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EBA0Cu;
label_2eba0c:
    // 0x2eba0c: 0xe66101e8  swc1        $f1, 0x1E8($s3)
    ctx->pc = 0x2eba0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_2eba10:
    // 0x2eba10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2eba10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2eba14:
    // 0x2eba14: 0x266501e0  addiu       $a1, $s3, 0x1E0
    ctx->pc = 0x2eba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_2eba18:
    // 0x2eba18: 0xc0754a8  jal         func_1D52A0
label_2eba1c:
    if (ctx->pc == 0x2EBA1Cu) {
        ctx->pc = 0x2EBA1Cu;
            // 0x2eba1c: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBA20u;
        goto label_2eba20;
    }
    ctx->pc = 0x2EBA18u;
    SET_GPR_U32(ctx, 31, 0x2EBA20u);
    ctx->pc = 0x2EBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA18u;
            // 0x2eba1c: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (runtime->hasFunction(0x1D52A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA20u; }
        if (ctx->pc != 0x2EBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CMiniMapSymbolFPf_0x1d52a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA20u; }
        if (ctx->pc != 0x2EBA20u) { return; }
    }
    ctx->pc = 0x2EBA20u;
label_2eba20:
    // 0x2eba20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eba24:
    // 0x2eba24: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2eba28:
    // 0x2eba28: 0xc04ba14  jal         func_12E850
label_2eba2c:
    if (ctx->pc == 0x2EBA2Cu) {
        ctx->pc = 0x2EBA2Cu;
            // 0x2eba2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA30u;
        goto label_2eba30;
    }
    ctx->pc = 0x2EBA28u;
    SET_GPR_U32(ctx, 31, 0x2EBA30u);
    ctx->pc = 0x2EBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA28u;
            // 0x2eba2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA30u; }
        if (ctx->pc != 0x2EBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA30u; }
        if (ctx->pc != 0x2EBA30u) { return; }
    }
    ctx->pc = 0x2EBA30u;
label_2eba30:
    // 0x2eba30: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2eba30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2eba34:
    // 0x2eba34: 0xc0752c8  jal         func_1D4B20
label_2eba38:
    if (ctx->pc == 0x2EBA38u) {
        ctx->pc = 0x2EBA38u;
            // 0x2eba38: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBA3Cu;
        goto label_2eba3c;
    }
    ctx->pc = 0x2EBA34u;
    SET_GPR_U32(ctx, 31, 0x2EBA3Cu);
    ctx->pc = 0x2EBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA34u;
            // 0x2eba38: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B20u;
    if (runtime->hasFunction(0x1D4B20u)) {
        auto targetFn = runtime->lookupFunction(0x1D4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA3Cu; }
        if (ctx->pc != 0x2EBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolOpen__14CMiniMapSymbolFv_0x1d4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA3Cu; }
        if (ctx->pc != 0x2EBA3Cu) { return; }
    }
    ctx->pc = 0x2EBA3Cu;
label_2eba3c:
    // 0x2eba3c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2eba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2eba40:
    // 0x2eba40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eba44:
    // 0x2eba44: 0xc0baf5c  jal         func_2EBD70
label_2eba48:
    if (ctx->pc == 0x2EBA48u) {
        ctx->pc = 0x2EBA48u;
            // 0x2eba48: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x2EBA4Cu;
        goto label_2eba4c;
    }
    ctx->pc = 0x2EBA44u;
    SET_GPR_U32(ctx, 31, 0x2EBA4Cu);
    ctx->pc = 0x2EBA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA44u;
            // 0x2eba48: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD70u;
    if (runtime->hasFunction(0x2EBD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EBD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA4Cu; }
        if (ctx->pc != 0x2EBA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol_0x2ebd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA4Cu; }
        if (ctx->pc != 0x2EBA4Cu) { return; }
    }
    ctx->pc = 0x2EBA4Cu;
label_2eba4c:
    // 0x2eba4c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2eba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2eba50:
    // 0x2eba50: 0xc0752f4  jal         func_1D4BD0
label_2eba54:
    if (ctx->pc == 0x2EBA54u) {
        ctx->pc = 0x2EBA54u;
            // 0x2eba54: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBA58u;
        goto label_2eba58;
    }
    ctx->pc = 0x2EBA50u;
    SET_GPR_U32(ctx, 31, 0x2EBA58u);
    ctx->pc = 0x2EBA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA50u;
            // 0x2eba54: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BD0u;
    if (runtime->hasFunction(0x1D4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA58u; }
        if (ctx->pc != 0x2EBA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolClose__14CMiniMapSymbolFv_0x1d4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA58u; }
        if (ctx->pc != 0x2EBA58u) { return; }
    }
    ctx->pc = 0x2EBA58u;
label_2eba58:
    // 0x2eba58: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2eba5c:
    // 0x2eba5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eba5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eba60:
    // 0x2eba60: 0xc0753a4  jal         func_1D4E90
label_2eba64:
    if (ctx->pc == 0x2EBA64u) {
        ctx->pc = 0x2EBA64u;
            // 0x2eba64: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBA68u;
        goto label_2eba68;
    }
    ctx->pc = 0x2EBA60u;
    SET_GPR_U32(ctx, 31, 0x2EBA68u);
    ctx->pc = 0x2EBA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA60u;
            // 0x2eba64: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E90u;
    if (runtime->hasFunction(0x1D4E90u)) {
        auto targetFn = runtime->lookupFunction(0x1D4E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA68u; }
        if (ctx->pc != 0x2EBA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2_0x1d4e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA68u; }
        if (ctx->pc != 0x2EBA68u) { return; }
    }
    ctx->pc = 0x2EBA68u;
label_2eba68:
    // 0x2eba68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2eba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2eba6c:
    // 0x2eba6c: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x2eba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_2eba70:
    // 0x2eba70: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2eba74:
    if (ctx->pc == 0x2EBA74u) {
        ctx->pc = 0x2EBA74u;
            // 0x2eba74: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2EBA78u;
        goto label_2eba78;
    }
    ctx->pc = 0x2EBA70u;
    {
        const bool branch_taken_0x2eba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA70u;
            // 0x2eba74: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba70) {
            ctx->pc = 0x2EBAACu;
            goto label_2ebaac;
        }
    }
    ctx->pc = 0x2EBA78u;
label_2eba78:
    // 0x2eba78: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2eba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2eba7c:
    // 0x2eba7c: 0xc052d0c  jal         func_14B430
label_2eba80:
    if (ctx->pc == 0x2EBA80u) {
        ctx->pc = 0x2EBA80u;
            // 0x2eba80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EBA84u;
        goto label_2eba84;
    }
    ctx->pc = 0x2EBA7Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA84u);
    ctx->pc = 0x2EBA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA7Cu;
            // 0x2eba80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA84u; }
        if (ctx->pc != 0x2EBA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA84u; }
        if (ctx->pc != 0x2EBA84u) { return; }
    }
    ctx->pc = 0x2EBA84u;
label_2eba84:
    // 0x2eba84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2eba88:
    if (ctx->pc == 0x2EBA88u) {
        ctx->pc = 0x2EBA8Cu;
        goto label_2eba8c;
    }
    ctx->pc = 0x2EBA84u;
    {
        const bool branch_taken_0x2eba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eba84) {
            ctx->pc = 0x2EBAACu;
            goto label_2ebaac;
        }
    }
    ctx->pc = 0x2EBA8Cu;
label_2eba8c:
    // 0x2eba8c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2eba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2eba90:
    // 0x2eba90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2eba94:
    // 0x2eba94: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2eba94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2eba98:
    // 0x2eba98: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2eba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2eba9c:
    // 0x2eba9c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2eba9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2ebaa0:
    // 0x2ebaa0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2ebaa4:
    if (ctx->pc == 0x2EBAA4u) {
        ctx->pc = 0x2EBAA8u;
        goto label_2ebaa8;
    }
    ctx->pc = 0x2EBAA0u;
    {
        const bool branch_taken_0x2ebaa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebaa0) {
            ctx->pc = 0x2EBAACu;
            goto label_2ebaac;
        }
    }
    ctx->pc = 0x2EBAA8u;
label_2ebaa8:
    // 0x2ebaa8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2ebaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2ebaac:
    // 0x2ebaac: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ebaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ebab0:
    // 0x2ebab0: 0x10000058  b           . + 4 + (0x58 << 2)
label_2ebab4:
    if (ctx->pc == 0x2EBAB4u) {
        ctx->pc = 0x2EBAB4u;
            // 0x2ebab4: 0xae6301f0  sw          $v1, 0x1F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 3));
        ctx->pc = 0x2EBAB8u;
        goto label_2ebab8;
    }
    ctx->pc = 0x2EBAB0u;
    {
        const bool branch_taken_0x2ebab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAB0u;
            // 0x2ebab4: 0xae6301f0  sw          $v1, 0x1F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebab0) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBAB8u;
label_2ebab8:
    // 0x2ebab8: 0x8e64020c  lw          $a0, 0x20C($s3)
    ctx->pc = 0x2ebab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_2ebabc:
    // 0x2ebabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebac0:
    // 0x2ebac0: 0x14830054  bne         $a0, $v1, . + 4 + (0x54 << 2)
label_2ebac4:
    if (ctx->pc == 0x2EBAC4u) {
        ctx->pc = 0x2EBAC8u;
        goto label_2ebac8;
    }
    ctx->pc = 0x2EBAC0u;
    {
        const bool branch_taken_0x2ebac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ebac0) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBAC8u;
label_2ebac8:
    // 0x2ebac8: 0x14a00052  bnez        $a1, . + 4 + (0x52 << 2)
label_2ebacc:
    if (ctx->pc == 0x2EBACCu) {
        ctx->pc = 0x2EBAD0u;
        goto label_2ebad0;
    }
    ctx->pc = 0x2EBAC8u;
    {
        const bool branch_taken_0x2ebac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebac8) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBAD0u;
label_2ebad0:
    // 0x2ebad0: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x2ebad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ebad4:
    // 0x2ebad4: 0x24642f90  addiu       $a0, $v1, 0x2F90
    ctx->pc = 0x2ebad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
label_2ebad8:
    // 0x2ebad8: 0x84632fd6  lh          $v1, 0x2FD6($v1)
    ctx->pc = 0x2ebad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12246)));
label_2ebadc:
    // 0x2ebadc: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
label_2ebae0:
    if (ctx->pc == 0x2EBAE0u) {
        ctx->pc = 0x2EBAE4u;
        goto label_2ebae4;
    }
    ctx->pc = 0x2EBADCu;
    {
        const bool branch_taken_0x2ebadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebadc) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBAE4u;
label_2ebae4:
    // 0x2ebae4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ebae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2ebae8:
    // 0x2ebae8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2ebae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_2ebaec:
    // 0x2ebaec: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
label_2ebaf0:
    if (ctx->pc == 0x2EBAF0u) {
        ctx->pc = 0x2EBAF4u;
        goto label_2ebaf4;
    }
    ctx->pc = 0x2EBAECu;
    {
        const bool branch_taken_0x2ebaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebaec) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBAF4u;
label_2ebaf4:
    // 0x2ebaf4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ebaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ebaf8:
    // 0x2ebaf8: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_2ebafc:
    if (ctx->pc == 0x2EBAFCu) {
        ctx->pc = 0x2EBB00u;
        goto label_2ebb00;
    }
    ctx->pc = 0x2EBAF8u;
    {
        const bool branch_taken_0x2ebaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebaf8) {
            ctx->pc = 0x2EBC14u;
            goto label_2ebc14;
        }
    }
    ctx->pc = 0x2EBB00u;
label_2ebb00:
    // 0x2ebb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebb04:
    // 0x2ebb04: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2ebb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ebb08:
    // 0x2ebb08: 0xc04ba14  jal         func_12E850
label_2ebb0c:
    if (ctx->pc == 0x2EBB0Cu) {
        ctx->pc = 0x2EBB0Cu;
            // 0x2ebb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB10u;
        goto label_2ebb10;
    }
    ctx->pc = 0x2EBB08u;
    SET_GPR_U32(ctx, 31, 0x2EBB10u);
    ctx->pc = 0x2EBB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB08u;
            // 0x2ebb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB10u; }
        if (ctx->pc != 0x2EBB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB10u; }
        if (ctx->pc != 0x2EBB10u) { return; }
    }
    ctx->pc = 0x2EBB10u;
label_2ebb10:
    // 0x2ebb10: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2ebb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ebb14:
    // 0x2ebb14: 0xc0a0ed8  jal         func_283B60
label_2ebb18:
    if (ctx->pc == 0x2EBB18u) {
        ctx->pc = 0x2EBB18u;
            // 0x2ebb18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB1Cu;
        goto label_2ebb1c;
    }
    ctx->pc = 0x2EBB14u;
    SET_GPR_U32(ctx, 31, 0x2EBB1Cu);
    ctx->pc = 0x2EBB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB14u;
            // 0x2ebb18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB1Cu; }
        if (ctx->pc != 0x2EBB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB1Cu; }
        if (ctx->pc != 0x2EBB1Cu) { return; }
    }
    ctx->pc = 0x2EBB1Cu;
label_2ebb1c:
    // 0x2ebb1c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2ebb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ebb20:
    // 0x2ebb20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ebb24:
    // 0x2ebb24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebb28:
    // 0x2ebb28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ebb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ebb2c:
    // 0x2ebb2c: 0x320f809  jalr        $t9
label_2ebb30:
    if (ctx->pc == 0x2EBB30u) {
        ctx->pc = 0x2EBB30u;
            // 0x2ebb30: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2EBB34u;
        goto label_2ebb34;
    }
    ctx->pc = 0x2EBB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EBB34u);
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB2Cu;
            // 0x2ebb30: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EBB34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB34u; }
            if (ctx->pc != 0x2EBB34u) { return; }
        }
        }
    }
    ctx->pc = 0x2EBB34u;
label_2ebb34:
    // 0x2ebb34: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ebb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ebb38:
    // 0x2ebb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebb3c:
    // 0x2ebb3c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2ebb40:
    if (ctx->pc == 0x2EBB40u) {
        ctx->pc = 0x2EBB40u;
            // 0x2ebb40: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x2EBB44u;
        goto label_2ebb44;
    }
    ctx->pc = 0x2EBB3Cu;
    {
        const bool branch_taken_0x2ebb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EBB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB3Cu;
            // 0x2ebb40: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb3c) {
            ctx->pc = 0x2EBB74u;
            goto label_2ebb74;
        }
    }
    ctx->pc = 0x2EBB44u;
label_2ebb44:
    // 0x2ebb44: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x2ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_2ebb48:
    // 0x2ebb48: 0xa420062c  sh          $zero, 0x62C($at)
    ctx->pc = 0x2ebb48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1580), (uint16_t)GPR_U32(ctx, 0));
label_2ebb4c:
    // 0x2ebb4c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb50:
    // 0x2ebb50: 0xa4220620  sh          $v0, 0x620($at)
    ctx->pc = 0x2ebb50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 2));
label_2ebb54:
    // 0x2ebb54: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2ebb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2ebb58:
    // 0x2ebb58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb5c:
    // 0x2ebb5c: 0xa4220622  sh          $v0, 0x622($at)
    ctx->pc = 0x2ebb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 2));
label_2ebb60:
    // 0x2ebb60: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2ebb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2ebb64:
    // 0x2ebb64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb68:
    // 0x2ebb68: 0xa4220624  sh          $v0, 0x624($at)
    ctx->pc = 0x2ebb68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 2));
label_2ebb6c:
    // 0x2ebb6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb70:
    // 0x2ebb70: 0xa4220626  sh          $v0, 0x626($at)
    ctx->pc = 0x2ebb70u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 2));
label_2ebb74:
    // 0x2ebb74: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ebb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ebb78:
    // 0x2ebb78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ebb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ebb7c:
    // 0x2ebb7c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_2ebb80:
    if (ctx->pc == 0x2EBB80u) {
        ctx->pc = 0x2EBB80u;
            // 0x2ebb80: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x2EBB84u;
        goto label_2ebb84;
    }
    ctx->pc = 0x2EBB7Cu;
    {
        const bool branch_taken_0x2ebb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EBB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB7Cu;
            // 0x2ebb80: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb7c) {
            ctx->pc = 0x2EBBC0u;
            goto label_2ebbc0;
        }
    }
    ctx->pc = 0x2EBB84u;
label_2ebb84:
    // 0x2ebb84: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x2ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2ebb88:
    // 0x2ebb88: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb8c:
    // 0x2ebb8c: 0xa4220620  sh          $v0, 0x620($at)
    ctx->pc = 0x2ebb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 2));
label_2ebb90:
    // 0x2ebb90: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x2ebb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_2ebb94:
    // 0x2ebb94: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebb98:
    // 0x2ebb98: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2ebb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2ebb9c:
    // 0x2ebb9c: 0xa4230622  sh          $v1, 0x622($at)
    ctx->pc = 0x2ebb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 3));
label_2ebba0:
    // 0x2ebba0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebba4:
    // 0x2ebba4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x2ebba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_2ebba8:
    // 0x2ebba8: 0xa4220624  sh          $v0, 0x624($at)
    ctx->pc = 0x2ebba8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 2));
label_2ebbac:
    // 0x2ebbac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebbb0:
    // 0x2ebbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebbb4:
    // 0x2ebbb4: 0xa4230626  sh          $v1, 0x626($at)
    ctx->pc = 0x2ebbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 3));
label_2ebbb8:
    // 0x2ebbb8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebbbc:
    // 0x2ebbbc: 0xa422062c  sh          $v0, 0x62C($at)
    ctx->pc = 0x2ebbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1580), (uint16_t)GPR_U32(ctx, 2));
label_2ebbc0:
    // 0x2ebbc0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2ebbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ebbc4:
    // 0x2ebbc4: 0xc0754a8  jal         func_1D52A0
label_2ebbc8:
    if (ctx->pc == 0x2EBBC8u) {
        ctx->pc = 0x2EBBC8u;
            // 0x2ebbc8: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBBCCu;
        goto label_2ebbcc;
    }
    ctx->pc = 0x2EBBC4u;
    SET_GPR_U32(ctx, 31, 0x2EBBCCu);
    ctx->pc = 0x2EBBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBC4u;
            // 0x2ebbc8: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (runtime->hasFunction(0x1D52A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBCCu; }
        if (ctx->pc != 0x2EBBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CMiniMapSymbolFPf_0x1d52a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBCCu; }
        if (ctx->pc != 0x2EBBCCu) { return; }
    }
    ctx->pc = 0x2EBBCCu;
label_2ebbcc:
    // 0x2ebbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebbd0:
    // 0x2ebbd0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2ebbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2ebbd4:
    // 0x2ebbd4: 0xc04ba14  jal         func_12E850
label_2ebbd8:
    if (ctx->pc == 0x2EBBD8u) {
        ctx->pc = 0x2EBBD8u;
            // 0x2ebbd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBDCu;
        goto label_2ebbdc;
    }
    ctx->pc = 0x2EBBD4u;
    SET_GPR_U32(ctx, 31, 0x2EBBDCu);
    ctx->pc = 0x2EBBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBD4u;
            // 0x2ebbd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBDCu; }
        if (ctx->pc != 0x2EBBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBDCu; }
        if (ctx->pc != 0x2EBBDCu) { return; }
    }
    ctx->pc = 0x2EBBDCu;
label_2ebbdc:
    // 0x2ebbdc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2ebbe0:
    // 0x2ebbe0: 0xc0752c8  jal         func_1D4B20
label_2ebbe4:
    if (ctx->pc == 0x2EBBE4u) {
        ctx->pc = 0x2EBBE4u;
            // 0x2ebbe4: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBBE8u;
        goto label_2ebbe8;
    }
    ctx->pc = 0x2EBBE0u;
    SET_GPR_U32(ctx, 31, 0x2EBBE8u);
    ctx->pc = 0x2EBBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBE0u;
            // 0x2ebbe4: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B20u;
    if (runtime->hasFunction(0x1D4B20u)) {
        auto targetFn = runtime->lookupFunction(0x1D4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBE8u; }
        if (ctx->pc != 0x2EBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolOpen__14CMiniMapSymbolFv_0x1d4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBE8u; }
        if (ctx->pc != 0x2EBBE8u) { return; }
    }
    ctx->pc = 0x2EBBE8u;
label_2ebbe8:
    // 0x2ebbe8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2ebbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2ebbec:
    // 0x2ebbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ebbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ebbf0:
    // 0x2ebbf0: 0xc0baf5c  jal         func_2EBD70
label_2ebbf4:
    if (ctx->pc == 0x2EBBF4u) {
        ctx->pc = 0x2EBBF4u;
            // 0x2ebbf4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x2EBBF8u;
        goto label_2ebbf8;
    }
    ctx->pc = 0x2EBBF0u;
    SET_GPR_U32(ctx, 31, 0x2EBBF8u);
    ctx->pc = 0x2EBBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBF0u;
            // 0x2ebbf4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD70u;
    if (runtime->hasFunction(0x2EBD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EBD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBF8u; }
        if (ctx->pc != 0x2EBBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol_0x2ebd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBF8u; }
        if (ctx->pc != 0x2EBBF8u) { return; }
    }
    ctx->pc = 0x2EBBF8u;
label_2ebbf8:
    // 0x2ebbf8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2ebbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2ebbfc:
    // 0x2ebbfc: 0xc0752f4  jal         func_1D4BD0
label_2ebc00:
    if (ctx->pc == 0x2EBC00u) {
        ctx->pc = 0x2EBC00u;
            // 0x2ebc00: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBC04u;
        goto label_2ebc04;
    }
    ctx->pc = 0x2EBBFCu;
    SET_GPR_U32(ctx, 31, 0x2EBC04u);
    ctx->pc = 0x2EBC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBFCu;
            // 0x2ebc00: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BD0u;
    if (runtime->hasFunction(0x1D4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC04u; }
        if (ctx->pc != 0x2EBC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolClose__14CMiniMapSymbolFv_0x1d4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC04u; }
        if (ctx->pc != 0x2EBC04u) { return; }
    }
    ctx->pc = 0x2EBC04u;
label_2ebc04:
    // 0x2ebc04: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2ebc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2ebc08:
    // 0x2ebc08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ebc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc0c:
    // 0x2ebc0c: 0xc0753a4  jal         func_1D4E90
label_2ebc10:
    if (ctx->pc == 0x2EBC10u) {
        ctx->pc = 0x2EBC10u;
            // 0x2ebc10: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x2EBC14u;
        goto label_2ebc14;
    }
    ctx->pc = 0x2EBC0Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC14u);
    ctx->pc = 0x2EBC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC0Cu;
            // 0x2ebc10: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E90u;
    if (runtime->hasFunction(0x1D4E90u)) {
        auto targetFn = runtime->lookupFunction(0x1D4E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC14u; }
        if (ctx->pc != 0x2EBC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2_0x1d4e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC14u; }
        if (ctx->pc != 0x2EBC14u) { return; }
    }
    ctx->pc = 0x2EBC14u;
label_2ebc14:
    // 0x2ebc14: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ebc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ebc18:
    // 0x2ebc18: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x2ebc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_2ebc1c:
    // 0x2ebc1c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2ebc20:
    if (ctx->pc == 0x2EBC20u) {
        ctx->pc = 0x2EBC24u;
        goto label_2ebc24;
    }
    ctx->pc = 0x2EBC1Cu;
    {
        const bool branch_taken_0x2ebc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc1c) {
            ctx->pc = 0x2EBC3Cu;
            goto label_2ebc3c;
        }
    }
    ctx->pc = 0x2EBC24u;
label_2ebc24:
    // 0x2ebc24: 0x8e7900c0  lw          $t9, 0xC0($s3)
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2ebc28:
    // 0x2ebc28: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2ebc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2ebc2c:
    // 0x2ebc2c: 0x320f809  jalr        $t9
label_2ebc30:
    if (ctx->pc == 0x2EBC30u) {
        ctx->pc = 0x2EBC30u;
            // 0x2ebc30: 0x266400c0  addiu       $a0, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->pc = 0x2EBC34u;
        goto label_2ebc34;
    }
    ctx->pc = 0x2EBC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EBC34u);
        ctx->pc = 0x2EBC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC2Cu;
            // 0x2ebc30: 0x266400c0  addiu       $a0, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EBC34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC34u; }
            if (ctx->pc != 0x2EBC34u) { return; }
        }
        }
    }
    ctx->pc = 0x2EBC34u;
label_2ebc34:
    // 0x2ebc34: 0xc0bad2c  jal         func_2EB4B0
label_2ebc38:
    if (ctx->pc == 0x2EBC38u) {
        ctx->pc = 0x2EBC38u;
            // 0x2ebc38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC3Cu;
        goto label_2ebc3c;
    }
    ctx->pc = 0x2EBC34u;
    SET_GPR_U32(ctx, 31, 0x2EBC3Cu);
    ctx->pc = 0x2EBC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC34u;
            // 0x2ebc38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EB4B0u;
    if (runtime->hasFunction(0x2EB4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EB4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC3Cu; }
        if (ctx->pc != 0x2EBC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawParCounter__7CSphidaFv_0x2eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC3Cu; }
        if (ctx->pc != 0x2EBC3Cu) { return; }
    }
    ctx->pc = 0x2EBC3Cu;
label_2ebc3c:
    // 0x2ebc3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ebc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ebc40:
    // 0x2ebc40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ebc40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebc44:
    // 0x2ebc44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ebc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebc48:
    // 0x2ebc48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebc4c:
    // 0x2ebc4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebc50:
    // 0x2ebc50: 0x3e00008  jr          $ra
label_2ebc54:
    if (ctx->pc == 0x2EBC54u) {
        ctx->pc = 0x2EBC54u;
            // 0x2ebc54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2EBC58u;
        goto label_fallthrough_0x2ebc50;
    }
    ctx->pc = 0x2EBC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC50u;
            // 0x2ebc54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ebc50:
    ctx->pc = 0x2EBC58u;
}
