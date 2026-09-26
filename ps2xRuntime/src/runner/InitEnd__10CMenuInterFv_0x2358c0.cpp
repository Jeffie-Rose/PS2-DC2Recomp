#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__10CMenuInterFv
// Address: 0x2358c0 - 0x235b48
void InitEnd__10CMenuInterFv_0x2358c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__10CMenuInterFv_0x2358c0");
#endif

    switch (ctx->pc) {
        case 0x2358f4u: goto label_2358f4;
        case 0x235914u: goto label_235914;
        case 0x235928u: goto label_235928;
        case 0x235958u: goto label_235958;
        case 0x23599cu: goto label_23599c;
        case 0x2359b0u: goto label_2359b0;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359f8u: goto label_2359f8;
        case 0x235a10u: goto label_235a10;
        case 0x235a28u: goto label_235a28;
        case 0x235a48u: goto label_235a48;
        case 0x235a78u: goto label_235a78;
        case 0x235a88u: goto label_235a88;
        case 0x235a9cu: goto label_235a9c;
        case 0x235ab4u: goto label_235ab4;
        case 0x235accu: goto label_235acc;
        case 0x235ad8u: goto label_235ad8;
        case 0x235b00u: goto label_235b00;
        case 0x235b08u: goto label_235b08;
        case 0x235b28u: goto label_235b28;
        default: break;
    }

    ctx->pc = 0x2358c0u;

    // 0x2358c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2358c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2358c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2358c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2358c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2358c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2358cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2358ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2358d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2358d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2358d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2358d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2358d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2358d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358dc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2358e0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2358e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2358e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2358e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e8: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2358e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2358ec: 0xc05231c  jal         func_148C70
    ctx->pc = 0x2358ECu;
    SET_GPR_U32(ctx, 31, 0x2358F4u);
    ctx->pc = 0x2358F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2358ECu;
            // 0x2358f0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358F4u; }
        if (ctx->pc != 0x2358F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358F4u; }
        if (ctx->pc != 0x2358F4u) { return; }
    }
    ctx->pc = 0x2358F4u;
label_2358f4:
    // 0x2358f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2358F4u;
    {
        const bool branch_taken_0x2358f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2358f4) {
            ctx->pc = 0x235958u;
            goto label_235958;
        }
    }
    ctx->pc = 0x2358FCu;
    // 0x2358fc: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x2358fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x235900: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x235900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x235904: 0x8c460114  lw          $a2, 0x114($v0)
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x235908: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x235908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23590c: 0xc08d5e4  jal         func_235790
    ctx->pc = 0x23590Cu;
    SET_GPR_U32(ctx, 31, 0x235914u);
    ctx->pc = 0x235910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23590Cu;
            // 0x235910: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235790u;
    if (runtime->hasFunction(0x235790u)) {
        auto targetFn = runtime->lookupFunction(0x235790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235914u; }
        if (ctx->pc != 0x235914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCommonBaseDataEnter__FP9mgCMemoryPUiii_0x235790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235914u; }
        if (ctx->pc != 0x235914u) { return; }
    }
    ctx->pc = 0x235914u;
label_235914:
    // 0x235914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235918: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x235918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23591c: 0x2484d4f0  addiu       $a0, $a0, -0x2B10
    ctx->pc = 0x23591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
    // 0x235920: 0xc04e780  jal         func_139E00
    ctx->pc = 0x235920u;
    SET_GPR_U32(ctx, 31, 0x235928u);
    ctx->pc = 0x235924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235920u;
            // 0x235924: 0xa2220015  sb          $v0, 0x15($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235928u; }
        if (ctx->pc != 0x235928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235928u; }
        if (ctx->pc != 0x235928u) { return; }
    }
    ctx->pc = 0x235928u;
label_235928:
    // 0x235928: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23592c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23592cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x235930: 0x8c23d518  lw          $v1, -0x2AE8($at)
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956312)));
    // 0x235934: 0x2484d520  addiu       $a0, $a0, -0x2AE0
    ctx->pc = 0x235934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956320));
    // 0x235938: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23593c: 0x8c25d514  lw          $a1, -0x2AEC($at)
    ctx->pc = 0x23593cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956308)));
    // 0x235940: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x235944: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x235948: 0x8c22d510  lw          $v0, -0x2AF0($at)
    ctx->pc = 0x235948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956304)));
    // 0x23594c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x23594cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x235950: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x235950u;
    SET_GPR_U32(ctx, 31, 0x235958u);
    ctx->pc = 0x235954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235950u;
            // 0x235954: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235958u; }
        if (ctx->pc != 0x235958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235958u; }
        if (ctx->pc != 0x235958u) { return; }
    }
    ctx->pc = 0x235958u;
