#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i
// Address: 0x2def40 - 0x2df1a4
void GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i_0x2def40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i_0x2def40");
#endif

    switch (ctx->pc) {
        case 0x2def6cu: goto label_2def6c;
        case 0x2def88u: goto label_2def88;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe8u: goto label_2defe8;
        case 0x2deff8u: goto label_2deff8;
        case 0x2df008u: goto label_2df008;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df028u: goto label_2df028;
        case 0x2df034u: goto label_2df034;
        case 0x2df040u: goto label_2df040;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df058u: goto label_2df058;
        case 0x2df068u: goto label_2df068;
        case 0x2df094u: goto label_2df094;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df108u: goto label_2df108;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df148u: goto label_2df148;
        case 0x2df154u: goto label_2df154;
        case 0x2df160u: goto label_2df160;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df178u: goto label_2df178;
        case 0x2df184u: goto label_2df184;
        default: break;
    }

    ctx->pc = 0x2def40u;

    // 0x2def40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2def40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2def44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2def44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2def48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2def48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2def4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2def4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2def50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2def50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2def54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2def58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2def5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2def5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2def60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def64: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2DEF64u;
    SET_GPR_U32(ctx, 31, 0x2DEF6Cu);
    ctx->pc = 0x2DEF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF64u;
            // 0x2def68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF6Cu; }
        if (ctx->pc != 0x2DEF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF6Cu; }
        if (ctx->pc != 0x2DEF6Cu) { return; }
    }
    ctx->pc = 0x2DEF6Cu;
label_2def6c:
    // 0x2def6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2def6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def70: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEF70u;
    {
        const bool branch_taken_0x2def70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF70u;
            // 0x2def74: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def70) {
            ctx->pc = 0x2DEF90u;
            goto label_2def90;
        }
    }
    ctx->pc = 0x2DEF78u;
    // 0x2def78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2def78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2def7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2def7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def80: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2DEF80u;
    SET_GPR_U32(ctx, 31, 0x2DEF88u);
    ctx->pc = 0x2DEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF80u;
            // 0x2def84: 0x24840f10  addiu       $a0, $a0, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF88u; }
        if (ctx->pc != 0x2DEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF88u; }
        if (ctx->pc != 0x2DEF88u) { return; }
    }
    ctx->pc = 0x2DEF88u;
label_2def88:
    // 0x2def88: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2DEF88u;
    {
        const bool branch_taken_0x2def88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF88u;
            // 0x2def8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def88) {
            ctx->pc = 0x2DF188u;
            goto label_2df188;
        }
    }
    ctx->pc = 0x2DEF90u;
label_2def90:
    // 0x2def90: 0x8c228d54  lw          $v0, -0x72AC($at)
    ctx->pc = 0x2def90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937940)));
    // 0x2def94: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2def94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2def98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2def98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2def9c: 0x8c228d58  lw          $v0, -0x72A8($at)
    ctx->pc = 0x2def9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937944)));
    // 0x2defa0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2defa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2defa4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2defa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2defa8: 0x8c228d64  lw          $v0, -0x729C($at)
    ctx->pc = 0x2defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937956)));
    // 0x2defac: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2defacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2defb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2defb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2defb4: 0x8c228d5c  lw          $v0, -0x72A4($at)
    ctx->pc = 0x2defb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937948)));
    // 0x2defb8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2defb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2defbc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2defbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2defc0: 0x8c228d60  lw          $v0, -0x72A0($at)
    ctx->pc = 0x2defc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937952)));
    // 0x2defc4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2defc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2defc8: 0x8e620190  lw          $v0, 0x190($s3)
    ctx->pc = 0x2defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x2defcc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DEFCCu;
    {
        const bool branch_taken_0x2defcc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DEFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEFCCu;
            // 0x2defd0: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defcc) {
            ctx->pc = 0x2DEFD8u;
            goto label_2defd8;
        }
    }
    ctx->pc = 0x2DEFD4u;
    // 0x2defd4: 0xae620190  sw          $v0, 0x190($s3)
    ctx->pc = 0x2defd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 2));
