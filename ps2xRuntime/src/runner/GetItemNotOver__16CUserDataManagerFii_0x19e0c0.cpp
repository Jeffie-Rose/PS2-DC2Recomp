#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemNotOver__16CUserDataManagerFii
// Address: 0x19e0c0 - 0x19e3e4
void GetItemNotOver__16CUserDataManagerFii_0x19e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemNotOver__16CUserDataManagerFii_0x19e0c0");
#endif

    switch (ctx->pc) {
        case 0x19e100u: goto label_19e100;
        case 0x19e120u: goto label_19e120;
        case 0x19e148u: goto label_19e148;
        case 0x19e160u: goto label_19e160;
        case 0x19e174u: goto label_19e174;
        case 0x19e188u: goto label_19e188;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e208u: goto label_19e208;
        case 0x19e214u: goto label_19e214;
        case 0x19e228u: goto label_19e228;
        case 0x19e238u: goto label_19e238;
        case 0x19e248u: goto label_19e248;
        case 0x19e270u: goto label_19e270;
        case 0x19e294u: goto label_19e294;
        case 0x19e2acu: goto label_19e2ac;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2c8u: goto label_19e2c8;
        case 0x19e2dcu: goto label_19e2dc;
        case 0x19e2ecu: goto label_19e2ec;
        case 0x19e318u: goto label_19e318;
        case 0x19e338u: goto label_19e338;
        case 0x19e348u: goto label_19e348;
        case 0x19e360u: goto label_19e360;
        case 0x19e378u: goto label_19e378;
        default: break;
    }

    ctx->pc = 0x19e0c0u;

    // 0x19e0c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19e0c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19e0c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19e0cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19e0d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e0d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e0d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e0dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e0ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0f4: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x19e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x19e0f8: 0xc065708  jal         func_195C20
    ctx->pc = 0x19E0F8u;
    SET_GPR_U32(ctx, 31, 0x19E100u);
    ctx->pc = 0x19E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0F8u;
            // 0x19e0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E100u; }
        if (ctx->pc != 0x19E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E100u; }
        if (ctx->pc != 0x19E100u) { return; }
    }
    ctx->pc = 0x19E100u;
label_19e100:
    // 0x19e100: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x19e100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x19e104: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x19e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19e108: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E108u;
    {
        const bool branch_taken_0x19e108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E108u;
            // 0x19e10c: 0x240200f6  addiu       $v0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e108) {
            ctx->pc = 0x19E128u;
            goto label_19e128;
        }
    }
    ctx->pc = 0x19E110u;
    // 0x19e110: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19e110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19e114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e118: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19E118u;
    SET_GPR_U32(ctx, 31, 0x19E120u);
    ctx->pc = 0x19E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E118u;
            // 0x19e11c: 0x24845a00  addiu       $a0, $a0, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E120u; }
        if (ctx->pc != 0x19E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E120u; }
        if (ctx->pc != 0x19E120u) { return; }
    }
    ctx->pc = 0x19E120u;
label_19e120:
    // 0x19e120: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x19E120u;
    {
        const bool branch_taken_0x19e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E120u;
            // 0x19e124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e120) {
            ctx->pc = 0x19E3B4u;
            goto label_19e3b4;
        }
    }
    ctx->pc = 0x19E128u;
label_19e128:
    // 0x19e128: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19E128u;
    {
        const bool branch_taken_0x19e128 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E128u;
            // 0x19e12c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e128) {
            ctx->pc = 0x19E1A4u;
            goto label_19e1a4;
        }
    }
    ctx->pc = 0x19E130u;
    // 0x19e130: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x19e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19e134: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x19e138: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e13c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19e13cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e140: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19e140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e144: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19e144u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_19e148:
    // 0x19e148: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x19e14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e150: 0x8c5400b0  lw          $s4, 0xB0($v0)
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x19e154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e158: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19E158u;
    SET_GPR_U32(ctx, 31, 0x19E160u);
    ctx->pc = 0x19E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E158u;
            // 0x19e15c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E160u; }
        if (ctx->pc != 0x19E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E160u; }
        if (ctx->pc != 0x19E160u) { return; }
    }
    ctx->pc = 0x19E160u;
