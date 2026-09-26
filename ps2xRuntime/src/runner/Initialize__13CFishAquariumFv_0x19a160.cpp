#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CFishAquariumFv
// Address: 0x19a160 - 0x19a220
void Initialize__13CFishAquariumFv_0x19a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CFishAquariumFv_0x19a160");
#endif

    switch (ctx->pc) {
        case 0x19a188u: goto label_19a188;
        case 0x19a194u: goto label_19a194;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1e4u: goto label_19a1e4;
        default: break;
    }

    ctx->pc = 0x19a160u;

    // 0x19a160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19a168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a170: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19a170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a17c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x19a17cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a184: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x19a184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
label_19a188:
    // 0x19a188: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x19a18c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19A18Cu;
    SET_GPR_U32(ctx, 31, 0x19A194u);
    ctx->pc = 0x19A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A18Cu;
            // 0x19a190: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A194u; }
        if (ctx->pc != 0x19A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A194u; }
        if (ctx->pc != 0x19A194u) { return; }
    }
    ctx->pc = 0x19A194u;
label_19a194:
    // 0x19a194: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19a194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19a198: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x19a19c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x19a19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19a1a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19A1A0u;
    {
        const bool branch_taken_0x19a1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a1a0) {
            ctx->pc = 0x19A188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a188;
        }
    }
    ctx->pc = 0x19A1A8u;
    // 0x19a1a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19a1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a1b0:
    // 0x19a1b0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x19a1b4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19A1B4u;
    SET_GPR_U32(ctx, 31, 0x19A1BCu);
    ctx->pc = 0x19A1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1B4u;
            // 0x19a1b8: 0x2444028c  addiu       $a0, $v0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1BCu; }
        if (ctx->pc != 0x19A1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1BCu; }
        if (ctx->pc != 0x19A1BCu) { return; }
    }
    ctx->pc = 0x19A1BCu;
label_19a1bc:
    // 0x19a1bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19a1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19a1c0: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x19a1c4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a1c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19A1C8u;
    {
        const bool branch_taken_0x19a1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a1c8) {
            ctx->pc = 0x19A1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a1b0;
        }
    }
    ctx->pc = 0x19A1D0u;
    // 0x19a1d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19a1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a1d8:
    // 0x19a1d8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x19a1dc: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19A1DCu;
    SET_GPR_U32(ctx, 31, 0x19A1E4u);
    ctx->pc = 0x19A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1DCu;
            // 0x19a1e0: 0x2444043c  addiu       $a0, $v0, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1084));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1E4u; }
        if (ctx->pc != 0x19A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1E4u; }
        if (ctx->pc != 0x19A1E4u) { return; }
    }
    ctx->pc = 0x19A1E4u;
label_19a1e4:
    // 0x19a1e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19a1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19a1e8: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x19a1ec: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x19a1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a1f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19A1F0u;
    {
        const bool branch_taken_0x19a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a1f0) {
            ctx->pc = 0x19A1D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a1d8;
        }
    }
    ctx->pc = 0x19A1F8u;
    // 0x19a1f8: 0xfe000518  sd          $zero, 0x518($s0)
    ctx->pc = 0x19a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1304), GPR_U64(ctx, 0));
    // 0x19a1fc: 0xfe000520  sd          $zero, 0x520($s0)
    ctx->pc = 0x19a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 0));
    // 0x19a200: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x19a200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x19a204: 0xae00052c  sw          $zero, 0x52C($s0)
    ctx->pc = 0x19a204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 0));
    // 0x19a208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a218: 0x3e00008  jr          $ra
    ctx->pc = 0x19A218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A218u;
            // 0x19a21c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A220u;
}