label_2defd8:
    // 0x2defd8: 0xc064220  jal         func_190880
    ctx->pc = 0x2DEFD8u;
    SET_GPR_U32(ctx, 31, 0x2DEFE0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFE0u; }
        if (ctx->pc != 0x2DEFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFE0u; }
        if (ctx->pc != 0x2DEFE0u) { return; }
    }
    ctx->pc = 0x2DEFE0u;
label_2defe0:
    // 0x2defe0: 0xc0c69c0  jal         func_31A700
    ctx->pc = 0x2DEFE0u;
    SET_GPR_U32(ctx, 31, 0x2DEFE8u);
    ctx->pc = 0x2DEFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEFE0u;
            // 0x2defe4: 0x8c441a08  lw          $a0, 0x1A08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A700u;
    if (runtime->hasFunction(0x31A700u)) {
        auto targetFn = runtime->lookupFunction(0x31A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFE8u; }
        if (ctx->pc != 0x2DEFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressInfo__Fi_0x31a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFE8u; }
        if (ctx->pc != 0x2DEFE8u) { return; }
    }
    ctx->pc = 0x2DEFE8u;
label_2defe8:
    // 0x2defe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2defe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2defecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deff0: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x2DEFF0u;
    SET_GPR_U32(ctx, 31, 0x2DEFF8u);
    ctx->pc = 0x2DEFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEFF0u;
            // 0x2deff4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFF8u; }
        if (ctx->pc != 0x2DEFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFF8u; }
        if (ctx->pc != 0x2DEFF8u) { return; }
    }
    ctx->pc = 0x2DEFF8u;
label_2deff8:
    // 0x2deff8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2deff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2deffc: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x2deffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2df000: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x2DF000u;
    SET_GPR_U32(ctx, 31, 0x2DF008u);
    ctx->pc = 0x2DF004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF000u;
            // 0x2df004: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF008u; }
        if (ctx->pc != 0x2DF008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF008u; }
        if (ctx->pc != 0x2DF008u) { return; }
    }
    ctx->pc = 0x2DF008u;
label_2df008:
    // 0x2df008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df00c: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x2df00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2df010: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2df010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x2df014: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF014u;
    SET_GPR_U32(ctx, 31, 0x2DF01Cu);
    ctx->pc = 0x2DF018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF014u;
            // 0x2df018: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF01Cu; }
        if (ctx->pc != 0x2DF01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF01Cu; }
        if (ctx->pc != 0x2DF01Cu) { return; }
    }
    ctx->pc = 0x2DF01Cu;
label_2df01c:
    // 0x2df01c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x2df01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x2df020: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF020u;
    SET_GPR_U32(ctx, 31, 0x2DF028u);
    ctx->pc = 0x2DF024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF020u;
            // 0x2df024: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF028u; }
        if (ctx->pc != 0x2DF028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF028u; }
        if (ctx->pc != 0x2DF028u) { return; }
    }
    ctx->pc = 0x2DF028u;
label_2df028:
    // 0x2df028: 0x26640068  addiu       $a0, $s3, 0x68
    ctx->pc = 0x2df028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x2df02c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF02Cu;
    SET_GPR_U32(ctx, 31, 0x2DF034u);
    ctx->pc = 0x2DF030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF02Cu;
            // 0x2df030: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF034u; }
        if (ctx->pc != 0x2DF034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF034u; }
        if (ctx->pc != 0x2DF034u) { return; }
    }
    ctx->pc = 0x2DF034u;
label_2df034:
    // 0x2df034: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2df034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2df038: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF038u;
    SET_GPR_U32(ctx, 31, 0x2DF040u);
    ctx->pc = 0x2DF03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF038u;
            // 0x2df03c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF040u; }
        if (ctx->pc != 0x2DF040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF040u; }
        if (ctx->pc != 0x2DF040u) { return; }
    }
    ctx->pc = 0x2DF040u;