label_19e160:
    // 0x19e160: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E160u;
    {
        const bool branch_taken_0x19e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E160u;
            // 0x19e164: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e160) {
            ctx->pc = 0x19E174u;
            goto label_19e174;
        }
    }
    ctx->pc = 0x19E168u;
    // 0x19e168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e16c: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19E16Cu;
    SET_GPR_U32(ctx, 31, 0x19E174u);
    ctx->pc = 0x19E170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E16Cu;
            // 0x19e170: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E174u; }
        if (ctx->pc != 0x19E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E174u; }
        if (ctx->pc != 0x19E174u) { return; }
    }
    ctx->pc = 0x19E174u;
label_19e174:
    // 0x19e174: 0x0  nop
    ctx->pc = 0x19e174u;
    // NOP
    // 0x19e178: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19e178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e180: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x19E180u;
    SET_GPR_U32(ctx, 31, 0x19E188u);
    ctx->pc = 0x19E184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E180u;
            // 0x19e184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D330u;
    if (runtime->hasFunction(0x19D330u)) {
        auto targetFn = runtime->lookupFunction(0x19D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E188u; }
        if (ctx->pc != 0x19E188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E188u; }
        if (ctx->pc != 0x19E188u) { return; }
    }
    ctx->pc = 0x19E188u;
label_19e188:
    // 0x19e188: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19e18c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x19e18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19e190: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x19E190u;
    {
        const bool branch_taken_0x19e190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E190u;
            // 0x19e194: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e190) {
            ctx->pc = 0x19E148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E198u;
    // 0x19e198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e19c: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x19E19Cu;
    SET_GPR_U32(ctx, 31, 0x19E1A4u);
    ctx->pc = 0x19E1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E19Cu;
            // 0x19e1a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    }
    ctx->pc = 0x19E1A4u;
label_19e1a4:
    // 0x19e1a4: 0xc06421c  jal         func_190870
    ctx->pc = 0x19E1A4u;
    SET_GPR_U32(ctx, 31, 0x19E1ACu);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1ACu; }
        if (ctx->pc != 0x19E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1ACu; }
        if (ctx->pc != 0x19E1ACu) { return; }
    }
    ctx->pc = 0x19E1ACu;
label_19e1ac:
    // 0x19e1ac: 0x24442f90  addiu       $a0, $v0, 0x2F90
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x19e1b0: 0x24020131  addiu       $v0, $zero, 0x131
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x19e1b4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E1B4u;
    {
        const bool branch_taken_0x19e1b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1B4u;
            // 0x19e1b8: 0x24020132  addiu       $v0, $zero, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1b4) {
            ctx->pc = 0x19E1D0u;
            goto label_19e1d0;
        }
    }
    ctx->pc = 0x19E1BCu;
    // 0x19e1bc: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x19e1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e1c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19e1c8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x19E1C8u;
    {
        const bool branch_taken_0x19e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1C8u;
            // 0x19e1cc: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1c8) {
            ctx->pc = 0x19E3B4u;
            goto label_19e3b4;
        }
    }
    ctx->pc = 0x19E1D0u;
label_19e1d0:
    // 0x19e1d0: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E1D0u;
    {
        const bool branch_taken_0x19e1d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1D0u;
            // 0x19e1d4: 0x24020134  addiu       $v0, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1d0) {
            ctx->pc = 0x19E1ECu;
            goto label_19e1ec;
        }
    }
    ctx->pc = 0x19E1D8u;
    // 0x19e1d8: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x19e1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e1e0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x19e1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x19e1e4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x19E1E4u;
    {
        const bool branch_taken_0x19e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1E4u;
            // 0x19e1e8: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1e4) {
            ctx->pc = 0x19E3B4u;
            goto label_19e3b4;
        }
    }
    ctx->pc = 0x19E1ECu;
