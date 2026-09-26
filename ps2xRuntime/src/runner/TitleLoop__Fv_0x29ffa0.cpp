#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleLoop__Fv
// Address: 0x29ffa0 - 0x2a0aa4
void TitleLoop__Fv_0x29ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleLoop__Fv_0x29ffa0");
#endif

    switch (ctx->pc) {
        case 0x29ffd8u: goto label_29ffd8;
        case 0x29ffecu: goto label_29ffec;
        case 0x29fffcu: goto label_29fffc;
        case 0x2a0014u: goto label_2a0014;
        case 0x2a001cu: goto label_2a001c;
        case 0x2a0068u: goto label_2a0068;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a0090u: goto label_2a0090;
        case 0x2a00b0u: goto label_2a00b0;
        case 0x2a00f8u: goto label_2a00f8;
        case 0x2a010cu: goto label_2a010c;
        case 0x2a0170u: goto label_2a0170;
        case 0x2a017cu: goto label_2a017c;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a01a4u: goto label_2a01a4;
        case 0x2a01acu: goto label_2a01ac;
        case 0x2a01bcu: goto label_2a01bc;
        case 0x2a01c4u: goto label_2a01c4;
        case 0x2a01d4u: goto label_2a01d4;
        case 0x2a01dcu: goto label_2a01dc;
        case 0x2a01ecu: goto label_2a01ec;
        case 0x2a01f4u: goto label_2a01f4;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a0224u: goto label_2a0224;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a02d4u: goto label_2a02d4;
        case 0x2a0300u: goto label_2a0300;
        case 0x2a0328u: goto label_2a0328;
        case 0x2a0338u: goto label_2a0338;
        case 0x2a0340u: goto label_2a0340;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a03a4u: goto label_2a03a4;
        case 0x2a03c0u: goto label_2a03c0;
        case 0x2a03e4u: goto label_2a03e4;
        case 0x2a03f0u: goto label_2a03f0;
        case 0x2a03f8u: goto label_2a03f8;
        case 0x2a0404u: goto label_2a0404;
        case 0x2a0418u: goto label_2a0418;
        case 0x2a0428u: goto label_2a0428;
        case 0x2a0440u: goto label_2a0440;
        case 0x2a0450u: goto label_2a0450;
        case 0x2a0474u: goto label_2a0474;
        case 0x2a0484u: goto label_2a0484;
        case 0x2a04a4u: goto label_2a04a4;
        case 0x2a04acu: goto label_2a04ac;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04d0u: goto label_2a04d0;
        case 0x2a04d8u: goto label_2a04d8;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a0504u: goto label_2a0504;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a0524u: goto label_2a0524;
        case 0x2a0530u: goto label_2a0530;
        case 0x2a053cu: goto label_2a053c;
        case 0x2a0548u: goto label_2a0548;
        case 0x2a0550u: goto label_2a0550;
        case 0x2a0560u: goto label_2a0560;
        case 0x2a0584u: goto label_2a0584;
        case 0x2a058cu: goto label_2a058c;
        case 0x2a0608u: goto label_2a0608;
        case 0x2a0630u: goto label_2a0630;
        case 0x2a0644u: goto label_2a0644;
        case 0x2a0688u: goto label_2a0688;
        case 0x2a0690u: goto label_2a0690;
        case 0x2a0698u: goto label_2a0698;
        case 0x2a06b0u: goto label_2a06b0;
        case 0x2a06b8u: goto label_2a06b8;
        case 0x2a06c8u: goto label_2a06c8;
        case 0x2a06d4u: goto label_2a06d4;
        case 0x2a06ecu: goto label_2a06ec;
        case 0x2a0718u: goto label_2a0718;
        case 0x2a0734u: goto label_2a0734;
        case 0x2a0750u: goto label_2a0750;
        case 0x2a0768u: goto label_2a0768;
        case 0x2a07bcu: goto label_2a07bc;
        case 0x2a07c4u: goto label_2a07c4;
        case 0x2a07e0u: goto label_2a07e0;
        case 0x2a07e8u: goto label_2a07e8;
        case 0x2a07f0u: goto label_2a07f0;
        case 0x2a07f8u: goto label_2a07f8;
        case 0x2a0808u: goto label_2a0808;
        case 0x2a0818u: goto label_2a0818;
        case 0x2a0820u: goto label_2a0820;
        case 0x2a0844u: goto label_2a0844;
        case 0x2a0850u: goto label_2a0850;
        case 0x2a08a0u: goto label_2a08a0;
        case 0x2a08b0u: goto label_2a08b0;
        case 0x2a0910u: goto label_2a0910;
        case 0x2a092cu: goto label_2a092c;
        case 0x2a0938u: goto label_2a0938;
        case 0x2a0948u: goto label_2a0948;
        case 0x2a0960u: goto label_2a0960;
        case 0x2a0970u: goto label_2a0970;
        case 0x2a0980u: goto label_2a0980;
        case 0x2a098cu: goto label_2a098c;
        case 0x2a09a8u: goto label_2a09a8;
        case 0x2a09c0u: goto label_2a09c0;
        case 0x2a09ecu: goto label_2a09ec;
        case 0x2a09fcu: goto label_2a09fc;
        case 0x2a0a34u: goto label_2a0a34;
        case 0x2a0a44u: goto label_2a0a44;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0a64u: goto label_2a0a64;
        default: break;
    }

    ctx->pc = 0x29ffa0u;

    // 0x29ffa0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x29ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x29ffa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ffa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ffac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ffb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ffb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ffb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ffbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ffc0: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x29ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x29ffc4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29FFC4u;
    {
        const bool branch_taken_0x29ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFC4u;
            // 0x29ffc8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffc4) {
            ctx->pc = 0x2A0028u;
            goto label_2a0028;
        }
    }
    ctx->pc = 0x29FFCCu;
    // 0x29ffcc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x29ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29ffd0: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x29FFD0u;
    SET_GPR_U32(ctx, 31, 0x29FFD8u);
    ctx->pc = 0x29FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFD0u;
            // 0x29ffd4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFD8u; }
        if (ctx->pc != 0x29FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFD8u; }
        if (ctx->pc != 0x29FFD8u) { return; }
    }
    ctx->pc = 0x29FFD8u;
label_29ffd8:
    // 0x29ffd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29FFD8u;
    {
        const bool branch_taken_0x29ffd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFD8u;
            // 0x29ffdc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffd8) {
            ctx->pc = 0x2A0028u;
            goto label_2a0028;
        }
    }
    ctx->pc = 0x29FFE0u;
    // 0x29ffe0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x29ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29ffe4: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x29FFE4u;
    SET_GPR_U32(ctx, 31, 0x29FFECu);
    ctx->pc = 0x29FFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFE4u;
            // 0x29ffe8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFECu; }
        if (ctx->pc != 0x29FFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFECu; }
        if (ctx->pc != 0x29FFECu) { return; }
    }
    ctx->pc = 0x29FFECu;
label_29ffec:
    // 0x29ffec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FFECu;
    {
        const bool branch_taken_0x29ffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ffec) {
            ctx->pc = 0x2A0028u;
            goto label_2a0028;
        }
    }
    ctx->pc = 0x29FFF4u;
    // 0x29fff4: 0xc05188c  jal         func_146230
    ctx->pc = 0x29FFF4u;
    SET_GPR_U32(ctx, 31, 0x29FFFCu);
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFFCu; }
        if (ctx->pc != 0x29FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFFCu; }
        if (ctx->pc != 0x29FFFCu) { return; }
    }
    ctx->pc = 0x29FFFCu;
label_29fffc:
    // 0x29fffc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x29fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0004: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0004u;
    {
        const bool branch_taken_0x2a0004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0004u;
            // 0x2a0008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0004) {
            ctx->pc = 0x2A0020u;
            goto label_2a0020;
        }
    }
    ctx->pc = 0x2A000Cu;
    // 0x2a000c: 0xc0a6378  jal         func_298DE0
    ctx->pc = 0x2A000Cu;
    SET_GPR_U32(ctx, 31, 0x2A0014u);
    ctx->pc = 0x2A0010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A000Cu;
            // 0x2a0010: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0014u; }
        if (ctx->pc != 0x2A0014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0014u; }
        if (ctx->pc != 0x2A0014u) { return; }
    }
    ctx->pc = 0x2A0014u;
label_2a0014:
    // 0x2a0014: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A0014u;
    SET_GPR_U32(ctx, 31, 0x2A001Cu);
    ctx->pc = 0x2A0018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0014u;
            // 0x2a0018: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A001Cu; }
        if (ctx->pc != 0x2A001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A001Cu; }
        if (ctx->pc != 0x2A001Cu) { return; }
    }
    ctx->pc = 0x2A001Cu;
label_2a001c:
    // 0x2a001c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0020:
    // 0x2a0020: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x2A0020u;
    {
        const bool branch_taken_0x2a0020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0020u;
            // 0x2a0024: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0020) {
            ctx->pc = 0x2A0A84u;
            goto label_2a0a84;
        }
    }
    ctx->pc = 0x2A0028u;
label_2a0028:
    // 0x2a0028: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a002c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a002cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0038: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x2a0038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a003c: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A003Cu;
    {
        const bool branch_taken_0x2a003c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A003Cu;
            // 0x2a0040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a003c) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A0044u;
    // 0x2a0044: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a0044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a0048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a004c: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x2a004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x2a0050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0058: 0x400008  jr          $v0
    ctx->pc = 0x2A0058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0060u: goto label_2a0060;
            case 0x2A0088u: goto label_2a0088;
            case 0x2A00A8u: goto label_2a00a8;
            case 0x2A00F0u: goto label_2a00f0;
            case 0x2A02CCu: goto label_2a02cc;
            case 0x2A03B8u: goto label_2a03b8;
            case 0x2A03E4u: goto label_2a03e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0060u;
label_2a0060:
    // 0x2a0060: 0xc0a8ab4  jal         func_2A2AD0
    ctx->pc = 0x2A0060u;
    SET_GPR_U32(ctx, 31, 0x2A0068u);
    ctx->pc = 0x2A2AD0u;
    if (runtime->hasFunction(0x2A2AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0068u; }
        if (ctx->pc != 0x2A0068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckKey__Fv_0x2a2ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0068u; }
        if (ctx->pc != 0x2A0068u) { return; }
    }
    ctx->pc = 0x2A0068u;
label_2a0068:
    // 0x2a0068: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x2A0068u;
    {
        const bool branch_taken_0x2a0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0068) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A0070u;
    // 0x2a0070: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x2A0070u;
    SET_GPR_U32(ctx, 31, 0x2A0078u);
    ctx->pc = 0x2A0074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0070u;
            // 0x2a0074: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0078u; }
        if (ctx->pc != 0x2A0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0078u; }
        if (ctx->pc != 0x2A0078u) { return; }
    }
    ctx->pc = 0x2A0078u;