label_2df040:
    // 0x2df040: 0x26640088  addiu       $a0, $s3, 0x88
    ctx->pc = 0x2df040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
    // 0x2df044: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF044u;
    SET_GPR_U32(ctx, 31, 0x2DF04Cu);
    ctx->pc = 0x2DF048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF044u;
            // 0x2df048: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF04Cu; }
        if (ctx->pc != 0x2DF04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF04Cu; }
        if (ctx->pc != 0x2DF04Cu) { return; }
    }
    ctx->pc = 0x2DF04Cu;
label_2df04c:
    // 0x2df04c: 0x26640098  addiu       $a0, $s3, 0x98
    ctx->pc = 0x2df04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x2df050: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF050u;
    SET_GPR_U32(ctx, 31, 0x2DF058u);
    ctx->pc = 0x2DF054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF050u;
            // 0x2df054: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF058u; }
        if (ctx->pc != 0x2DF058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF058u; }
        if (ctx->pc != 0x2DF058u) { return; }
    }
    ctx->pc = 0x2DF058u;
label_2df058:
    // 0x2df058: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2df058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2df05c: 0x266400a8  addiu       $a0, $s3, 0xA8
    ctx->pc = 0x2df05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x2df060: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF060u;
    SET_GPR_U32(ctx, 31, 0x2DF068u);
    ctx->pc = 0x2DF064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF060u;
            // 0x2df064: 0x24a50f28  addiu       $a1, $a1, 0xF28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF068u; }
        if (ctx->pc != 0x2DF068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF068u; }
        if (ctx->pc != 0x2DF068u) { return; }
    }
    ctx->pc = 0x2DF068u;
label_2df068:
    // 0x2df068: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF068u;
    {
        const bool branch_taken_0x2df068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF068u;
            // 0x2df06c: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df068) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DF070u;
    // 0x2df070: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2df070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df074: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2df074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df078: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF078u;
    {
        const bool branch_taken_0x2df078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF078u;
            // 0x2df07c: 0x2861000a  slti        $at, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df078) {
            ctx->pc = 0x2DF0A4u;
            goto label_2df0a4;
        }
    }
    ctx->pc = 0x2DF080u;
    // 0x2df080: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF080u;
    {
        const bool branch_taken_0x2df080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF080u;
            // 0x2df084: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df080) {
            ctx->pc = 0x2DF0A4u;
            goto label_2df0a4;
        }
    }
    ctx->pc = 0x2DF088u;
    // 0x2df088: 0x26640098  addiu       $a0, $s3, 0x98
    ctx->pc = 0x2df088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x2df08c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF08Cu;
    SET_GPR_U32(ctx, 31, 0x2DF094u);
    ctx->pc = 0x2DF090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF08Cu;
            // 0x2df090: 0x24a50f30  addiu       $a1, $a1, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF094u; }
        if (ctx->pc != 0x2DF094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF094u; }
        if (ctx->pc != 0x2DF094u) { return; }
    }
    ctx->pc = 0x2DF094u;
label_2df094:
    // 0x2df094: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2df094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2df098: 0x266400a8  addiu       $a0, $s3, 0xA8
    ctx->pc = 0x2df098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x2df09c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF09Cu;
    SET_GPR_U32(ctx, 31, 0x2DF0A4u);
    ctx->pc = 0x2DF0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF09Cu;
            // 0x2df0a0: 0x24a50f30  addiu       $a1, $a1, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0A4u; }
        if (ctx->pc != 0x2DF0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0A4u; }
        if (ctx->pc != 0x2DF0A4u) { return; }
    }
    ctx->pc = 0x2DF0A4u;
label_2df0a4:
    // 0x2df0a4: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x2df0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2df0a8:
    // 0x2df0a8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF0A8u;
    SET_GPR_U32(ctx, 31, 0x2DF0B0u);
    ctx->pc = 0x2DF0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0A8u;
            // 0x2df0ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0B0u; }
        if (ctx->pc != 0x2DF0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0B0u; }
        if (ctx->pc != 0x2DF0B0u) { return; }
    }
    ctx->pc = 0x2DF0B0u;
