#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPreCmdTrush__FP14CBaseMenuClassiP13CGameDataUsedP16CMenuPosDataForm
// Address: 0x23a2b0 - 0x23a3dc
void SetPreCmdTrush__FP14CBaseMenuClassiP13CGameDataUsedP16CMenuPosDataForm_0x23a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPreCmdTrush__FP14CBaseMenuClassiP13CGameDataUsedP16CMenuPosDataForm_0x23a2b0");
#endif

    switch (ctx->pc) {
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a308u: goto label_23a308;
        case 0x23a330u: goto label_23a330;
        case 0x23a344u: goto label_23a344;
        case 0x23a358u: goto label_23a358;
        case 0x23a364u: goto label_23a364;
        case 0x23a384u: goto label_23a384;
        case 0x23a398u: goto label_23a398;
        case 0x23a3c0u: goto label_23a3c0;
        default: break;
    }

    ctx->pc = 0x23a2b0u;

    // 0x23a2b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23a2b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23a2b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23a2bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23a2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23a2c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23a2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a2cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23a2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a2d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23a2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x23a2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a2dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a2e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23a2e8: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x23A2E8u;
    SET_GPR_U32(ctx, 31, 0x23A2F0u);
    ctx->pc = 0x23A2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2E8u;
            // 0x23a2ec: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2F0u; }
        if (ctx->pc != 0x23A2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2F0u; }
        if (ctx->pc != 0x23A2F0u) { return; }
    }
    ctx->pc = 0x23A2F0u;
label_23a2f0:
    // 0x23a2f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23a2f8: 0xa7b00052  sh          $s0, 0x52($sp)
    ctx->pc = 0x23a2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 16));
    // 0x23a2fc: 0xafb100c8  sw          $s1, 0xC8($sp)
    ctx->pc = 0x23a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 17));
    // 0x23a300: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x23A300u;
    SET_GPR_U32(ctx, 31, 0x23A308u);
    ctx->pc = 0x23A304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A300u;
            // 0x23a304: 0xafb200cc  sw          $s2, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A308u; }
        if (ctx->pc != 0x23A308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A308u; }
        if (ctx->pc != 0x23A308u) { return; }
    }
    ctx->pc = 0x23A308u;
label_23a308:
    // 0x23a308: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x23a30c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23a310: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x23a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x23a314: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x23a314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23a318: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a31c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x23a31cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a324: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x23a324u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a328: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x23A328u;
    SET_GPR_U32(ctx, 31, 0x23A330u);
    ctx->pc = 0x23A32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A328u;
            // 0x23a32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A330u; }
        if (ctx->pc != 0x23A330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A330u; }
        if (ctx->pc != 0x23A330u) { return; }
    }
    ctx->pc = 0x23A330u;
label_23a330:
    // 0x23a330: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a338: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x23a338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x23a33c: 0xc065dc0  jal         func_197700
    ctx->pc = 0x23A33Cu;
    SET_GPR_U32(ctx, 31, 0x23A344u);
    ctx->pc = 0x23A340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A33Cu;
            // 0x23a340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A344u; }
        if (ctx->pc != 0x23A344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A344u; }
        if (ctx->pc != 0x23A344u) { return; }
    }
    ctx->pc = 0x23A344u;
label_23a344:
    // 0x23a344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A344u;
    {
        const bool branch_taken_0x23a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A344u;
            // 0x23a348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a344) {
            ctx->pc = 0x23A35Cu;
            goto label_23a35c;
        }
    }
    ctx->pc = 0x23A34Cu;
    // 0x23a34c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a350: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x23A350u;
    SET_GPR_U32(ctx, 31, 0x23A358u);
    ctx->pc = 0x23A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A350u;
            // 0x23a354: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A358u; }
        if (ctx->pc != 0x23A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A358u; }
        if (ctx->pc != 0x23A358u) { return; }
    }
    ctx->pc = 0x23A358u;
label_23a358:
    // 0x23a358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a35c:
    // 0x23a35c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23A35Cu;
    SET_GPR_U32(ctx, 31, 0x23A364u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A364u; }
        if (ctx->pc != 0x23A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A364u; }
        if (ctx->pc != 0x23A364u) { return; }
    }
    ctx->pc = 0x23A364u;
label_23a364:
    // 0x23a364: 0xa7829640  sh          $v0, -0x69C0($gp)
    ctx->pc = 0x23a364u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940224), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a368: 0x87839640  lh          $v1, -0x69C0($gp)
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940224)));
    // 0x23a36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a370: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A370u;
    {
        const bool branch_taken_0x23a370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A370u;
            // 0x23a374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a370) {
            ctx->pc = 0x23A3B8u;
            goto label_23a3b8;
        }
    }
    ctx->pc = 0x23A378u;
    // 0x23a378: 0x240500b6  addiu       $a1, $zero, 0xB6
    ctx->pc = 0x23a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x23a37c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x23A37Cu;
    SET_GPR_U32(ctx, 31, 0x23A384u);
    ctx->pc = 0x23A380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A37Cu;
            // 0x23a380: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A384u; }
        if (ctx->pc != 0x23A384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A384u; }
        if (ctx->pc != 0x23A384u) { return; }
    }
    ctx->pc = 0x23A384u;
label_23a384:
    // 0x23a384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a38c: 0xae051a44  sw          $a1, 0x1A44($s0)
    ctx->pc = 0x23a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6724), GPR_U32(ctx, 5));
    // 0x23a390: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x23A390u;
    SET_GPR_U32(ctx, 31, 0x23A398u);
    ctx->pc = 0x23A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A390u;
            // 0x23a394: 0xae001a84  sw          $zero, 0x1A84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A398u; }
        if (ctx->pc != 0x23A398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A398u; }
        if (ctx->pc != 0x23A398u) { return; }
    }
    ctx->pc = 0x23A398u;
label_23a398:
    // 0x23a398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a39c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x23a39cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a3a0: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x23a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23a3a4: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x23a3a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A3A8u;
    {
        const bool branch_taken_0x23a3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a3a8) {
            ctx->pc = 0x23A3C0u;
            goto label_23a3c0;
        }
    }
    ctx->pc = 0x23A3B0u;
    // 0x23a3b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23A3B0u;
    {
        const bool branch_taken_0x23a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3B0u;
            // 0x23a3b4: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3b0) {
            ctx->pc = 0x23A3C0u;
            goto label_23a3c0;
        }
    }
    ctx->pc = 0x23A3B8u;
label_23a3b8:
    // 0x23a3b8: 0xc08e70c  jal         func_239C30
    ctx->pc = 0x23A3B8u;
    SET_GPR_U32(ctx, 31, 0x23A3C0u);
    ctx->pc = 0x23A3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3B8u;
            // 0x23a3bc: 0xaf839608  sw          $v1, -0x69F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239C30u;
    if (runtime->hasFunction(0x239C30u)) {
        auto targetFn = runtime->lookupFunction(0x239C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A3C0u; }
        if (ctx->pc != 0x23A3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetConditionHowMuchBoard__Fv_0x239c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A3C0u; }
        if (ctx->pc != 0x23A3C0u) { return; }
    }
    ctx->pc = 0x23A3C0u;
label_23a3c0:
    // 0x23a3c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23a3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a3c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a3c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3D4u;
            // 0x23a3d8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A3DCu;
}