label_2a0078:
    // 0x2a0078: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a007c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a0080: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2A0080u;
    {
        const bool branch_taken_0x2a0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0080u;
            // 0x2a0084: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0080) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A0088u;
label_2a0088:
    // 0x2a0088: 0xc0a8c1c  jal         func_2A3070
    ctx->pc = 0x2A0088u;
    SET_GPR_U32(ctx, 31, 0x2A0090u);
    ctx->pc = 0x2A3070u;
    if (runtime->hasFunction(0x2A3070u)) {
        auto targetFn = runtime->lookupFunction(0x2A3070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0090u; }
        if (ctx->pc != 0x2A0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleCopyRightStep__Fv_0x2a3070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0090u; }
        if (ctx->pc != 0x2A0090u) { return; }
    }
    ctx->pc = 0x2A0090u;
label_2a0090:
    // 0x2a0090: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2A0090u;
    {
        const bool branch_taken_0x2a0090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0090) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A0098u;
    // 0x2a0098: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a009c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a00a0: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2A00A0u;
    {
        const bool branch_taken_0x2a00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00A0u;
            // 0x2a00a4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00a0) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A00A8u;
label_2a00a8:
    // 0x2a00a8: 0xc0a8324  jal         func_2A0C90
    ctx->pc = 0x2A00A8u;
    SET_GPR_U32(ctx, 31, 0x2A00B0u);
    ctx->pc = 0x2A0C90u;
    if (runtime->hasFunction(0x2A0C90u)) {
        auto targetFn = runtime->lookupFunction(0x2A0C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00B0u; }
        if (ctx->pc != 0x2A00B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RushMovieKey__Fv_0x2a0c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00B0u; }
        if (ctx->pc != 0x2A00B0u) { return; }
    }
    ctx->pc = 0x2A00B0u;
label_2a00b0:
    // 0x2a00b0: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2A00B0u;
    {
        const bool branch_taken_0x2a00b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a00b0) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A00B8u;
    // 0x2a00b8: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a00bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a00c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a00c4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A00C4u;
    {
        const bool branch_taken_0x2a00c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A00C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00C4u;
            // 0x2a00c8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00c4) {
            ctx->pc = 0x2A00DCu;
            goto label_2a00dc;
        }
    }
    ctx->pc = 0x2A00CCu;
    // 0x2a00cc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a00d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a00d4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a00d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2a00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2a00dc:
    // 0x2a00dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a00e0: 0x144300c0  bne         $v0, $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2A00E0u;
    {
        const bool branch_taken_0x2a00e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a00e0) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A00E8u;
    // 0x2a00e8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2A00E8u;
    {
        const bool branch_taken_0x2a00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00E8u;
            // 0x2a00ec: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00e8) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A00F0u;
label_2a00f0:
    // 0x2a00f0: 0xc0a8488  jal         func_2A1220
    ctx->pc = 0x2A00F0u;
    SET_GPR_U32(ctx, 31, 0x2A00F8u);
    ctx->pc = 0x2A1220u;
    if (runtime->hasFunction(0x2A1220u)) {
        auto targetFn = runtime->lookupFunction(0x2A1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00F8u; }
        if (ctx->pc != 0x2A00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleModeKey__Fv_0x2a1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00F8u; }
        if (ctx->pc != 0x2A00F8u) { return; }
    }
    ctx->pc = 0x2A00F8u;
label_2a00f8:
    // 0x2a00f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A00FCu;
    {
        const bool branch_taken_0x2a00fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00FCu;
            // 0x2a0100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00fc) {
            ctx->pc = 0x2A0110u;
            goto label_2a0110;
        }
    }
    ctx->pc = 0x2A0104u;
    // 0x2a0104: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x2A0104u;
    SET_GPR_U32(ctx, 31, 0x2A010Cu);
    ctx->pc = 0x2A0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0104u;
            // 0x2a0108: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A010Cu; }
        if (ctx->pc != 0x2A010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A010Cu; }
        if (ctx->pc != 0x2A010Cu) { return; }
    }
    ctx->pc = 0x2A010Cu;
label_2a010c:
    // 0x2a010c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0110:
    // 0x2a0110: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0110u;
    {
        const bool branch_taken_0x2a0110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0110) {
            ctx->pc = 0x2A011Cu;
            goto label_2a011c;
        }
    }
    ctx->pc = 0x2A0118u;
    // 0x2a0118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a0118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a011c:
    // 0x2a011c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0120: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0120u;
    {
        const bool branch_taken_0x2a0120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0120u;
            // 0x2a0124: 0x2602fffd  addiu       $v0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0120) {
            ctx->pc = 0x2A0140u;
            goto label_2a0140;
        }
    }
    ctx->pc = 0x2A0128u;
    // 0x2a0128: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a012c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0130: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0134: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a0138: 0xa4206256  sh          $zero, 0x6256($at)
    ctx->pc = 0x2a0138u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25174), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a013c: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_2a0140:
    // 0x2a0140: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a0140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0144: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0144u;
    {
        const bool branch_taken_0x2a0144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0144u;
            // 0x2a0148: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0144) {
            ctx->pc = 0x2A0154u;
            goto label_2a0154;
        }
    }
    ctx->pc = 0x2A014Cu;
    // 0x2a014c: 0x16020045  bne         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A014Cu;
    {
        const bool branch_taken_0x2a014c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A014Cu;
            // 0x2a0150: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a014c) {
            ctx->pc = 0x2A0264u;
            goto label_2a0264;
        }
    }
    ctx->pc = 0x2A0154u;
label_2a0154:
    // 0x2a0154: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a0154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a0158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a015c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0160: 0x16020033  bne         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A0160u;
    {
        const bool branch_taken_0x2a0160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0160u;
            // 0x2a0164: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0160) {
            ctx->pc = 0x2A0230u;
            goto label_2a0230;
        }
    }
    ctx->pc = 0x2A0168u;
    // 0x2a0168: 0xc064228  jal         func_1908A0
    ctx->pc = 0x2A0168u;
    SET_GPR_U32(ctx, 31, 0x2A0170u);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0170u; }
        if (ctx->pc != 0x2A0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0170u; }
        if (ctx->pc != 0x2A0170u) { return; }
    }
    ctx->pc = 0x2A0170u;
label_2a0170:
    // 0x2a0170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a0170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0174: 0xc0686e0  jal         func_1A1B80
    ctx->pc = 0x2A0174u;
    SET_GPR_U32(ctx, 31, 0x2A017Cu);
    ctx->pc = 0x2A0178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0174u;
            // 0x2a0178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A017Cu; }
        if (ctx->pc != 0x2A017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A017Cu; }
        if (ctx->pc != 0x2A017Cu) { return; }
    }
    ctx->pc = 0x2A017Cu;
label_2a017c:
    // 0x2a017c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0180: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a0184: 0xac20d648  sw          $zero, -0x29B8($at)
    ctx->pc = 0x2a0184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 0));
    // 0x2a0188: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a018c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A018Cu;
    SET_GPR_U32(ctx, 31, 0x2A0194u);
    ctx->pc = 0x2A0190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A018Cu;
            // 0x2a0190: 0xac22d618  sw          $v0, -0x29E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0194u; }
        if (ctx->pc != 0x2A0194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0194u; }
        if (ctx->pc != 0x2A0194u) { return; }
    }
    ctx->pc = 0x2A0194u;
label_2a0194:
    // 0x2a0194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a019c: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A019Cu;
    SET_GPR_U32(ctx, 31, 0x2A01A4u);
    ctx->pc = 0x2A01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A019Cu;
            // 0x2a01a0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01A4u; }
        if (ctx->pc != 0x2A01A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01A4u; }
        if (ctx->pc != 0x2A01A4u) { return; }
    }
    ctx->pc = 0x2A01A4u;
label_2a01a4:
    // 0x2a01a4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A01A4u;
    SET_GPR_U32(ctx, 31, 0x2A01ACu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01ACu; }
        if (ctx->pc != 0x2A01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01ACu; }
        if (ctx->pc != 0x2A01ACu) { return; }
    }
    ctx->pc = 0x2A01ACu;
label_2a01ac:
    // 0x2a01ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a01b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a01b4: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A01B4u;
    SET_GPR_U32(ctx, 31, 0x2A01BCu);
    ctx->pc = 0x2A01B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01B4u;
            // 0x2a01b8: 0x24060085  addiu       $a2, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01BCu; }
        if (ctx->pc != 0x2A01BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01BCu; }
        if (ctx->pc != 0x2A01BCu) { return; }
    }
    ctx->pc = 0x2A01BCu;
label_2a01bc:
    // 0x2a01bc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A01BCu;
    SET_GPR_U32(ctx, 31, 0x2A01C4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01C4u; }
        if (ctx->pc != 0x2A01C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01C4u; }
        if (ctx->pc != 0x2A01C4u) { return; }
    }
    ctx->pc = 0x2A01C4u;
label_2a01c4:
    // 0x2a01c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a01c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a01cc: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A01CCu;
    SET_GPR_U32(ctx, 31, 0x2A01D4u);
    ctx->pc = 0x2A01D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01CCu;
            // 0x2a01d0: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01D4u; }
        if (ctx->pc != 0x2A01D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01D4u; }
        if (ctx->pc != 0x2A01D4u) { return; }
    }
    ctx->pc = 0x2A01D4u;
label_2a01d4:
    // 0x2a01d4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A01D4u;
    SET_GPR_U32(ctx, 31, 0x2A01DCu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01DCu; }
        if (ctx->pc != 0x2A01DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01DCu; }
        if (ctx->pc != 0x2A01DCu) { return; }
    }
    ctx->pc = 0x2A01DCu;
label_2a01dc:
    // 0x2a01dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a01dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a01e4: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A01E4u;
    SET_GPR_U32(ctx, 31, 0x2A01ECu);
    ctx->pc = 0x2A01E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01E4u;
            // 0x2a01e8: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01ECu; }
        if (ctx->pc != 0x2A01ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01ECu; }
        if (ctx->pc != 0x2A01ECu) { return; }
    }
    ctx->pc = 0x2A01ECu;
label_2a01ec:
    // 0x2a01ec: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A01ECu;
    SET_GPR_U32(ctx, 31, 0x2A01F4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01F4u; }
        if (ctx->pc != 0x2A01F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01F4u; }
        if (ctx->pc != 0x2A01F4u) { return; }
    }
    ctx->pc = 0x2A01F4u;
label_2a01f4:
    // 0x2a01f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a01fc: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A01FCu;
    SET_GPR_U32(ctx, 31, 0x2A0204u);
    ctx->pc = 0x2A0200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01FCu;
            // 0x2a0200: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0204u; }
        if (ctx->pc != 0x2A0204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0204u; }
        if (ctx->pc != 0x2A0204u) { return; }
    }
    ctx->pc = 0x2A0204u;