label_235958:
    // 0x235958: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23595c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235960: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x235960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x235964: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x235964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x235968: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23596c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23596cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x235970: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235974: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x235974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x235978: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235978u;
    {
        const bool branch_taken_0x235978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235978) {
            ctx->pc = 0x235984u;
            goto label_235984;
        }
    }
    ctx->pc = 0x235980u;
    // 0x235980: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x235980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_235984:
    // 0x235984: 0x8f9194f8  lw          $s1, -0x6B08($gp)
    ctx->pc = 0x235984u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235988: 0x8e240138  lw          $a0, 0x138($s1)
    ctx->pc = 0x235988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x23598c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23598Cu;
    {
        const bool branch_taken_0x23598c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23598Cu;
            // 0x235990: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23598c) {
            ctx->pc = 0x23599Cu;
            goto label_23599c;
        }
    }
    ctx->pc = 0x235994u;
    // 0x235994: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x235994u;
    SET_GPR_U32(ctx, 31, 0x23599Cu);
    ctx->pc = 0x235998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235994u;
            // 0x235998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23599Cu; }
        if (ctx->pc != 0x23599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23599Cu; }
        if (ctx->pc != 0x23599Cu) { return; }
    }
    ctx->pc = 0x23599Cu;
label_23599c:
    // 0x23599c: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x23599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2359a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2359A0u;
    {
        const bool branch_taken_0x2359a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359A0u;
            // 0x2359a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359a0) {
            ctx->pc = 0x2359B0u;
            goto label_2359b0;
        }
    }
    ctx->pc = 0x2359A8u;
    // 0x2359a8: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x2359A8u;
    SET_GPR_U32(ctx, 31, 0x2359B0u);
    ctx->pc = 0x2359ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2359A8u;
            // 0x2359ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359B0u; }
        if (ctx->pc != 0x2359B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359B0u; }
        if (ctx->pc != 0x2359B0u) { return; }
    }
    ctx->pc = 0x2359B0u;
label_2359b0:
    // 0x2359b0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2359b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2359b4: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2359B4u;
    SET_GPR_U32(ctx, 31, 0x2359BCu);
    ctx->pc = 0x2359B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2359B4u;
            // 0x2359b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359BCu; }
        if (ctx->pc != 0x2359BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359BCu; }
        if (ctx->pc != 0x2359BCu) { return; }
    }
    ctx->pc = 0x2359BCu;
label_2359bc:
    // 0x2359bc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2359bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2359c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2359c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2359c4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2359C4u;
    SET_GPR_U32(ctx, 31, 0x2359CCu);
    ctx->pc = 0x2359C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2359C4u;
            // 0x2359c8: 0x24a5a9c0  addiu       $a1, $a1, -0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359CCu; }
        if (ctx->pc != 0x2359CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359CCu; }
        if (ctx->pc != 0x2359CCu) { return; }
    }
    ctx->pc = 0x2359CCu;
label_2359cc:
    // 0x2359cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2359ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359d0: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2359D0u;
    {
        const bool branch_taken_0x2359d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2359d0) {
            ctx->pc = 0x235B00u;
            goto label_235b00;
        }
    }
    ctx->pc = 0x2359D8u;
    // 0x2359d8: 0xdf839570  ld          $v1, -0x6A90($gp)
    ctx->pc = 0x2359d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940016)));
    // 0x2359dc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2359dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2359e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2359e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2359e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2359e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2359e8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2359e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2359ec: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2359ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2359f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2359F0u;
    SET_GPR_U32(ctx, 31, 0x2359F8u);
    ctx->pc = 0x2359F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2359F0u;
            // 0x2359f4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359F8u; }
        if (ctx->pc != 0x2359F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359F8u; }
        if (ctx->pc != 0x2359F8u) { return; }
    }
    ctx->pc = 0x2359F8u;
label_2359f8:
    // 0x2359f8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2359f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2359fc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2359fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a00: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x235a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x235a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x235a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235a08: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235A08u;
    SET_GPR_U32(ctx, 31, 0x235A10u);
    ctx->pc = 0x235A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A08u;
            // 0x235a0c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A10u; }
        if (ctx->pc != 0x235A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A10u; }
        if (ctx->pc != 0x235A10u) { return; }
    }
    ctx->pc = 0x235A10u;
label_235a10:
    // 0x235a10: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x235a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x235a14: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x235a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235a18: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x235a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x235a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235a20: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235A20u;
    SET_GPR_U32(ctx, 31, 0x235A28u);
    ctx->pc = 0x235A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A20u;
            // 0x235a24: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A28u; }
        if (ctx->pc != 0x235A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A28u; }
        if (ctx->pc != 0x235A28u) { return; }
    }
    ctx->pc = 0x235A28u;
label_235a28:
    // 0x235a28: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x235a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235a2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x235a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x235a34: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x235a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235a3c: 0x8c730138  lw          $s3, 0x138($v1)
    ctx->pc = 0x235a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x235a40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235A40u;
    SET_GPR_U32(ctx, 31, 0x235A48u);
    ctx->pc = 0x235A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A40u;
            // 0x235a44: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A48u; }
        if (ctx->pc != 0x235A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A48u; }
        if (ctx->pc != 0x235A48u) { return; }
    }
    ctx->pc = 0x235A48u;