label_19e1ec:
    // 0x19e1ec: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E1ECu;
    {
        const bool branch_taken_0x19e1ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1ECu;
            // 0x19e1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1ec) {
            ctx->pc = 0x19E20Cu;
            goto label_19e20c;
        }
    }
    ctx->pc = 0x19E1F4u;
    // 0x19e1f4: 0x26244eb0  addiu       $a0, $s1, 0x4EB0
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20144));
    // 0x19e1f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E1F8u;
    {
        const bool branch_taken_0x19e1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1f8) {
            ctx->pc = 0x19E208u;
            goto label_19e208;
        }
    }
    ctx->pc = 0x19E200u;
    // 0x19e200: 0xc066ad4  jal         func_19AB50
    ctx->pc = 0x19E200u;
    SET_GPR_U32(ctx, 31, 0x19E208u);
    ctx->pc = 0x19AB50u;
    if (runtime->hasFunction(0x19AB50u)) {
        auto targetFn = runtime->lookupFunction(0x19AB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E208u; }
        if (ctx->pc != 0x19E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterBoxFv_0x19ab50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E208u; }
        if (ctx->pc != 0x19E208u) { return; }
    }
    ctx->pc = 0x19E208u;
label_19e208:
    // 0x19e208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e20c:
    // 0x19e20c: 0xc067ae4  jal         func_19EB90
    ctx->pc = 0x19E20Cu;
    SET_GPR_U32(ctx, 31, 0x19E214u);
    ctx->pc = 0x19E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E20Cu;
            // 0x19e210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB90u;
    if (runtime->hasFunction(0x19EB90u)) {
        auto targetFn = runtime->lookupFunction(0x19EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E214u; }
        if (ctx->pc != 0x19E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostume__16CUserDataManagerFi_0x19eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E214u; }
        if (ctx->pc != 0x19E214u) { return; }
    }
    ctx->pc = 0x19E214u;
label_19e214:
    // 0x19e214: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x19e218: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E218u;
    {
        const bool branch_taken_0x19e218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E218u;
            // 0x19e21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e218) {
            ctx->pc = 0x19E23Cu;
            goto label_19e23c;
        }
    }
    ctx->pc = 0x19E220u;
    // 0x19e220: 0xc064220  jal         func_190880
    ctx->pc = 0x19E220u;
    SET_GPR_U32(ctx, 31, 0x19E228u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E228u; }
        if (ctx->pc != 0x19E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E228u; }
        if (ctx->pc != 0x19E228u) { return; }
    }
    ctx->pc = 0x19E228u;
label_19e228:
    // 0x19e228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e22c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19e230: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x19E230u;
    SET_GPR_U32(ctx, 31, 0x19E238u);
    ctx->pc = 0x19E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E230u;
            // 0x19e234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E238u; }
        if (ctx->pc != 0x19E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E238u; }
        if (ctx->pc != 0x19E238u) { return; }
    }
    ctx->pc = 0x19E238u;
label_19e238:
    // 0x19e238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e23c:
    // 0x19e23c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e240: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x19E240u;
    SET_GPR_U32(ctx, 31, 0x19E248u);
    ctx->pc = 0x19E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E240u;
            // 0x19e244: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E248u; }
        if (ctx->pc != 0x19E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E248u; }
        if (ctx->pc != 0x19E248u) { return; }
    }
    ctx->pc = 0x19E248u;
label_19e248:
    // 0x19e248: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19e248u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e24c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19e250: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x19e250u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x19e254: 0x2a6082a  slt         $at, $s5, $a2
    ctx->pc = 0x19e254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19e258: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x19E258u;
    {
        const bool branch_taken_0x19e258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E258u;
            // 0x19e25c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e258) {
            ctx->pc = 0x19E28Cu;
            goto label_19e28c;
        }
    }
    ctx->pc = 0x19E260u;
    // 0x19e260: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19e260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19e264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e268: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19E268u;
    SET_GPR_U32(ctx, 31, 0x19E270u);
    ctx->pc = 0x19E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E268u;
            // 0x19e26c: 0x24845a20  addiu       $a0, $a0, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E270u; }
        if (ctx->pc != 0x19E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E270u; }
        if (ctx->pc != 0x19E270u) { return; }
    }
    ctx->pc = 0x19E270u;
label_19e270:
    // 0x19e270: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19e274: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x19e274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x19e278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e27c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x19E27Cu;
    {
        const bool branch_taken_0x19e27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E27Cu;
            // 0x19e280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e27c) {
            ctx->pc = 0x19E3ACu;
            goto label_19e3ac;
        }
    }
    ctx->pc = 0x19E284u;
    // 0x19e284: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x19E284u;
    {
        const bool branch_taken_0x19e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E284u;
            // 0x19e288: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e284) {
            ctx->pc = 0x19E3B8u;
            goto label_19e3b8;
        }
    }
    ctx->pc = 0x19E28Cu;