label_2a0204:
    // 0x2a0204: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a0208: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2a0208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2a020c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A020Cu;
    {
        const bool branch_taken_0x2a020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A020Cu;
            // 0x2a0210: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a020c) {
            ctx->pc = 0x2A0234u;
            goto label_2a0234;
        }
    }
    ctx->pc = 0x2A0214u;
    // 0x2a0214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0218: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a021c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A021Cu;
    SET_GPR_U32(ctx, 31, 0x2A0224u);
    ctx->pc = 0x2A0220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A021Cu;
            // 0x2a0220: 0xac22d648  sw          $v0, -0x29B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0224u; }
        if (ctx->pc != 0x2A0224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0224u; }
        if (ctx->pc != 0x2A0224u) { return; }
    }
    ctx->pc = 0x2A0224u;
label_2a0224:
    // 0x2a0224: 0xdf859988  ld          $a1, -0x6678($gp)
    ctx->pc = 0x2a0224u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294941064)));
    // 0x2a0228: 0xc067adc  jal         func_19EB70
    ctx->pc = 0x2A0228u;
    SET_GPR_U32(ctx, 31, 0x2A0230u);
    ctx->pc = 0x2A022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0228u;
            // 0x2a022c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB70u;
    if (runtime->hasFunction(0x19EB70u)) {
        auto targetFn = runtime->lookupFunction(0x19EB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0230u; }
        if (ctx->pc != 0x2A0230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCostumeBit__16CUserDataManagerFUl_0x19eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0230u; }
        if (ctx->pc != 0x2A0230u) { return; }
    }
    ctx->pc = 0x2A0230u;
label_2a0230:
    // 0x2a0230: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a0234:
    // 0x2a0234: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0234u;
    {
        const bool branch_taken_0x2a0234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0234u;
            // 0x2a0238: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0234) {
            ctx->pc = 0x2A024Cu;
            goto label_2a024c;
        }
    }
    ctx->pc = 0x2A023Cu;
    // 0x2a023c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0240: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0244: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2a0244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x2a0248: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a0248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a024c:
    // 0x2a024c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A024Cu;
    {
        const bool branch_taken_0x2a024c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A024Cu;
            // 0x2a0250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a024c) {
            ctx->pc = 0x2A0260u;
            goto label_2a0260;
        }
    }
    ctx->pc = 0x2A0254u;
    // 0x2a0254: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2a0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0258: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a025c: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
label_2a0260:
    // 0x2a0260: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a0264:
    // 0x2a0264: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0264u;
    {
        const bool branch_taken_0x2a0264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0264u;
            // 0x2a0268: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0264) {
            ctx->pc = 0x2A0280u;
            goto label_2a0280;
        }
    }
    ctx->pc = 0x2A026Cu;
    // 0x2a026c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0270: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a0270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0278: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a0278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a027c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a0280:
    // 0x2a0280: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A0280u;
    {
        const bool branch_taken_0x2a0280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0280u;
            // 0x2a0284: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0280) {
            ctx->pc = 0x2A02B0u;
            goto label_2a02b0;
        }
    }
    ctx->pc = 0x2A0288u;
    // 0x2a0288: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a028c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2a028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a0290: 0xac20d648  sw          $zero, -0x29B8($at)
    ctx->pc = 0x2a0290u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 0));
    // 0x2a0294: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a0294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0298: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a029c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a029cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02a0: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2a02a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x2a02a4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a02a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a02ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a02b0:
    // 0x2a02b0: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A02B0u;
    {
        const bool branch_taken_0x2a02b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A02B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02B0u;
            // 0x2a02b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02b0) {
            ctx->pc = 0x2A02BCu;
            goto label_2a02bc;
        }
    }
    ctx->pc = 0x2A02B8u;
    // 0x2a02b8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2a02b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a02bc:
    // 0x2a02bc: 0x16020049  bne         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A02BCu;
    {
        const bool branch_taken_0x2a02bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a02bc) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A02C4u;
    // 0x2a02c4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A02C4u;
    {
        const bool branch_taken_0x2a02c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A02C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02C4u;
            // 0x2a02c8: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02c4) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A02CCu;
label_2a02cc:
    // 0x2a02cc: 0xc08cffc  jal         func_233FF0
    ctx->pc = 0x2A02CCu;
    SET_GPR_U32(ctx, 31, 0x2A02D4u);
    ctx->pc = 0x233FF0u;
    if (runtime->hasFunction(0x233FF0u)) {
        auto targetFn = runtime->lookupFunction(0x233FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A02D4u; }
        if (ctx->pc != 0x2A02D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainKey__Fv_0x233ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A02D4u; }
        if (ctx->pc != 0x2A02D4u) { return; }
    }
    ctx->pc = 0x2A02D4u;
label_2a02d4:
    // 0x2a02d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a02d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02d8: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A02D8u;
    {
        const bool branch_taken_0x2a02d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02d8) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A02E0u;
    // 0x2a02e0: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a02e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a02e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a02ec: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A02ECu;
    {
        const bool branch_taken_0x2a02ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a02ec) {
            ctx->pc = 0x2A0340u;
            goto label_2a0340;
        }
    }
    ctx->pc = 0x2A02F4u;
    // 0x2a02f4: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a02f8: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A02F8u;
    SET_GPR_U32(ctx, 31, 0x2A0300u);
    ctx->pc = 0x2A02FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02F8u;
            // 0x2a02fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0300u; }
        if (ctx->pc != 0x2A0300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0300u; }
        if (ctx->pc != 0x2A0300u) { return; }
    }
    ctx->pc = 0x2A0300u;
label_2a0300:
    // 0x2a0300: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0304: 0x8f85997c  lw          $a1, -0x6684($gp)
    ctx->pc = 0x2a0304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0308: 0x8c236124  lw          $v1, 0x6124($at)
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a030c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0310: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2a0314: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a031c: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a0320: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2A0320u;
    SET_GPR_U32(ctx, 31, 0x2A0328u);
    ctx->pc = 0x2A0324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0320u;
            // 0x2a0324: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0328u; }
        if (ctx->pc != 0x2A0328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0328u; }
        if (ctx->pc != 0x2A0328u) { return; }
    }
    ctx->pc = 0x2A0328u;
label_2a0328:
    // 0x2a0328: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a032c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0330: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2A0330u;
    SET_GPR_U32(ctx, 31, 0x2A0338u);
    ctx->pc = 0x2A0334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0330u;
            // 0x2a0334: 0x24450088  addiu       $a1, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0338u; }
        if (ctx->pc != 0x2A0338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0338u; }
        if (ctx->pc != 0x2A0338u) { return; }
    }
    ctx->pc = 0x2A0338u;
label_2a0338:
    // 0x2a0338: 0xc0a9a10  jal         func_2A6840
    ctx->pc = 0x2A0338u;
    SET_GPR_U32(ctx, 31, 0x2A0340u);
    ctx->pc = 0x2A033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0338u;
            // 0x2a033c: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6840u;
    if (runtime->hasFunction(0x2A6840u)) {
        auto targetFn = runtime->lookupFunction(0x2A6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0340u; }
        if (ctx->pc != 0x2A0340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBgm__6CSceneFv_0x2a6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0340u; }
        if (ctx->pc != 0x2A0340u) { return; }
    }
    ctx->pc = 0x2A0340u;
label_2a0340:
    // 0x2a0340: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0344: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a0344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a0348: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
    // 0x2a034c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A034Cu;
    {
        const bool branch_taken_0x2a034c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A034Cu;
            // 0x2a0350: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a034c) {
            ctx->pc = 0x2A035Cu;
            goto label_2a035c;
        }
    }
    ctx->pc = 0x2A0354u;
    // 0x2a0354: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A0354u;
    {
        const bool branch_taken_0x2a0354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0354u;
            // 0x2a0358: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0354) {
            ctx->pc = 0x2A03B0u;
            goto label_2a03b0;
        }
    }
    ctx->pc = 0x2A035Cu;
label_2a035c:
    // 0x2a035c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a0360: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0360u;
    {
        const bool branch_taken_0x2a0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0360u;
            // 0x2a0364: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0360) {
            ctx->pc = 0x2A0370u;
            goto label_2a0370;
        }
    }
    ctx->pc = 0x2A0368u;
    // 0x2a0368: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0368u;
    {
        const bool branch_taken_0x2a0368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0368u;
            // 0x2a036c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0368) {
            ctx->pc = 0x2A03B0u;
            goto label_2a03b0;
        }
    }
    ctx->pc = 0x2A0370u;
label_2a0370:
    // 0x2a0370: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0370u;
    {
        const bool branch_taken_0x2a0370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0370) {
            ctx->pc = 0x2A0380u;
            goto label_2a0380;
        }
    }
    ctx->pc = 0x2A0378u;
    // 0x2a0378: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A0378u;
    {
        const bool branch_taken_0x2a0378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0378u;
            // 0x2a037c: 0x2411000b  addiu       $s1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0378) {
            ctx->pc = 0x2A03B0u;
            goto label_2a03b0;
        }
    }
    ctx->pc = 0x2A0380u;
label_2a0380:
    // 0x2a0380: 0xc064220  jal         func_190880
    ctx->pc = 0x2A0380u;
    SET_GPR_U32(ctx, 31, 0x2A0388u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0388u; }
        if (ctx->pc != 0x2A0388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0388u; }
        if (ctx->pc != 0x2A0388u) { return; }
    }
    ctx->pc = 0x2A0388u;
label_2a0388:
    // 0x2a0388: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a038c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a0390: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2a0390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2a0394: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x2a0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a0398: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a039c: 0xc049c18  jal         func_127060
    ctx->pc = 0x2A039Cu;
    SET_GPR_U32(ctx, 31, 0x2A03A4u);
    ctx->pc = 0x2A03A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A039Cu;
            // 0x2a03a0: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03A4u; }
        if (ctx->pc != 0x2A03A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03A4u; }
        if (ctx->pc != 0x2A03A4u) { return; }
    }
    ctx->pc = 0x2A03A4u;
label_2a03a4:
    // 0x2a03a4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a03a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a03ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a03acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2a03b0:
    // 0x2a03b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A03B0u;
    {
        const bool branch_taken_0x2a03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A03B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03B0u;
            // 0x2a03b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03b0) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A03B8u;
label_2a03b8:
    // 0x2a03b8: 0xc0a8ea0  jal         func_2A3A80
    ctx->pc = 0x2A03B8u;
    SET_GPR_U32(ctx, 31, 0x2A03C0u);
    ctx->pc = 0x2A3A80u;
    if (runtime->hasFunction(0x2A3A80u)) {
        auto targetFn = runtime->lookupFunction(0x2A3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03C0u; }
        if (ctx->pc != 0x2A03C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleHDDInstallKey__Fv_0x2a3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03C0u; }
        if (ctx->pc != 0x2A03C0u) { return; }
    }
    ctx->pc = 0x2A03C0u;
label_2a03c0:
    // 0x2a03c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a03c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A03C4u;
    {
        const bool branch_taken_0x2a03c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03c4) {
            ctx->pc = 0x2A03E4u;
            goto label_2a03e4;
        }
    }
    ctx->pc = 0x2A03CCu;
    // 0x2a03cc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a03d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a03d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a03d8: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a03dc: 0xc0a9a10  jal         func_2A6840
    ctx->pc = 0x2A03DCu;
    SET_GPR_U32(ctx, 31, 0x2A03E4u);
    ctx->pc = 0x2A03E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03DCu;
            // 0x2a03e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6840u;
    if (runtime->hasFunction(0x2A6840u)) {
        auto targetFn = runtime->lookupFunction(0x2A6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03E4u; }
        if (ctx->pc != 0x2A03E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBgm__6CSceneFv_0x2a6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03E4u; }
        if (ctx->pc != 0x2A03E4u) { return; }
    }
    ctx->pc = 0x2A03E4u;