label_235a48:
    // 0x235a48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x235a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235a4c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x235a50: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x235a50u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235a54: 0x0  nop
    ctx->pc = 0x235a54u;
    // NOP
    // 0x235a58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235a5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235a60: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x235a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x235a64: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x235a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x235a68: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235a6c: 0x8c440138  lw          $a0, 0x138($v0)
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x235a70: 0xc08a264  jal         func_228990
    ctx->pc = 0x235A70u;
    SET_GPR_U32(ctx, 31, 0x235A78u);
    ctx->pc = 0x235A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A70u;
            // 0x235a74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A78u; }
        if (ctx->pc != 0x235A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A78u; }
        if (ctx->pc != 0x235A78u) { return; }
    }
    ctx->pc = 0x235A78u;
label_235a78:
    // 0x235a78: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x235a7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235a80: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235A80u;
    SET_GPR_U32(ctx, 31, 0x235A88u);
    ctx->pc = 0x235A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A80u;
            // 0x235a84: 0x24a5a9c8  addiu       $a1, $a1, -0x5638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A88u; }
        if (ctx->pc != 0x235A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A88u; }
        if (ctx->pc != 0x235A88u) { return; }
    }
    ctx->pc = 0x235A88u;
label_235a88:
    // 0x235a88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x235a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a8c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x235A8Cu;
    {
        const bool branch_taken_0x235a8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a8c) {
            ctx->pc = 0x235B00u;
            goto label_235b00;
        }
    }
    ctx->pc = 0x235A94u;
    // 0x235a94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235A94u;
    SET_GPR_U32(ctx, 31, 0x235A9Cu);
    ctx->pc = 0x235A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A94u;
            // 0x235a98: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A9Cu; }
        if (ctx->pc != 0x235A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A9Cu; }
        if (ctx->pc != 0x235A9Cu) { return; }
    }
    ctx->pc = 0x235A9Cu;
label_235a9c:
    // 0x235a9c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x235a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x235aa0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x235aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235aa4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x235aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235aac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235AACu;
    SET_GPR_U32(ctx, 31, 0x235AB4u);
    ctx->pc = 0x235AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235AACu;
            // 0x235ab0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AB4u; }
        if (ctx->pc != 0x235AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AB4u; }
        if (ctx->pc != 0x235AB4u) { return; }
    }
    ctx->pc = 0x235AB4u;
label_235ab4:
    // 0x235ab4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x235ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x235ab8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x235ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235abc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x235abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x235ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235ac4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235AC4u;
    SET_GPR_U32(ctx, 31, 0x235ACCu);
    ctx->pc = 0x235AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235AC4u;
            // 0x235ac8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235ACCu; }
        if (ctx->pc != 0x235ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235ACCu; }
        if (ctx->pc != 0x235ACCu) { return; }
    }
    ctx->pc = 0x235ACCu;
label_235acc:
    // 0x235acc: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x235accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235ad0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x235AD0u;
    SET_GPR_U32(ctx, 31, 0x235AD8u);
    ctx->pc = 0x235AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235AD0u;
            // 0x235ad4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AD8u; }
        if (ctx->pc != 0x235AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AD8u; }
        if (ctx->pc != 0x235AD8u) { return; }
    }
    ctx->pc = 0x235AD8u;
label_235ad8:
    // 0x235ad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x235ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ae0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x235ae0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235ae4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x235ae8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235aec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x235aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235af4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x235af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x235af8: 0xc08a264  jal         func_228990
    ctx->pc = 0x235AF8u;
    SET_GPR_U32(ctx, 31, 0x235B00u);
    ctx->pc = 0x235AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235AF8u;
            // 0x235afc: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B00u; }
        if (ctx->pc != 0x235B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B00u; }
        if (ctx->pc != 0x235B00u) { return; }
    }
    ctx->pc = 0x235B00u;
label_235b00:
    // 0x235b00: 0xc08d220  jal         func_234880
    ctx->pc = 0x235B00u;
    SET_GPR_U32(ctx, 31, 0x235B08u);
    ctx->pc = 0x235B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235B00u;
            // 0x235b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B08u; }
        if (ctx->pc != 0x235B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B08u; }
        if (ctx->pc != 0x235B08u) { return; }
    }
    ctx->pc = 0x235B08u;
label_235b08:
    // 0x235b08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x235b0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235b10: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x235b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b18: 0x24a5a760  addiu       $a1, $a1, -0x58A0
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944608));
    // 0x235b1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x235b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235b20: 0xc04b414  jal         func_12D050
    ctx->pc = 0x235B20u;
    SET_GPR_U32(ctx, 31, 0x235B28u);
    ctx->pc = 0x235B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235B20u;
            // 0x235b24: 0xaf829508  sw          $v0, -0x6AF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B28u; }
        if (ctx->pc != 0x235B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B28u; }
        if (ctx->pc != 0x235B28u) { return; }
    }
    ctx->pc = 0x235B28u;
label_235b28:
    // 0x235b28: 0xaf82950c  sw          $v0, -0x6AF4($gp)
    ctx->pc = 0x235b28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939916), GPR_U32(ctx, 2));
    // 0x235b2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x235b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235b34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x235b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x235b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b40: 0x3e00008  jr          $ra
    ctx->pc = 0x235B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B40u;
            // 0x235b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235B48u;
}
