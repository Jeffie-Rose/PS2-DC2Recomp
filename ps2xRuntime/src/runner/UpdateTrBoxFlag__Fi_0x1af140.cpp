#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateTrBoxFlag__Fi
// Address: 0x1af140 - 0x1af24c
void UpdateTrBoxFlag__Fi_0x1af140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateTrBoxFlag__Fi_0x1af140");
#endif

    switch (ctx->pc) {
        case 0x1af160u: goto label_1af160;
        case 0x1af16cu: goto label_1af16c;
        case 0x1af17cu: goto label_1af17c;
        case 0x1af18cu: goto label_1af18c;
        case 0x1af194u: goto label_1af194;
        case 0x1af1b0u: goto label_1af1b0;
        case 0x1af1b8u: goto label_1af1b8;
        case 0x1af200u: goto label_1af200;
        case 0x1af220u: goto label_1af220;
        default: break;
    }

    ctx->pc = 0x1af140u;

    // 0x1af140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1af148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af158: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF158u;
    SET_GPR_U32(ctx, 31, 0x1AF160u);
    ctx->pc = 0x1AF15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF158u;
            // 0x1af15c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF160u; }
        if (ctx->pc != 0x1AF160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF160u; }
        if (ctx->pc != 0x1AF160u) { return; }
    }
    ctx->pc = 0x1AF160u;
label_1af160:
    // 0x1af160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af164: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x1AF164u;
    SET_GPR_U32(ctx, 31, 0x1AF16Cu);
    ctx->pc = 0x1AF168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF164u;
            // 0x1af168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (runtime->hasFunction(0x2F6750u)) {
        auto targetFn = runtime->lookupFunction(0x2F6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF16Cu; }
        if (ctx->pc != 0x1AF16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapFlag__9CSaveDataFi_0x2f6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF16Cu; }
        if (ctx->pc != 0x1AF16Cu) { return; }
    }
    ctx->pc = 0x1AF16Cu;
label_1af16c:
    // 0x1af16c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af170: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1af170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x1af174: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF174u;
    SET_GPR_U32(ctx, 31, 0x1AF17Cu);
    ctx->pc = 0x1AF178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF174u;
            // 0x1af178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF17Cu; }
        if (ctx->pc != 0x1AF17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF17Cu; }
        if (ctx->pc != 0x1AF17Cu) { return; }
    }
    ctx->pc = 0x1AF17Cu;
label_1af17c:
    // 0x1af17c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af184: 0xc0581b8  jal         func_1606E0
    ctx->pc = 0x1AF184u;
    SET_GPR_U32(ctx, 31, 0x1AF18Cu);
    ctx->pc = 0x1AF188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF184u;
            // 0x1af188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1606E0u;
    if (runtime->hasFunction(0x1606E0u)) {
        auto targetFn = runtime->lookupFunction(0x1606E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF18Cu; }
        if (ctx->pc != 0x1AF18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateTrBoxFlag__4CMapFP12CMapFlagData_0x1606e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF18Cu; }
        if (ctx->pc != 0x1AF18Cu) { return; }
    }
    ctx->pc = 0x1AF18Cu;
label_1af18c:
    // 0x1af18c: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF18Cu;
    SET_GPR_U32(ctx, 31, 0x1AF194u);
    ctx->pc = 0x1AF190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF18Cu;
            // 0x1af190: 0x8e320c98  lw          $s2, 0xC98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF194u; }
        if (ctx->pc != 0x1AF194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF194u; }
        if (ctx->pc != 0x1AF194u) { return; }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af198: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x1af198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x1af19c: 0x419821  addu        $s3, $v0, $at
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af1a0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1af1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1af1a4: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AF1A4u;
    {
        const bool branch_taken_0x1af1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1A4u;
            // 0x1af1a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1a4) {
            ctx->pc = 0x1AF230u;
            goto label_1af230;
        }
    }
    ctx->pc = 0x1AF1ACu;
    // 0x1af1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af1b0:
    // 0x1af1b0: 0xc058188  jal         func_160620
    ctx->pc = 0x1AF1B0u;
    SET_GPR_U32(ctx, 31, 0x1AF1B8u);
    ctx->pc = 0x1AF1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1B0u;
            // 0x1af1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160620u;
    if (runtime->hasFunction(0x160620u)) {
        auto targetFn = runtime->lookupFunction(0x160620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF1B8u; }
        if (ctx->pc != 0x1AF1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTrBox__4CMapFi_0x160620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF1B8u; }
        if (ctx->pc != 0x1AF1B8u) { return; }
    }
    ctx->pc = 0x1AF1B8u;
label_1af1b8:
    // 0x1af1b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AF1B8u;
    {
        const bool branch_taken_0x1af1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1b8) {
            ctx->pc = 0x1AF220u;
            goto label_1af220;
        }
    }
    ctx->pc = 0x1AF1C0u;
    // 0x1af1c0: 0x8c460670  lw          $a2, 0x670($v0)
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1af1c4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1af1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1cc: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1af1d0: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1af1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1af1d4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1af1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1af1d8: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x1af1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1af1dc: 0x0  nop
    ctx->pc = 0x1af1dcu;
    // NOP
    // 0x1af1e0: 0x0  nop
    ctx->pc = 0x1af1e0u;
    // NOP
    // 0x1af1e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1af1e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1af1e8: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x1af1e8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1af1ec: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1af1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af1f4: 0x3010  mfhi        $a2
    ctx->pc = 0x1af1f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1af1f8: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1AF1F8u;
    SET_GPR_U32(ctx, 31, 0x1AF200u);
    ctx->pc = 0x1AF1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1F8u;
            // 0x1af1fc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF200u; }
        if (ctx->pc != 0x1AF200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF200u; }
        if (ctx->pc != 0x1AF200u) { return; }
    }
    ctx->pc = 0x1AF200u;
label_1af200:
    // 0x1af200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF200u;
    {
        const bool branch_taken_0x1af200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af200) {
            ctx->pc = 0x1AF220u;
            goto label_1af220;
        }
    }
    ctx->pc = 0x1AF208u;
    // 0x1af208: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x1af208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1af20c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF20Cu;
    {
        const bool branch_taken_0x1af20c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF20Cu;
            // 0x1af210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af20c) {
            ctx->pc = 0x1AF220u;
            goto label_1af220;
        }
    }
    ctx->pc = 0x1AF214u;
    // 0x1af214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af218: 0xc05819c  jal         func_160670
    ctx->pc = 0x1AF218u;
    SET_GPR_U32(ctx, 31, 0x1AF220u);
    ctx->pc = 0x1AF21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF218u;
            // 0x1af21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160670u;
    if (runtime->hasFunction(0x160670u)) {
        auto targetFn = runtime->lookupFunction(0x160670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF220u; }
        if (ctx->pc != 0x1AF220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTrBox__4CMapFiP12CMapFlagData_0x160670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF220u; }
        if (ctx->pc != 0x1AF220u) { return; }
    }
    ctx->pc = 0x1AF220u;
label_1af220:
    // 0x1af220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1af224: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1af224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1af228: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1AF228u;
    {
        const bool branch_taken_0x1af228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF228u;
            // 0x1af22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af228) {
            ctx->pc = 0x1AF1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af1b0;
        }
    }
    ctx->pc = 0x1AF230u;
label_1af230:
    // 0x1af230: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af234: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af244: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF244u;
            // 0x1af248: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF24Cu;
}