label_2a03e4:
    // 0x2a03e4: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a03e8: 0xc05f664  jal         func_17D990
    ctx->pc = 0x2A03E8u;
    SET_GPR_U32(ctx, 31, 0x2A03F0u);
    ctx->pc = 0x2A03ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03E8u;
            // 0x2a03ec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03F0u; }
        if (ctx->pc != 0x2A03F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03F0u; }
        if (ctx->pc != 0x2A03F0u) { return; }
    }
    ctx->pc = 0x2A03F0u;
label_2a03f0:
    // 0x2a03f0: 0xc0a82ac  jal         func_2A0AB0
    ctx->pc = 0x2A03F0u;
    SET_GPR_U32(ctx, 31, 0x2A03F8u);
    ctx->pc = 0x2A0AB0u;
    if (runtime->hasFunction(0x2A0AB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A0AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03F8u; }
        if (ctx->pc != 0x2A03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleDraw__Fv_0x2a0ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03F8u; }
        if (ctx->pc != 0x2A03F8u) { return; }
    }
    ctx->pc = 0x2A03F8u;
label_2a03f8:
    // 0x2a03f8: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a03fc: 0xc05f7b4  jal         func_17DED0
    ctx->pc = 0x2A03FCu;
    SET_GPR_U32(ctx, 31, 0x2A0404u);
    ctx->pc = 0x2A0400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03FCu;
            // 0x2a0400: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0404u; }
        if (ctx->pc != 0x2A0404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0404u; }
        if (ctx->pc != 0x2A0404u) { return; }
    }
    ctx->pc = 0x2A0404u;
label_2a0404:
    // 0x2a0404: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2a0404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2a0408: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0408u;
    {
        const bool branch_taken_0x2a0408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0408) {
            ctx->pc = 0x2A0418u;
            goto label_2a0418;
        }
    }
    ctx->pc = 0x2A0410u;
    // 0x2a0410: 0xc0a7c14  jal         func_29F050
    ctx->pc = 0x2A0410u;
    SET_GPR_U32(ctx, 31, 0x2A0418u);
    ctx->pc = 0x29F050u;
    if (runtime->hasFunction(0x29F050u)) {
        auto targetFn = runtime->lookupFunction(0x29F050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0418u; }
        if (ctx->pc != 0x2A0418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        title_init_rand__Fv_0x29f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0418u; }
        if (ctx->pc != 0x2A0418u) { return; }
    }
    ctx->pc = 0x2A0418u;
label_2a0418:
    // 0x2a0418: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2A0418u;
    {
        const bool branch_taken_0x2a0418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0418u;
            // 0x2a041c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0418) {
            ctx->pc = 0x2A0454u;
            goto label_2a0454;
        }
    }
    ctx->pc = 0x2A0420u;
    // 0x2a0420: 0xc08cf24  jal         func_233C90
    ctx->pc = 0x2A0420u;
    SET_GPR_U32(ctx, 31, 0x2A0428u);
    ctx->pc = 0x233C90u;
    if (runtime->hasFunction(0x233C90u)) {
        auto targetFn = runtime->lookupFunction(0x233C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0428u; }
        if (ctx->pc != 0x2A0428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainExit__Fv_0x233c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0428u; }
        if (ctx->pc != 0x2A0428u) { return; }
    }
    ctx->pc = 0x2A0428u;
label_2a0428:
    // 0x2a0428: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a0428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a042c: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x2a042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x2a0430: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2a0430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2a0434: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2a0434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a0438: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x2A0438u;
    SET_GPR_U32(ctx, 31, 0x2A0440u);
    ctx->pc = 0x2A043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0438u;
            // 0x2a043c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0440u; }
        if (ctx->pc != 0x2A0440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0440u; }
        if (ctx->pc != 0x2A0440u) { return; }
    }
    ctx->pc = 0x2A0440u;
label_2a0440:
    // 0x2a0440: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a0440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a0444: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2a0448: 0xc052d44  jal         func_14B510
    ctx->pc = 0x2A0448u;
    SET_GPR_U32(ctx, 31, 0x2A0450u);
    ctx->pc = 0x2A044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0448u;
            // 0x2a044c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0450u; }
        if (ctx->pc != 0x2A0450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0450u; }
        if (ctx->pc != 0x2A0450u) { return; }
    }
    ctx->pc = 0x2A0450u;
label_2a0450:
    // 0x2a0450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0454:
    // 0x2a0454: 0x16240045  bne         $s1, $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A0454u;
    {
        const bool branch_taken_0x2a0454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0454u;
            // 0x2a0458: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0454) {
            ctx->pc = 0x2A056Cu;
            goto label_2a056c;
        }
    }
    ctx->pc = 0x2A045Cu;
    // 0x2a045c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0460: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a0464: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a0464u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a0468: 0xac24906c  sw          $a0, -0x6F94($at)
    ctx->pc = 0x2a0468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 4));
    // 0x2a046c: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A046Cu;
    SET_GPR_U32(ctx, 31, 0x2A0474u);
    ctx->pc = 0x2A0470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A046Cu;
            // 0x2a0470: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0474u; }
        if (ctx->pc != 0x2A0474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0474u; }
        if (ctx->pc != 0x2A0474u) { return; }
    }
    ctx->pc = 0x2A0474u;
label_2a0474:
    // 0x2a0474: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a0474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a047c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A047Cu;
    SET_GPR_U32(ctx, 31, 0x2A0484u);
    ctx->pc = 0x2A0480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A047Cu;
            // 0x2a0480: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0484u; }
        if (ctx->pc != 0x2A0484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0484u; }
        if (ctx->pc != 0x2A0484u) { return; }
    }
    ctx->pc = 0x2A0484u;
label_2a0484:
    // 0x2a0484: 0x240203f2  addiu       $v0, $zero, 0x3F2
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
    // 0x2a0488: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a048c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2a048cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2a0490: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0494: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a0498: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2a0498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2a049c: 0xc064240  jal         func_190900
    ctx->pc = 0x2A049Cu;
    SET_GPR_U32(ctx, 31, 0x2A04A4u);
    ctx->pc = 0x2A04A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A049Cu;
            // 0x2a04a0: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04A4u; }
        if (ctx->pc != 0x2A04A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04A4u; }
        if (ctx->pc != 0x2A04A4u) { return; }
    }
    ctx->pc = 0x2A04A4u;
label_2a04a4:
    // 0x2a04a4: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x2A04A4u;
    SET_GPR_U32(ctx, 31, 0x2A04ACu);
    ctx->pc = 0x2A04A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04A4u;
            // 0x2a04a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04ACu; }
        if (ctx->pc != 0x2A04ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04ACu; }
        if (ctx->pc != 0x2A04ACu) { return; }
    }
    ctx->pc = 0x2A04ACu;
label_2a04ac:
    // 0x2a04ac: 0xc064220  jal         func_190880
    ctx->pc = 0x2A04ACu;
    SET_GPR_U32(ctx, 31, 0x2A04B4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04B4u; }
        if (ctx->pc != 0x2A04B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04B4u; }
        if (ctx->pc != 0x2A04B4u) { return; }
    }
    ctx->pc = 0x2A04B4u;
label_2a04b4:
    // 0x2a04b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a04b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a04bc: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2a04bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2a04c0: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a04c4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a04c8: 0xc049c18  jal         func_127060
    ctx->pc = 0x2A04C8u;
    SET_GPR_U32(ctx, 31, 0x2A04D0u);
    ctx->pc = 0x2A04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04C8u;
            // 0x2a04cc: 0x24450048  addiu       $a1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04D0u; }
        if (ctx->pc != 0x2A04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04D0u; }
        if (ctx->pc != 0x2A04D0u) { return; }
    }
    ctx->pc = 0x2A04D0u;
label_2a04d0:
    // 0x2a04d0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2A04D0u;
    SET_GPR_U32(ctx, 31, 0x2A04D8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04D8u; }
        if (ctx->pc != 0x2A04D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04D8u; }
        if (ctx->pc != 0x2A04D8u) { return; }
    }
    ctx->pc = 0x2A04D8u;
label_2a04d8:
    // 0x2a04d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a04d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a04dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a04dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04e0: 0x8c26d630  lw          $a2, -0x29D0($at)
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x2a04e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a04e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04e8: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A04E8u;
    SET_GPR_U32(ctx, 31, 0x2A04F0u);
    ctx->pc = 0x2A04ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04E8u;
            // 0x2a04ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04F0u; }
        if (ctx->pc != 0x2A04F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A04F0u; }
        if (ctx->pc != 0x2A04F0u) { return; }
    }
    ctx->pc = 0x2A04F0u;
label_2a04f0:
    // 0x2a04f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a04f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a04f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04f8: 0x8c26d634  lw          $a2, -0x29CC($at)
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x2a04fc: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A04FCu;
    SET_GPR_U32(ctx, 31, 0x2A0504u);
    ctx->pc = 0x2A0500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04FCu;
            // 0x2a0500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0504u; }
        if (ctx->pc != 0x2A0504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0504u; }
        if (ctx->pc != 0x2A0504u) { return; }
    }
    ctx->pc = 0x2A0504u;
label_2a0504:
    // 0x2a0504: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a050c: 0x8c26d638  lw          $a2, -0x29C8($at)
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
    // 0x2a0510: 0xc067558  jal         func_19D560
    ctx->pc = 0x2A0510u;
    SET_GPR_U32(ctx, 31, 0x2A0518u);
    ctx->pc = 0x2A0514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0510u;
            // 0x2a0514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0518u; }
        if (ctx->pc != 0x2A0518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0518u; }
        if (ctx->pc != 0x2A0518u) { return; }
    }
    ctx->pc = 0x2A0518u;