label_2df0b0:
    // 0x2df0b0: 0xc0b4a2c  jal         func_2D28B0
    ctx->pc = 0x2DF0B0u;
    SET_GPR_U32(ctx, 31, 0x2DF0B8u);
    ctx->pc = 0x2DF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0B0u;
            // 0x2df0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D28B0u;
    if (runtime->hasFunction(0x2D28B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D28B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0B8u; }
        if (ctx->pc != 0x2DF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAddMapPath__Fi_0x2d28b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0B8u; }
        if (ctx->pc != 0x2DF0B8u) { return; }
    }
    ctx->pc = 0x2DF0B8u;
label_2df0b8:
    // 0x2df0b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DF0B8u;
    {
        const bool branch_taken_0x2df0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0b8) {
            ctx->pc = 0x2DF184u;
            goto label_2df184;
        }
    }
    ctx->pc = 0x2DF0C0u;
    // 0x2df0c0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df0c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DF0C4u;
    {
        const bool branch_taken_0x2df0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0C4u;
            // 0x2df0c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0c4) {
            ctx->pc = 0x2DF184u;
            goto label_2df184;
        }
    }
    ctx->pc = 0x2DF0CCu;
    // 0x2df0cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF0CCu;
    SET_GPR_U32(ctx, 31, 0x2DF0D4u);
    ctx->pc = 0x2DF0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0CCu;
            // 0x2df0d0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0D4u; }
        if (ctx->pc != 0x2DF0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0D4u; }
        if (ctx->pc != 0x2DF0D4u) { return; }
    }
    ctx->pc = 0x2DF0D4u;
label_2df0d4:
    // 0x2df0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df0d8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DF0D8u;
    {
        const bool branch_taken_0x2df0d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0D8u;
            // 0x2df0dc: 0xae6200d8  sw          $v0, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0d8) {
            ctx->pc = 0x2DF11Cu;
            goto label_2df11c;
        }
    }
    ctx->pc = 0x2DF0E0u;
    // 0x2df0e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2df0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df0e4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2df0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2df0e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF0E8u;
    {
        const bool branch_taken_0x2df0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0E8u;
            // 0x2df0ec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0e8) {
            ctx->pc = 0x2DF120u;
            goto label_2df120;
        }
    }
    ctx->pc = 0x2DF0F0u;
    // 0x2df0f0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2df0f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df0f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF0F4u;
    {
        const bool branch_taken_0x2df0f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0F4u;
            // 0x2df0f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0f4) {
            ctx->pc = 0x2DF11Cu;
            goto label_2df11c;
        }
    }
    ctx->pc = 0x2DF0FCu;
    // 0x2df0fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2df0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2df100: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2DF100u;
    SET_GPR_U32(ctx, 31, 0x2DF108u);
    ctx->pc = 0x2DF104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF100u;
            // 0x2df104: 0x24a50f38  addiu       $a1, $a1, 0xF38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF108u; }
        if (ctx->pc != 0x2DF108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF108u; }
        if (ctx->pc != 0x2DF108u) { return; }
    }
    ctx->pc = 0x2DF108u;
label_2df108:
    // 0x2df108: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF108u;
    {
        const bool branch_taken_0x2df108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF108u;
            // 0x2df10c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df108) {
            ctx->pc = 0x2DF11Cu;
            goto label_2df11c;
        }
    }
    ctx->pc = 0x2DF110u;
    // 0x2df110: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2df110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2df114: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF114u;
    SET_GPR_U32(ctx, 31, 0x2DF11Cu);
    ctx->pc = 0x2DF118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF114u;
            // 0x2df118: 0x24a50f48  addiu       $a1, $a1, 0xF48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF11Cu; }
        if (ctx->pc != 0x2DF11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF11Cu; }
        if (ctx->pc != 0x2DF11Cu) { return; }
    }
    ctx->pc = 0x2DF11Cu;