label_19e28c:
    // 0x19e28c: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19E28Cu;
    SET_GPR_U32(ctx, 31, 0x19E294u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    }
    ctx->pc = 0x19E294u;
label_19e294:
    // 0x19e294: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x19e294u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e298: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19e29c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e2a0: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x19E2A0u;
    {
        const bool branch_taken_0x19e2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2A0u;
            // 0x19e2a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2a0) {
            ctx->pc = 0x19E3ACu;
            goto label_19e3ac;
        }
    }
    ctx->pc = 0x19E2A8u;
    // 0x19e2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e2ac:
    // 0x19e2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2b0: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19E2B0u;
    SET_GPR_U32(ctx, 31, 0x19E2B8u);
    ctx->pc = 0x19E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2B0u;
            // 0x19e2b4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2B8u; }
        if (ctx->pc != 0x19E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2B8u; }
        if (ctx->pc != 0x19E2B8u) { return; }
    }
    ctx->pc = 0x19E2B8u;
label_19e2b8:
    // 0x19e2b8: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x19e2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x19e2bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x19E2C0u;
    {
        const bool branch_taken_0x19e2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2C0u;
            // 0x19e2c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2c0) {
            ctx->pc = 0x19E310u;
            goto label_19e310;
        }
    }
    ctx->pc = 0x19E2C8u;
label_19e2c8:
    // 0x19e2c8: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x19e2cc: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E2CCu;
    {
        const bool branch_taken_0x19e2cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2CCu;
            // 0x19e2d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2cc) {
            ctx->pc = 0x19E2FCu;
            goto label_19e2fc;
        }
    }
    ctx->pc = 0x19E2D4u;
    // 0x19e2d4: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x19E2D4u;
    SET_GPR_U32(ctx, 31, 0x19E2DCu);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2DCu; }
        if (ctx->pc != 0x19E2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2DCu; }
        if (ctx->pc != 0x19E2DCu) { return; }
    }
    ctx->pc = 0x19E2DCu;
label_19e2dc:
    // 0x19e2dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E2DCu;
    {
        const bool branch_taken_0x19e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2DCu;
            // 0x19e2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2dc) {
            ctx->pc = 0x19E2FCu;
            goto label_19e2fc;
        }
    }
    ctx->pc = 0x19E2E4u;
    // 0x19e2e4: 0xc065c9c  jal         func_197270
    ctx->pc = 0x19E2E4u;
    SET_GPR_U32(ctx, 31, 0x19E2ECu);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ECu; }
        if (ctx->pc != 0x19E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ECu; }
        if (ctx->pc != 0x19E2ECu) { return; }
    }
    ctx->pc = 0x19E2ECu;
label_19e2ec:
    // 0x19e2ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E2ECu;
    {
        const bool branch_taken_0x19e2ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19e2ec) {
            ctx->pc = 0x19E2FCu;
            goto label_19e2fc;
        }
    }
    ctx->pc = 0x19E2F4u;
    // 0x19e2f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19E2F4u;
    {
        const bool branch_taken_0x19e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2F4u;
            // 0x19e2f8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2f4) {
            ctx->pc = 0x19E310u;
            goto label_19e310;
        }
    }
    ctx->pc = 0x19E2FCu;
label_19e2fc:
    // 0x19e2fc: 0x0  nop
    ctx->pc = 0x19e2fcu;
    // NOP
    // 0x19e300: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19e304: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x19e304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x19e308: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19E308u;
    {
        const bool branch_taken_0x19e308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E308u;
            // 0x19e30c: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e308) {
            ctx->pc = 0x19E2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e2c8;
        }
    }
    ctx->pc = 0x19E310u;
label_19e310:
    // 0x19e310: 0xc067610  jal         func_19D840
    ctx->pc = 0x19E310u;
    SET_GPR_U32(ctx, 31, 0x19E318u);
    ctx->pc = 0x19E314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E310u;
            // 0x19e314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E318u; }
        if (ctx->pc != 0x19E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E318u; }
        if (ctx->pc != 0x19E318u) { return; }
    }
    ctx->pc = 0x19E318u;