label_2a0518:
    // 0x2a0518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a051c: 0xc066e80  jal         func_19BA00
    ctx->pc = 0x2A051Cu;
    SET_GPR_U32(ctx, 31, 0x2A0524u);
    ctx->pc = 0x2A0520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A051Cu;
            // 0x2a0520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA00u;
    if (runtime->hasFunction(0x19BA00u)) {
        auto targetFn = runtime->lookupFunction(0x19BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0524u; }
        if (ctx->pc != 0x2A0524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeavePartyMember__16CUserDataManagerFi_0x19ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0524u; }
        if (ctx->pc != 0x2A0524u) { return; }
    }
    ctx->pc = 0x2A0524u;
label_2a0524:
    // 0x2a0524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0528: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x2A0528u;
    SET_GPR_U32(ctx, 31, 0x2A0530u);
    ctx->pc = 0x2A052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0528u;
            // 0x2a052c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0530u; }
        if (ctx->pc != 0x2A0530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0530u; }
        if (ctx->pc != 0x2A0530u) { return; }
    }
    ctx->pc = 0x2A0530u;
label_2a0530:
    // 0x2a0530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0534: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x2A0534u;
    SET_GPR_U32(ctx, 31, 0x2A053Cu);
    ctx->pc = 0x2A0538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0534u;
            // 0x2a0538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A053Cu; }
        if (ctx->pc != 0x2A053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A053Cu; }
        if (ctx->pc != 0x2A053Cu) { return; }
    }
    ctx->pc = 0x2A053Cu;
label_2a053c:
    // 0x2a053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0540: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x2A0540u;
    SET_GPR_U32(ctx, 31, 0x2A0548u);
    ctx->pc = 0x2A0544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0540u;
            // 0x2a0544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0548u; }
        if (ctx->pc != 0x2A0548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0548u; }
        if (ctx->pc != 0x2A0548u) { return; }
    }
    ctx->pc = 0x2A0548u;
label_2a0548:
    // 0x2a0548: 0xc0a9350  jal         func_2A4D40
    ctx->pc = 0x2A0548u;
    SET_GPR_U32(ctx, 31, 0x2A0550u);
    ctx->pc = 0x2A4D40u;
    if (runtime->hasFunction(0x2A4D40u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0550u; }
        if (ctx->pc != 0x2A0550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHDDInstall__Fv_0x2a4d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0550u; }
        if (ctx->pc != 0x2A0550u) { return; }
    }
    ctx->pc = 0x2A0550u;
label_2a0550:
    // 0x2a0550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0550u;
    {
        const bool branch_taken_0x2a0550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0550u;
            // 0x2a0554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0550) {
            ctx->pc = 0x2A0564u;
            goto label_2a0564;
        }
    }
    ctx->pc = 0x2A0558u;
    // 0x2a0558: 0xc052198  jal         func_148660
    ctx->pc = 0x2A0558u;
    SET_GPR_U32(ctx, 31, 0x2A0560u);
    ctx->pc = 0x148660u;
    if (runtime->hasFunction(0x148660u)) {
        auto targetFn = runtime->lookupFunction(0x148660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0560u; }
        if (ctx->pc != 0x2A0560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeHddFile__Fv_0x148660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0560u; }
        if (ctx->pc != 0x2A0560u) { return; }
    }
    ctx->pc = 0x2A0560u;
label_2a0560:
    // 0x2a0560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0564:
    // 0x2a0564: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2A0564u;
    {
        const bool branch_taken_0x2a0564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0564) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A056Cu;
label_2a056c:
    // 0x2a056c: 0x16230062  bne         $s1, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2A056Cu;
    {
        const bool branch_taken_0x2a056c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A056Cu;
            // 0x2a0570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a056c) {
            ctx->pc = 0x2A06F8u;
            goto label_2a06f8;
        }
    }
    ctx->pc = 0x2A0574u;
    // 0x2a0574: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a0578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a057c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A057Cu;
    SET_GPR_U32(ctx, 31, 0x2A0584u);
    ctx->pc = 0x2A0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A057Cu;
            // 0x2a0580: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0584u; }
        if (ctx->pc != 0x2A0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0584u; }
        if (ctx->pc != 0x2A0584u) { return; }
    }
    ctx->pc = 0x2A0584u;
label_2a0584:
    // 0x2a0584: 0xc064220  jal         func_190880
    ctx->pc = 0x2A0584u;
    SET_GPR_U32(ctx, 31, 0x2A058Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A058Cu; }
        if (ctx->pc != 0x2A058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A058Cu; }
        if (ctx->pc != 0x2A058Cu) { return; }
    }
    ctx->pc = 0x2A058Cu;
label_2a058c:
    // 0x2a058c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0594: 0x8c31d630  lw          $s1, -0x29D0($at)
    ctx->pc = 0x2a0594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x2a0598: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a0598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a059c: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x2a059cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a05a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a05a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a05a8: 0x8c33d634  lw          $s3, -0x29CC($at)
    ctx->pc = 0x2a05a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x2a05ac: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A05ACu;
    {
        const bool branch_taken_0x2a05ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A05B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05ACu;
            // 0x2a05b0: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05ac) {
            ctx->pc = 0x2A05D0u;
            goto label_2a05d0;
        }
    }
    ctx->pc = 0x2A05B4u;
    // 0x2a05b4: 0x86131a1a  lh          $s3, 0x1A1A($s0)
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6682)));
    // 0x2a05b8: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2a05b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a05bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A05BCu;
    {
        const bool branch_taken_0x2a05bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A05C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05BCu;
            // 0x2a05c0: 0x2a61000f  slti        $at, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05bc) {
            ctx->pc = 0x2A05CCu;
            goto label_2a05cc;
        }
    }
    ctx->pc = 0x2A05C4u;
    // 0x2a05c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A05C4u;
    {
        const bool branch_taken_0x2a05c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A05C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05C4u;
            // 0x2a05c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05c4) {
            ctx->pc = 0x2A05D4u;
            goto label_2a05d4;
        }
    }
    ctx->pc = 0x2A05CCu;
label_2a05cc:
    // 0x2a05cc: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a05d0:
    // 0x2a05d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a05d4:
    // 0x2a05d4: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A05D4u;
    {
        const bool branch_taken_0x2a05d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05D4u;
            // 0x2a05d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05d4) {
            ctx->pc = 0x2A061Cu;
            goto label_2a061c;
        }
    }
    ctx->pc = 0x2A05DCu;
    // 0x2a05dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a05dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a05e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05e4: 0x8c33d638  lw          $s3, -0x29C8($at)
    ctx->pc = 0x2a05e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
    // 0x2a05e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a05e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a05ec: 0x8c35d63c  lw          $s5, -0x29C4($at)
    ctx->pc = 0x2a05ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956604)));
    // 0x2a05f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a05f4: 0x8c23d640  lw          $v1, -0x29C0($at)
    ctx->pc = 0x2a05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956608)));
    // 0x2a05f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A05F8u;
    {
        const bool branch_taken_0x2a05f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05F8u;
            // 0x2a05fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05f8) {
            ctx->pc = 0x2A0610u;
            goto label_2a0610;
        }
    }
    ctx->pc = 0x2A0600u;
    // 0x2a0600: 0xc0b141c  jal         func_2C5070
    ctx->pc = 0x2A0600u;
    SET_GPR_U32(ctx, 31, 0x2A0608u);
    ctx->pc = 0x2A0604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0600u;
            // 0x2a0604: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5070u;
    if (runtime->hasFunction(0x2C5070u)) {
        auto targetFn = runtime->lookupFunction(0x2C5070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0608u; }
        if (ctx->pc != 0x2A0608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNo__Fi_0x2c5070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0608u; }
        if (ctx->pc != 0x2A0608u) { return; }
    }
    ctx->pc = 0x2A0608u;
label_2a0608:
    // 0x2a0608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0608u;
    {
        const bool branch_taken_0x2a0608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0608u;
            // 0x2a060c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0608) {
            ctx->pc = 0x2A0618u;
            goto label_2a0618;
        }
    }
    ctx->pc = 0x2A0610u;
label_2a0610:
    // 0x2a0610: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2a0610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2a0614: 0x241203f2  addiu       $s2, $zero, 0x3F2
    ctx->pc = 0x2a0614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
label_2a0618:
    // 0x2a0618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a061c:
    // 0x2a061c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A061Cu;
    {
        const bool branch_taken_0x2a061c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A061Cu;
            // 0x2a0620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a061c) {
            ctx->pc = 0x2A0628u;
            goto label_2a0628;
        }
    }
    ctx->pc = 0x2A0624u;
    // 0x2a0624: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2a0624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_2a0628:
    // 0x2a0628: 0xc08cae8  jal         func_232BA0
    ctx->pc = 0x2A0628u;
    SET_GPR_U32(ctx, 31, 0x2A0630u);
    ctx->pc = 0x232BA0u;
    if (runtime->hasFunction(0x232BA0u)) {
        auto targetFn = runtime->lookupFunction(0x232BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0630u; }
        if (ctx->pc != 0x2A0630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStartChapter8__FP9CSaveData_0x232ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0630u; }
        if (ctx->pc != 0x2A0630u) { return; }
    }
    ctx->pc = 0x2A0630u;
label_2a0630:
    // 0x2a0630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0630u;
    {
        const bool branch_taken_0x2a0630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0630u;
            // 0x2a0634: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0630) {
            ctx->pc = 0x2A064Cu;
            goto label_2a064c;
        }
    }
    ctx->pc = 0x2A0638u;
    // 0x2a0638: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a0638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a063c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2A063Cu;
    SET_GPR_U32(ctx, 31, 0x2A0644u);
    ctx->pc = 0x2A0640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A063Cu;
            // 0x2a0640: 0x2484e130  addiu       $a0, $a0, -0x1ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0644u; }
        if (ctx->pc != 0x2A0644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0644u; }
        if (ctx->pc != 0x2A0644u) { return; }
    }
    ctx->pc = 0x2A0644u;
label_2a0644:
    // 0x2a0644: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a0644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0648: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2a0648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_2a064c:
    // 0x2a064c: 0x344243c9  ori         $v0, $v0, 0x43C9
    ctx->pc = 0x2a064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17353);
    // 0x2a0650: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a0654: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a0654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0658u;
    {
        const bool branch_taken_0x2a0658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0658) {
            ctx->pc = 0x2A0680u;
            goto label_2a0680;
        }
    }
    ctx->pc = 0x2A0660u;
    // 0x2a0660: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0664: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a0668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a066c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a066cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a0670: 0xac23906c  sw          $v1, -0x6F94($at)
    ctx->pc = 0x2a0670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 3));
    // 0x2a0674: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2a0674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2a0678: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a067c: 0xa02043c9  sb          $zero, 0x43C9($at)
    ctx->pc = 0x2a067cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17353), (uint8_t)GPR_U32(ctx, 0));
label_2a0680:
    // 0x2a0680: 0xc0a7c20  jal         func_29F080
    ctx->pc = 0x2A0680u;
    SET_GPR_U32(ctx, 31, 0x2A0688u);
    ctx->pc = 0x29F080u;
    if (runtime->hasFunction(0x29F080u)) {
        auto targetFn = runtime->lookupFunction(0x29F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0688u; }
        if (ctx->pc != 0x2A0688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundMode__Fv_0x29f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0688u; }
        if (ctx->pc != 0x2A0688u) { return; }
    }
    ctx->pc = 0x2A0688u;