label_2df11c:
    // 0x2df11c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2df11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2df120:
    // 0x2df120: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2df124: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x2DF124u;
    SET_GPR_U32(ctx, 31, 0x2DF12Cu);
    ctx->pc = 0x2DF128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF124u;
            // 0x2df128: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF12Cu; }
        if (ctx->pc != 0x2DF12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF12Cu; }
        if (ctx->pc != 0x2DF12Cu) { return; }
    }
    ctx->pc = 0x2DF12Cu;
label_2df12c:
    // 0x2df12c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2df12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2df130: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x2df134: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF134u;
    SET_GPR_U32(ctx, 31, 0x2DF13Cu);
    ctx->pc = 0x2DF138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF134u;
            // 0x2df138: 0x24a50f58  addiu       $a1, $a1, 0xF58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF13Cu; }
        if (ctx->pc != 0x2DF13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF13Cu; }
        if (ctx->pc != 0x2DF13Cu) { return; }
    }
    ctx->pc = 0x2DF13Cu;
label_2df13c:
    // 0x2df13c: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x2df13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x2df140: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF140u;
    SET_GPR_U32(ctx, 31, 0x2DF148u);
    ctx->pc = 0x2DF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF140u;
            // 0x2df144: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF148u; }
        if (ctx->pc != 0x2DF148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF148u; }
        if (ctx->pc != 0x2DF148u) { return; }
    }
    ctx->pc = 0x2DF148u;
label_2df148:
    // 0x2df148: 0x266400fc  addiu       $a0, $s3, 0xFC
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 252));
    // 0x2df14c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF14Cu;
    SET_GPR_U32(ctx, 31, 0x2DF154u);
    ctx->pc = 0x2DF150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF14Cu;
            // 0x2df150: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF154u; }
        if (ctx->pc != 0x2DF154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF154u; }
        if (ctx->pc != 0x2DF154u) { return; }
    }
    ctx->pc = 0x2DF154u;
label_2df154:
    // 0x2df154: 0x2664010c  addiu       $a0, $s3, 0x10C
    ctx->pc = 0x2df154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 268));
    // 0x2df158: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF158u;
    SET_GPR_U32(ctx, 31, 0x2DF160u);
    ctx->pc = 0x2DF15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF158u;
            // 0x2df15c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF160u; }
        if (ctx->pc != 0x2DF160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF160u; }
        if (ctx->pc != 0x2DF160u) { return; }
    }
    ctx->pc = 0x2DF160u;
label_2df160:
    // 0x2df160: 0x2664011c  addiu       $a0, $s3, 0x11C
    ctx->pc = 0x2df160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x2df164: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF164u;
    SET_GPR_U32(ctx, 31, 0x2DF16Cu);
    ctx->pc = 0x2DF168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF164u;
            // 0x2df168: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF16Cu; }
        if (ctx->pc != 0x2DF16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF16Cu; }
        if (ctx->pc != 0x2DF16Cu) { return; }
    }
    ctx->pc = 0x2DF16Cu;
label_2df16c:
    // 0x2df16c: 0x2664012c  addiu       $a0, $s3, 0x12C
    ctx->pc = 0x2df16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x2df170: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF170u;
    SET_GPR_U32(ctx, 31, 0x2DF178u);
    ctx->pc = 0x2DF174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF170u;
            // 0x2df174: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF178u; }
        if (ctx->pc != 0x2DF178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF178u; }
        if (ctx->pc != 0x2DF178u) { return; }
    }
    ctx->pc = 0x2DF178u;
label_2df178:
    // 0x2df178: 0x2664013c  addiu       $a0, $s3, 0x13C
    ctx->pc = 0x2df178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 316));
    // 0x2df17c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF17Cu;
    SET_GPR_U32(ctx, 31, 0x2DF184u);
    ctx->pc = 0x2DF180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF17Cu;
            // 0x2df180: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF184u; }
        if (ctx->pc != 0x2DF184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF184u; }
        if (ctx->pc != 0x2DF184u) { return; }
    }
    ctx->pc = 0x2DF184u;
label_2df184:
    // 0x2df184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df188:
    // 0x2df188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2df188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df18c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df19c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF19Cu;
            // 0x2df1a0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF1A4u;
}