label_19e318:
    // 0x19e318: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e31c: 0x83828b78  lb          $v0, -0x7488($gp)
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937464)));
    // 0x19e320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E320u;
    {
        const bool branch_taken_0x19e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E320u;
            // 0x19e324: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e320) {
            ctx->pc = 0x19E338u;
            goto label_19e338;
        }
    }
    ctx->pc = 0x19E328u;
    // 0x19e328: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19e32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e330: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19E330u;
    SET_GPR_U32(ctx, 31, 0x19E338u);
    ctx->pc = 0x19E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E330u;
            // 0x19e334: 0x24845a60  addiu       $a0, $a0, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    }
    ctx->pc = 0x19E338u;
label_19e338:
    // 0x19e338: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E338u;
    {
        const bool branch_taken_0x19e338 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x19E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E338u;
            // 0x19e33c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e338) {
            ctx->pc = 0x19E350u;
            goto label_19e350;
        }
    }
    ctx->pc = 0x19E340u;
    // 0x19e340: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19E340u;
    SET_GPR_U32(ctx, 31, 0x19E348u);
    ctx->pc = 0x19E344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E340u;
            // 0x19e344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E348u; }
        if (ctx->pc != 0x19E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E348u; }
        if (ctx->pc != 0x19E348u) { return; }
    }
    ctx->pc = 0x19E348u;
label_19e348:
    // 0x19e348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19E348u;
    {
        const bool branch_taken_0x19e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E348u;
            // 0x19e34c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e348) {
            ctx->pc = 0x19E364u;
            goto label_19e364;
        }
    }
    ctx->pc = 0x19E350u;
label_19e350:
    // 0x19e350: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E350u;
    {
        const bool branch_taken_0x19e350 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x19E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E350u;
            // 0x19e354: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e350) {
            ctx->pc = 0x19E364u;
            goto label_19e364;
        }
    }
    ctx->pc = 0x19E358u;
    // 0x19e358: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19E358u;
    SET_GPR_U32(ctx, 31, 0x19E360u);
    ctx->pc = 0x19E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E358u;
            // 0x19e35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E360u; }
        if (ctx->pc != 0x19E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E360u; }
        if (ctx->pc != 0x19E360u) { return; }
    }
    ctx->pc = 0x19E360u;
label_19e360:
    // 0x19e360: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19e360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e364:
    // 0x19e364: 0x0  nop
    ctx->pc = 0x19e364u;
    // NOP
    // 0x19e368: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e370: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x19E370u;
    SET_GPR_U32(ctx, 31, 0x19E378u);
    ctx->pc = 0x19E374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E370u;
            // 0x19e374: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E378u; }
        if (ctx->pc != 0x19E378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E378u; }
        if (ctx->pc != 0x19E378u) { return; }
    }
    ctx->pc = 0x19E378u;
label_19e378:
    // 0x19e378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E378u;
    {
        const bool branch_taken_0x19e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e378) {
            ctx->pc = 0x19E398u;
            goto label_19e398;
        }
    }
    ctx->pc = 0x19E380u;
    // 0x19e380: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x19e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19e384: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19e384u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19e388: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x19e388u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x19e38c: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x19e38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e390: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E390u;
    {
        const bool branch_taken_0x19e390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E390u;
            // 0x19e394: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e390) {
            ctx->pc = 0x19E3ACu;
            goto label_19e3ac;
        }
    }
    ctx->pc = 0x19E398u;
label_19e398:
    // 0x19e398: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19e39c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19e39cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x19e3a0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19e3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e3a4: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x19E3A4u;
    {
        const bool branch_taken_0x19e3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3A4u;
            // 0x19e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3a4) {
            ctx->pc = 0x19E2ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e2ac;
        }
    }
    ctx->pc = 0x19E3ACu;
label_19e3ac:
    // 0x19e3ac: 0x0  nop
    ctx->pc = 0x19e3acu;
    // NOP
    // 0x19e3b0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x19e3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19e3b4:
    // 0x19e3b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19e3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19e3b8:
    // 0x19e3b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19e3b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e3bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19e3bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e3c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e3c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e3c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e3c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e3c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e3cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e3d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e3d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3DCu;
            // 0x19e3e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E3E4u;
}