label_2a0688:
    // 0x2a0688: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x2A0688u;
    SET_GPR_U32(ctx, 31, 0x2A0690u);
    ctx->pc = 0x2A068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0688u;
            // 0x2a068c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0690u; }
        if (ctx->pc != 0x2A0690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0690u; }
        if (ctx->pc != 0x2A0690u) { return; }
    }
    ctx->pc = 0x2A0690u;
label_2a0690:
    // 0x2a0690: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A0690u;
    SET_GPR_U32(ctx, 31, 0x2A0698u);
    ctx->pc = 0x2A0694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0690u;
            // 0x2a0694: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0698u; }
        if (ctx->pc != 0x2A0698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0698u; }
        if (ctx->pc != 0x2A0698u) { return; }
    }
    ctx->pc = 0x2A0698u;
label_2a0698:
    // 0x2a0698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a069c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2a069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a06a0: 0xafb300c0  sw          $s3, 0xC0($sp)
    ctx->pc = 0x2a06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 19));
    // 0x2a06a4: 0xafb20108  sw          $s2, 0x108($sp)
    ctx->pc = 0x2a06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 18));
    // 0x2a06a8: 0xc064240  jal         func_190900
    ctx->pc = 0x2A06A8u;
    SET_GPR_U32(ctx, 31, 0x2A06B0u);
    ctx->pc = 0x2A06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06A8u;
            // 0x2a06ac: 0xafb50104  sw          $s5, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06B0u; }
        if (ctx->pc != 0x2A06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06B0u; }
        if (ctx->pc != 0x2A06B0u) { return; }
    }
    ctx->pc = 0x2A06B0u;
label_2a06b0:
    // 0x2a06b0: 0xc0a9350  jal         func_2A4D40
    ctx->pc = 0x2A06B0u;
    SET_GPR_U32(ctx, 31, 0x2A06B8u);
    ctx->pc = 0x2A4D40u;
    if (runtime->hasFunction(0x2A4D40u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06B8u; }
        if (ctx->pc != 0x2A06B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHDDInstall__Fv_0x2a4d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06B8u; }
        if (ctx->pc != 0x2A06B8u) { return; }
    }
    ctx->pc = 0x2A06B8u;
label_2a06b8:
    // 0x2a06b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A06B8u;
    {
        const bool branch_taken_0x2a06b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a06b8) {
            ctx->pc = 0x2A06C8u;
            goto label_2a06c8;
        }
    }
    ctx->pc = 0x2A06C0u;
    // 0x2a06c0: 0xc052198  jal         func_148660
    ctx->pc = 0x2A06C0u;
    SET_GPR_U32(ctx, 31, 0x2A06C8u);
    ctx->pc = 0x148660u;
    if (runtime->hasFunction(0x148660u)) {
        auto targetFn = runtime->lookupFunction(0x148660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06C8u; }
        if (ctx->pc != 0x2A06C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeHddFile__Fv_0x148660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06C8u; }
        if (ctx->pc != 0x2A06C8u) { return; }
    }
    ctx->pc = 0x2A06C8u;
label_2a06c8:
    // 0x2a06c8: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a06cc: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2A06CCu;
    SET_GPR_U32(ctx, 31, 0x2A06D4u);
    ctx->pc = 0x2A06D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06CCu;
            // 0x2a06d0: 0x86051a1c  lh          $a1, 0x1A1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6684)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06D4u; }
        if (ctx->pc != 0x2A06D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06D4u; }
        if (ctx->pc != 0x2A06D4u) { return; }
    }
    ctx->pc = 0x2A06D4u;
label_2a06d4:
    // 0x2a06d4: 0x280082a  slt         $at, $s4, $zero
    ctx->pc = 0x2a06d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2a06d8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A06D8u;
    {
        const bool branch_taken_0x2a06d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A06DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06D8u;
            // 0x2a06dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06d8) {
            ctx->pc = 0x2A06F0u;
            goto label_2a06f0;
        }
    }
    ctx->pc = 0x2A06E0u;
    // 0x2a06e0: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a06e4: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2A06E4u;
    SET_GPR_U32(ctx, 31, 0x2A06ECu);
    ctx->pc = 0x2A06E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06E4u;
            // 0x2a06e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06ECu; }
        if (ctx->pc != 0x2A06ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06ECu; }
        if (ctx->pc != 0x2A06ECu) { return; }
    }
    ctx->pc = 0x2A06ECu;
label_2a06ec:
    // 0x2a06ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a06f0:
    // 0x2a06f0: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2A06F0u;
    {
        const bool branch_taken_0x2a06f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a06f0) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A06F8u;
label_2a06f8:
    // 0x2a06f8: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A06F8u;
    {
        const bool branch_taken_0x2a06f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A06FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06F8u;
            // 0x2a06fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06f8) {
            ctx->pc = 0x2A0740u;
            goto label_2a0740;
        }
    }
    ctx->pc = 0x2A0700u;
    // 0x2a0700: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0704: 0x80226264  lb          $v0, 0x6264($at)
    ctx->pc = 0x2a0704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25188)));
    // 0x2a0708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0708u;
    {
        const bool branch_taken_0x2a0708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0708) {
            ctx->pc = 0x2A0718u;
            goto label_2a0718;
        }
    }
    ctx->pc = 0x2A0710u;
    // 0x2a0710: 0xc064c38  jal         func_1930E0
    ctx->pc = 0x2A0710u;
    SET_GPR_U32(ctx, 31, 0x2A0718u);
    ctx->pc = 0x1930E0u;
    if (runtime->hasFunction(0x1930E0u)) {
        auto targetFn = runtime->lookupFunction(0x1930E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0718u; }
        if (ctx->pc != 0x2A0718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        demoAttractComplete__Fv_0x1930e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0718u; }
        if (ctx->pc != 0x2A0718u) { return; }
    }
    ctx->pc = 0x2A0718u;
label_2a0718:
    // 0x2a0718: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a071c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0720: 0x80236264  lb          $v1, 0x6264($at)
    ctx->pc = 0x2a0720u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25188)));
    // 0x2a0724: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0724u;
    {
        const bool branch_taken_0x2a0724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0724u;
            // 0x2a0728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0724) {
            ctx->pc = 0x2A0738u;
            goto label_2a0738;
        }
    }
    ctx->pc = 0x2A072Cu;
    // 0x2a072c: 0xc064c34  jal         func_1930D0
    ctx->pc = 0x2A072Cu;
    SET_GPR_U32(ctx, 31, 0x2A0734u);
    ctx->pc = 0x1930D0u;
    if (runtime->hasFunction(0x1930D0u)) {
        auto targetFn = runtime->lookupFunction(0x1930D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0734u; }
        if (ctx->pc != 0x2A0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        demoAttractInterrupted__Fv_0x1930d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0734u; }
        if (ctx->pc != 0x2A0734u) { return; }
    }
    ctx->pc = 0x2A0734u;
label_2a0734:
    // 0x2a0734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0738:
    // 0x2a0738: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2A0738u;
    {
        const bool branch_taken_0x2a0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0738) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A0740u;
label_2a0740:
    // 0x2a0740: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0740u;
    {
        const bool branch_taken_0x2a0740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0740u;
            // 0x2a0744: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0740) {
            ctx->pc = 0x2A0758u;
            goto label_2a0758;
        }
    }
    ctx->pc = 0x2A0748u;
    // 0x2a0748: 0xc064c2c  jal         func_1930B0
    ctx->pc = 0x2A0748u;
    SET_GPR_U32(ctx, 31, 0x2A0750u);
    ctx->pc = 0x1930B0u;
    if (runtime->hasFunction(0x1930B0u)) {
        auto targetFn = runtime->lookupFunction(0x1930B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0750u; }
        if (ctx->pc != 0x2A0750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        demQuit__Fv_0x1930b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0750u; }
        if (ctx->pc != 0x2A0750u) { return; }
    }
    ctx->pc = 0x2A0750u;
label_2a0750:
    // 0x2a0750: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2A0750u;
    {
        const bool branch_taken_0x2a0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0750u;
            // 0x2a0754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0750) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A0758u;
label_2a0758:
    // 0x2a0758: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0758u;
    {
        const bool branch_taken_0x2a0758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0758u;
            // 0x2a075c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0758) {
            ctx->pc = 0x2A0770u;
            goto label_2a0770;
        }
    }
    ctx->pc = 0x2A0760u;
    // 0x2a0760: 0xc064c30  jal         func_1930C0
    ctx->pc = 0x2A0760u;
    SET_GPR_U32(ctx, 31, 0x2A0768u);
    ctx->pc = 0x1930C0u;
    if (runtime->hasFunction(0x1930C0u)) {
        auto targetFn = runtime->lookupFunction(0x1930C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0768u; }
        if (ctx->pc != 0x2A0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        demoQuitTimeOut__Fv_0x1930c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0768u; }
        if (ctx->pc != 0x2A0768u) { return; }
    }
    ctx->pc = 0x2A0768u;
label_2a0768:
    // 0x2a0768: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2A0768u;
    {
        const bool branch_taken_0x2a0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0768u;
            // 0x2a076c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0768) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A0770u;
label_2a0770:
    // 0x2a0770: 0x16220039  bne         $s1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A0770u;
    {
        const bool branch_taken_0x2a0770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0770) {
            ctx->pc = 0x2A0858u;
            goto label_2a0858;
        }
    }
    ctx->pc = 0x2A0778u;
    // 0x2a0778: 0x8f85997c  lw          $a1, -0x6684($gp)
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a077c: 0x84a20010  lh          $v0, 0x10($a1)
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a0780: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0780u;
    {
        const bool branch_taken_0x2a0780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0780u;
            // 0x2a0784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0780) {
            ctx->pc = 0x2A079Cu;
            goto label_2a079c;
        }
    }
    ctx->pc = 0x2A0788u;
    // 0x2a0788: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x2a0788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2a078c: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A078Cu;
    {
        const bool branch_taken_0x2a078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a078c) {
            ctx->pc = 0x2A07B4u;
            goto label_2a07b4;
        }
    }
    ctx->pc = 0x2A0794u;
    // 0x2a0794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0794u;
    {
        const bool branch_taken_0x2a0794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0794u;
            // 0x2a0798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0794) {
            ctx->pc = 0x2A07B4u;
            goto label_2a07b4;
        }
    }
    ctx->pc = 0x2A079Cu;
label_2a079c:
    // 0x2a079c: 0x8f839980  lw          $v1, -0x6680($gp)
    ctx->pc = 0x2a079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a07a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a07a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a07a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a07a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A07A8u;
    {
        const bool branch_taken_0x2a07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a07a8) {
            ctx->pc = 0x2A07B4u;
            goto label_2a07b4;
        }
    }
    ctx->pc = 0x2A07B0u;
    // 0x2a07b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a07b4:
    // 0x2a07b4: 0xc064228  jal         func_1908A0
    ctx->pc = 0x2A07B4u;
    SET_GPR_U32(ctx, 31, 0x2A07BCu);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07BCu; }
        if (ctx->pc != 0x2A07BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07BCu; }
        if (ctx->pc != 0x2A07BCu) { return; }
    }
    ctx->pc = 0x2A07BCu;
label_2a07bc:
    // 0x2a07bc: 0xc064220  jal         func_190880
    ctx->pc = 0x2A07BCu;
    SET_GPR_U32(ctx, 31, 0x2A07C4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07C4u; }
        if (ctx->pc != 0x2A07C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07C4u; }
        if (ctx->pc != 0x2A07C4u) { return; }
    }
    ctx->pc = 0x2A07C4u;
label_2a07c4:
    // 0x2a07c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a07c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a07c8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a07c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a07cc: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2a07ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2a07d0: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a07d4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a07d8: 0xc049c18  jal         func_127060
    ctx->pc = 0x2A07D8u;
    SET_GPR_U32(ctx, 31, 0x2A07E0u);
    ctx->pc = 0x2A07DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07D8u;
            // 0x2a07dc: 0x24450048  addiu       $a1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07E0u; }
        if (ctx->pc != 0x2A07E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07E0u; }
        if (ctx->pc != 0x2A07E0u) { return; }
    }
    ctx->pc = 0x2A07E0u;
label_2a07e0:
    // 0x2a07e0: 0xc0a7c20  jal         func_29F080
    ctx->pc = 0x2A07E0u;
    SET_GPR_U32(ctx, 31, 0x2A07E8u);
    ctx->pc = 0x29F080u;
    if (runtime->hasFunction(0x29F080u)) {
        auto targetFn = runtime->lookupFunction(0x29F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07E8u; }
        if (ctx->pc != 0x2A07E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundMode__Fv_0x29f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07E8u; }
        if (ctx->pc != 0x2A07E8u) { return; }
    }
    ctx->pc = 0x2A07E8u;
label_2a07e8:
    // 0x2a07e8: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x2A07E8u;
    SET_GPR_U32(ctx, 31, 0x2A07F0u);
    ctx->pc = 0x2A07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07E8u;
            // 0x2a07ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F0u; }
        if (ctx->pc != 0x2A07F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F0u; }
        if (ctx->pc != 0x2A07F0u) { return; }
    }
    ctx->pc = 0x2A07F0u;
label_2a07f0:
    // 0x2a07f0: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A07F0u;
    SET_GPR_U32(ctx, 31, 0x2A07F8u);
    ctx->pc = 0x2A07F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07F0u;
            // 0x2a07f4: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F8u; }
        if (ctx->pc != 0x2A07F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F8u; }
        if (ctx->pc != 0x2A07F8u) { return; }
    }
    ctx->pc = 0x2A07F8u;
label_2a07f8:
    // 0x2a07f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a07fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a07fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0800: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A0800u;
    SET_GPR_U32(ctx, 31, 0x2A0808u);
    ctx->pc = 0x2A0804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0800u;
            // 0x2a0804: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0808u; }
        if (ctx->pc != 0x2A0808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0808u; }
        if (ctx->pc != 0x2A0808u) { return; }
    }
    ctx->pc = 0x2A0808u;
label_2a0808:
    // 0x2a0808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a080c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2a080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0810: 0xc0a7c44  jal         func_29F110
    ctx->pc = 0x2A0810u;
    SET_GPR_U32(ctx, 31, 0x2A0818u);
    ctx->pc = 0x2A0814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0810u;
            // 0x2a0814: 0x27a6019c  addiu       $a2, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F110u;
    if (runtime->hasFunction(0x29F110u)) {
        auto targetFn = runtime->lookupFunction(0x29F110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0818u; }
        if (ctx->pc != 0x2A0818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitOmakeEnv__FiP13INIT_LOOP_ARGPi_0x29f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0818u; }
        if (ctx->pc != 0x2A0818u) { return; }
    }
    ctx->pc = 0x2A0818u;
label_2a0818:
    // 0x2a0818: 0xc086974  jal         func_21A5D0
    ctx->pc = 0x2A0818u;
    SET_GPR_U32(ctx, 31, 0x2A0820u);
    ctx->pc = 0x21A5D0u;
    if (runtime->hasFunction(0x21A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0820u; }
        if (ctx->pc != 0x2A0820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceSubGameInitData__Fv_0x21a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0820u; }
        if (ctx->pc != 0x2A0820u) { return; }
    }
    ctx->pc = 0x2A0820u;
label_2a0820:
    // 0x2a0820: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0820u;
    {
        const bool branch_taken_0x2a0820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0820) {
            ctx->pc = 0x2A083Cu;
            goto label_2a083c;
        }
    }
    ctx->pc = 0x2A0828u;
    // 0x2a0828: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a082c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a0830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0834: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a0834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a0838: 0xac23906c  sw          $v1, -0x6F94($at)
    ctx->pc = 0x2a0838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 3));
label_2a083c:
    // 0x2a083c: 0xc0a7c3c  jal         func_29F0F0
    ctx->pc = 0x2A083Cu;
    SET_GPR_U32(ctx, 31, 0x2A0844u);
    ctx->pc = 0x29F0F0u;
    if (runtime->hasFunction(0x29F0F0u)) {
        auto targetFn = runtime->lookupFunction(0x29F0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0844u; }
        if (ctx->pc != 0x2A0844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleOmakeOn__Fv_0x29f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0844u; }
        if (ctx->pc != 0x2A0844u) { return; }
    }
    ctx->pc = 0x2A0844u;
label_2a0844:
    // 0x2a0844: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2a0848: 0xc064240  jal         func_190900
    ctx->pc = 0x2A0848u;
    SET_GPR_U32(ctx, 31, 0x2A0850u);
    ctx->pc = 0x2A084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0848u;
            // 0x2a084c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0850u; }
        if (ctx->pc != 0x2A0850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0850u; }
        if (ctx->pc != 0x2A0850u) { return; }
    }
    ctx->pc = 0x2A0850u;
label_2a0850:
    // 0x2a0850: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2A0850u;
    {
        const bool branch_taken_0x2a0850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0850u;
            // 0x2a0854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0850) {
            ctx->pc = 0x2A0A80u;
            goto label_2a0a80;
        }
    }
    ctx->pc = 0x2A0858u;
label_2a0858:
    // 0x2a0858: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a085c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a0860: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x2a0860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a0864: 0x14200085  bnez        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x2A0864u;
    {
        const bool branch_taken_0x2a0864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0864u;
            // 0x2a0868: 0x2c410008  sltiu       $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0864) {
            ctx->pc = 0x2A0A7Cu;
            goto label_2a0a7c;
        }
    }
    ctx->pc = 0x2A086Cu;
    // 0x2a086c: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A086Cu;
    {
        const bool branch_taken_0x2a086c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A086Cu;
            // 0x2a0870: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a086c) {
            ctx->pc = 0x2A0A4Cu;
            goto label_2a0a4c;
        }
    }
    ctx->pc = 0x2A0874u;
    // 0x2a0874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0878: 0x2463e140  addiu       $v1, $v1, -0x1EC0
    ctx->pc = 0x2a0878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959424));
    // 0x2a087c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0884: 0x400008  jr          $v0
    ctx->pc = 0x2A0884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A088Cu: goto label_2a088c;
            case 0x2A0898u: goto label_2a0898;
            case 0x2A08A8u: goto label_2a08a8;
            case 0x2A0908u: goto label_2a0908;
            case 0x2A0A3Cu: goto label_2a0a3c;
            case 0x2A0A4Cu: goto label_2a0a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A088Cu;
label_2a088c:
    // 0x2a088c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0890: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2A0890u;
    {
        const bool branch_taken_0x2a0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0890u;
            // 0x2a0894: 0xac206250  sw          $zero, 0x6250($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0890) {
            ctx->pc = 0x2A0A4Cu;
            goto label_2a0a4c;
        }
    }
    ctx->pc = 0x2A0898u;
label_2a0898:
    // 0x2a0898: 0xc0a8c08  jal         func_2A3020
    ctx->pc = 0x2A0898u;
    SET_GPR_U32(ctx, 31, 0x2A08A0u);
    ctx->pc = 0x2A3020u;
    if (runtime->hasFunction(0x2A3020u)) {
        auto targetFn = runtime->lookupFunction(0x2A3020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08A0u; }
        if (ctx->pc != 0x2A08A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleCopyRightInit__Fv_0x2a3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08A0u; }
        if (ctx->pc != 0x2A08A0u) { return; }
    }
    ctx->pc = 0x2A08A0u;
label_2a08a0:
    // 0x2a08a0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2A08A0u;
    {
        const bool branch_taken_0x2a08a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a08a0) {
            ctx->pc = 0x2A0A4Cu;
            goto label_2a0a4c;
        }
    }
    ctx->pc = 0x2A08A8u;
label_2a08a8:
    // 0x2a08a8: 0xc0a8408  jal         func_2A1020
    ctx->pc = 0x2A08A8u;
    SET_GPR_U32(ctx, 31, 0x2A08B0u);
    ctx->pc = 0x2A08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08A8u;
            // 0x2a08ac: 0x84910008  lh          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1020u;
    if (runtime->hasFunction(0x2A1020u)) {
        auto targetFn = runtime->lookupFunction(0x2A1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08B0u; }
        if (ctx->pc != 0x2A08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleModeInit__Fv_0x2a1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08B0u; }
        if (ctx->pc != 0x2A08B0u) { return; }
    }
    ctx->pc = 0x2A08B0u;
label_2a08b0:
    // 0x2a08b0: 0x87849940  lh          $a0, -0x66C0($gp)
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940992)));
    // 0x2a08b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a08b8: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08bc: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x2a08bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a08c0: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a08c8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A08C8u;
    {
        const bool branch_taken_0x2a08c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a08c8) {
            ctx->pc = 0x2A08F8u;
            goto label_2a08f8;
        }
    }
    ctx->pc = 0x2A08D0u;
    // 0x2a08d0: 0xa4910008  sh          $s1, 0x8($a0)
    ctx->pc = 0x2a08d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x2a08d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a08d8: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08dc: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a08e0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x2a08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x2a08e4: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08e8: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2a08e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x2a08ec: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08f0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2a08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2a08f4: 0xa78299a8  sh          $v0, -0x6658($gp)
    ctx->pc = 0x2a08f4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 2));
label_2a08f8:
    // 0x2a08f8: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a08fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0900: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2A0900u;
    {
        const bool branch_taken_0x2a0900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0900u;
            // 0x2a0904: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0900) {
            ctx->pc = 0x2A0A4Cu;
            goto label_2a0a4c;
        }
    }
    ctx->pc = 0x2A0908u;
label_2a0908:
    // 0x2a0908: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A0908u;
    SET_GPR_U32(ctx, 31, 0x2A0910u);
    ctx->pc = 0x2A090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0908u;
            // 0x2a090c: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0910u; }
        if (ctx->pc != 0x2A0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0910u; }
        if (ctx->pc != 0x2A0910u) { return; }
    }
    ctx->pc = 0x2A0910u;
label_2a0910:
    // 0x2a0910: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0918: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a0918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a091c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A091Cu;
    {
        const bool branch_taken_0x2a091c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A091Cu;
            // 0x2a0920: 0x24850088  addiu       $a1, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a091c) {
            ctx->pc = 0x2A0968u;
            goto label_2a0968;
        }
    }
    ctx->pc = 0x2A0924u;
    // 0x2a0924: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2A0924u;
    SET_GPR_U32(ctx, 31, 0x2A092Cu);
    ctx->pc = 0x2A0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0924u;
            // 0x2a0928: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A092Cu; }
        if (ctx->pc != 0x2A092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A092Cu; }
        if (ctx->pc != 0x2A092Cu) { return; }
    }
    ctx->pc = 0x2A092Cu;
label_2a092c:
    // 0x2a092c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0930: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A0930u;
    SET_GPR_U32(ctx, 31, 0x2A0938u);
    ctx->pc = 0x2A0934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0930u;
            // 0x2a0934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0938u; }
        if (ctx->pc != 0x2A0938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0938u; }
        if (ctx->pc != 0x2A0938u) { return; }
    }
    ctx->pc = 0x2A0938u;
label_2a0938:
    // 0x2a0938: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a0938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a093c: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x2a093cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2a0940: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2A0940u;
    SET_GPR_U32(ctx, 31, 0x2A0948u);
    ctx->pc = 0x2A0944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0940u;
            // 0x2a0944: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0948u; }
        if (ctx->pc != 0x2A0948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0948u; }
        if (ctx->pc != 0x2A0948u) { return; }
    }
    ctx->pc = 0x2A0948u;
label_2a0948:
    // 0x2a0948: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a0948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a094c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0958: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2A0958u;
    SET_GPR_U32(ctx, 31, 0x2A0960u);
    ctx->pc = 0x2A095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0958u;
            // 0x2a095c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0960u; }
        if (ctx->pc != 0x2A0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0960u; }
        if (ctx->pc != 0x2A0960u) { return; }
    }
    ctx->pc = 0x2A0960u;
label_2a0960:
    // 0x2a0960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0960u;
    {
        const bool branch_taken_0x2a0960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0960u;
            // 0x2a0964: 0x3c024448  lui         $v0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0960) {
            ctx->pc = 0x2A0984u;
            goto label_2a0984;
        }
    }
    ctx->pc = 0x2A0968u;
label_2a0968:
    // 0x2a0968: 0xc064224  jal         func_190890
    ctx->pc = 0x2A0968u;
    SET_GPR_U32(ctx, 31, 0x2A0970u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0970u; }
        if (ctx->pc != 0x2A0970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0970u; }
        if (ctx->pc != 0x2A0970u) { return; }
    }
    ctx->pc = 0x2A0970u;
label_2a0970:
    // 0x2a0970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0970u;
    {
        const bool branch_taken_0x2a0970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0970u;
            // 0x2a0974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0970) {
            ctx->pc = 0x2A0980u;
            goto label_2a0980;
        }
    }
    ctx->pc = 0x2A0978u;
    // 0x2a0978: 0xc0bdc60  jal         func_2F7180
    ctx->pc = 0x2A0978u;
    SET_GPR_U32(ctx, 31, 0x2A0980u);
    ctx->pc = 0x2F7180u;
    if (runtime->hasFunction(0x2F7180u)) {
        auto targetFn = runtime->lookupFunction(0x2F7180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0980u; }
        if (ctx->pc != 0x2A0980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSubGameDataFv_0x2f7180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0980u; }
        if (ctx->pc != 0x2A0980u) { return; }
    }
    ctx->pc = 0x2A0980u;
label_2a0980:
    // 0x2a0980: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_2a0984:
    // 0x2a0984: 0xc064220  jal         func_190880
    ctx->pc = 0x2A0984u;
    SET_GPR_U32(ctx, 31, 0x2A098Cu);
    ctx->pc = 0x2A0988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0984u;
            // 0x2a0988: 0xaf829960  sw          $v0, -0x66A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A098Cu; }
        if (ctx->pc != 0x2A098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A098Cu; }
        if (ctx->pc != 0x2A098Cu) { return; }
    }
    ctx->pc = 0x2A098Cu;
label_2a098c:
    // 0x2a098c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a098cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a0990: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a0994: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2a0994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2a0998: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2a0998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a099c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a09a0: 0xc049c18  jal         func_127060
    ctx->pc = 0x2A09A0u;
    SET_GPR_U32(ctx, 31, 0x2A09A8u);
    ctx->pc = 0x2A09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09A0u;
            // 0x2a09a4: 0x24450048  addiu       $a1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09A8u; }
        if (ctx->pc != 0x2A09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09A8u; }
        if (ctx->pc != 0x2A09A8u) { return; }
    }
    ctx->pc = 0x2A09A8u;
label_2a09a8:
    // 0x2a09a8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a09ac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a09b0: 0xac206124  sw          $zero, 0x6124($at)
    ctx->pc = 0x2a09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24868), GPR_U32(ctx, 0));
    // 0x2a09b4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a09b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a09b8: 0xc04e640  jal         func_139900
    ctx->pc = 0x2A09B8u;
    SET_GPR_U32(ctx, 31, 0x2A09C0u);
    ctx->pc = 0x2A09BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09B8u;
            // 0x2a09bc: 0xac20611c  sw          $zero, 0x611C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09C0u; }
        if (ctx->pc != 0x2A09C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09C0u; }
        if (ctx->pc != 0x2A09C0u) { return; }
    }
    ctx->pc = 0x2A09C0u;
label_2a09c0:
    // 0x2a09c0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a09c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a09c4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2a09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a09c8: 0x8c236128  lw          $v1, 0x6128($at)
    ctx->pc = 0x2a09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24872)));
    // 0x2a09cc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a09ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a09d0: 0x8c256124  lw          $a1, 0x6124($at)
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a09d4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a09d8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a09dc: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a09e0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a09e4: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A09E4u;
    SET_GPR_U32(ctx, 31, 0x2A09ECu);
    ctx->pc = 0x2A09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09E4u;
            // 0x2a09e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09ECu; }
        if (ctx->pc != 0x2A09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09ECu; }
        if (ctx->pc != 0x2A09ECu) { return; }
    }
    ctx->pc = 0x2A09ECu;
label_2a09ec:
    // 0x2a09ec: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2a09f0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2a09f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2a09f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A09F4u;
    SET_GPR_U32(ctx, 31, 0x2A09FCu);
    ctx->pc = 0x2A09F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09F4u;
            // 0x2a09f8: 0x24846100  addiu       $a0, $a0, 0x6100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09FCu; }
        if (ctx->pc != 0x2A09FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09FCu; }
        if (ctx->pc != 0x2A09FCu) { return; }
    }
    ctx->pc = 0x2A09FCu;
label_2a09fc:
    // 0x2a09fc: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a0a00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0a04: 0xac22d5f0  sw          $v0, -0x2A10($at)
    ctx->pc = 0x2a0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956528), GPR_U32(ctx, 2));
    // 0x2a0a08: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a0a0c: 0x24636130  addiu       $v1, $v1, 0x6130
    ctx->pc = 0x2a0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24880));
    // 0x2a0a10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0a14: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a0a18: 0xac23d5f4  sw          $v1, -0x2A0C($at)
    ctx->pc = 0x2a0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956532), GPR_U32(ctx, 3));
    // 0x2a0a1c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2a0a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2a0a20: 0x24426160  addiu       $v0, $v0, 0x6160
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24928));
    // 0x2a0a24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2a0a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2a0a28: 0x2484d5f0  addiu       $a0, $a0, -0x2A10
    ctx->pc = 0x2a0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
    // 0x2a0a2c: 0xc08cb7c  jal         func_232DF0
    ctx->pc = 0x2A0A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A34u);
    ctx->pc = 0x2A0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A2Cu;
            // 0x2a0a30: 0xac22d5f8  sw          $v0, -0x2A08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232DF0u;
    if (runtime->hasFunction(0x232DF0u)) {
        auto targetFn = runtime->lookupFunction(0x232DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A34u; }
        if (ctx->pc != 0x2A0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainInit__FP13MENU_INIT_ARG_0x232df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A34u; }
        if (ctx->pc != 0x2A0A34u) { return; }
    }
    ctx->pc = 0x2A0A34u;
label_2a0a34:
    // 0x2a0a34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0A34u;
    {
        const bool branch_taken_0x2a0a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a34) {
            ctx->pc = 0x2A0A4Cu;
            goto label_2a0a4c;
        }
    }
    ctx->pc = 0x2A0A3Cu;
label_2a0a3c:
    // 0x2a0a3c: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A44u);
    ctx->pc = 0x2A0A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A3Cu;
            // 0x2a0a40: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A44u; }
        if (ctx->pc != 0x2A0A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A44u; }
        if (ctx->pc != 0x2A0A44u) { return; }
    }
    ctx->pc = 0x2A0A44u;
label_2a0a44:
    // 0x2a0a44: 0xc0a8d8c  jal         func_2A3630
    ctx->pc = 0x2A0A44u;
    SET_GPR_U32(ctx, 31, 0x2A0A4Cu);
    ctx->pc = 0x2A3630u;
    if (runtime->hasFunction(0x2A3630u)) {
        auto targetFn = runtime->lookupFunction(0x2A3630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A4Cu; }
        if (ctx->pc != 0x2A0A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleHDDInstallInit__Fv_0x2a3630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A4Cu; }
        if (ctx->pc != 0x2A0A4Cu) { return; }
    }
    ctx->pc = 0x2A0A4Cu;
label_2a0a4c:
    // 0x2a0a4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a0a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0a50: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a0a54: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2a0a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a0a58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a0a58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a0a5c: 0xc050da0  jal         func_143680
    ctx->pc = 0x2A0A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A64u);
    ctx->pc = 0x2A0A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A5Cu;
            // 0x2a0a60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A64u; }
        if (ctx->pc != 0x2A0A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A64u; }
        if (ctx->pc != 0x2A0A64u) { return; }
    }
    ctx->pc = 0x2A0A64u;
label_2a0a64:
    // 0x2a0a64: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0a6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a0a70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a0a74: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a0a78: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2a0a7c:
    // 0x2a0a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a80:
    // 0x2a0a80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a0a84:
    // 0x2a0a84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a0a84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0a88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0a8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A9Cu;
            // 0x2a0aa0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0AA4u;
}
