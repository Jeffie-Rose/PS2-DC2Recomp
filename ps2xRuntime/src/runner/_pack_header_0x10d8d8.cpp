#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pack_header
// Address: 0x10d8d8 - 0x10da28
void _pack_header_0x10d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pack_header_0x10d8d8");
#endif

    switch (ctx->pc) {
        case 0x10d910u: goto label_10d910;
        case 0x10d91cu: goto label_10d91c;
        case 0x10d928u: goto label_10d928;
        case 0x10d934u: goto label_10d934;
        case 0x10d940u: goto label_10d940;
        case 0x10d94cu: goto label_10d94c;
        case 0x10d958u: goto label_10d958;
        case 0x10d964u: goto label_10d964;
        case 0x10d974u: goto label_10d974;
        case 0x10d980u: goto label_10d980;
        case 0x10d9b0u: goto label_10d9b0;
        case 0x10d9b8u: goto label_10d9b8;
        case 0x10d9d4u: goto label_10d9d4;
        case 0x10d9f4u: goto label_10d9f4;
        default: break;
    }

    ctx->pc = 0x10d8d8u;

    // 0x10d8d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d8dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10d8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10d8e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10d8e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10d8e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10d8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10d8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10d8f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d8f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d8f8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x10d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10d8fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d904: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10d908: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D908u;
    SET_GPR_U32(ctx, 31, 0x10D910u);
    ctx->pc = 0x10D90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D908u;
            // 0x10d90c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D910u; }
        if (ctx->pc != 0x10D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D910u; }
        if (ctx->pc != 0x10D910u) { return; }
    }
    ctx->pc = 0x10D910u;
label_10d910:
    // 0x10d910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d914: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D914u;
    SET_GPR_U32(ctx, 31, 0x10D91Cu);
    ctx->pc = 0x10D918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D914u;
            // 0x10d918: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D91Cu; }
        if (ctx->pc != 0x10D91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D91Cu; }
        if (ctx->pc != 0x10D91Cu) { return; }
    }
    ctx->pc = 0x10D91Cu;
label_10d91c:
    // 0x10d91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d920: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10D920u;
    SET_GPR_U32(ctx, 31, 0x10D928u);
    ctx->pc = 0x10D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D920u;
            // 0x10d924: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D928u; }
        if (ctx->pc != 0x10D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D928u; }
        if (ctx->pc != 0x10D928u) { return; }
    }
    ctx->pc = 0x10D928u;
label_10d928:
    // 0x10d928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d92c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D92Cu;
    SET_GPR_U32(ctx, 31, 0x10D934u);
    ctx->pc = 0x10D930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D92Cu;
            // 0x10d930: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D934u; }
        if (ctx->pc != 0x10D934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D934u; }
        if (ctx->pc != 0x10D934u) { return; }
    }
    ctx->pc = 0x10D934u;
label_10d934:
    // 0x10d934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d938: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10D938u;
    SET_GPR_U32(ctx, 31, 0x10D940u);
    ctx->pc = 0x10D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D938u;
            // 0x10d93c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D940u; }
        if (ctx->pc != 0x10D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D940u; }
        if (ctx->pc != 0x10D940u) { return; }
    }
    ctx->pc = 0x10D940u;
label_10d940:
    // 0x10d940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d944: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D944u;
    SET_GPR_U32(ctx, 31, 0x10D94Cu);
    ctx->pc = 0x10D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D944u;
            // 0x10d948: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D94Cu; }
        if (ctx->pc != 0x10D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D94Cu; }
        if (ctx->pc != 0x10D94Cu) { return; }
    }
    ctx->pc = 0x10D94Cu;
label_10d94c:
    // 0x10d94c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d950: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10D950u;
    SET_GPR_U32(ctx, 31, 0x10D958u);
    ctx->pc = 0x10D954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D950u;
            // 0x10d954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D958u; }
        if (ctx->pc != 0x10D958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D958u; }
        if (ctx->pc != 0x10D958u) { return; }
    }
    ctx->pc = 0x10D958u;
label_10d958:
    // 0x10d958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d95c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D95Cu;
    SET_GPR_U32(ctx, 31, 0x10D964u);
    ctx->pc = 0x10D960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D95Cu;
            // 0x10d960: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D964u; }
        if (ctx->pc != 0x10D964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D964u; }
        if (ctx->pc != 0x10D964u) { return; }
    }
    ctx->pc = 0x10D964u;
label_10d964:
    // 0x10d964: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x10d964u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x10d968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d96c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D96Cu;
    SET_GPR_U32(ctx, 31, 0x10D974u);
    ctx->pc = 0x10D970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D96Cu;
            // 0x10d970: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D974u; }
        if (ctx->pc != 0x10D974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D974u; }
        if (ctx->pc != 0x10D974u) { return; }
    }
    ctx->pc = 0x10D974u;
label_10d974:
    // 0x10d974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d978: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D978u;
    SET_GPR_U32(ctx, 31, 0x10D980u);
    ctx->pc = 0x10D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D978u;
            // 0x10d97c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D980u; }
        if (ctx->pc != 0x10D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D980u; }
        if (ctx->pc != 0x10D980u) { return; }
    }
    ctx->pc = 0x10D980u;
label_10d980:
    // 0x10d980: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10d980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d984: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x10d984u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x10d988: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x10d988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x10d98c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x10d98cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x10d990: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x10d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x10d994: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10d994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10d998: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x10d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x10d99c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x10d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x10d9a0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D9A0u;
    {
        const bool branch_taken_0x10d9a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9A0u;
            // 0x10d9a4: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9a0) {
            ctx->pc = 0x10D9C8u;
            goto label_10d9c8;
        }
    }
    ctx->pc = 0x10D9A8u;
    // 0x10d9a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9ac: 0x0  nop
    ctx->pc = 0x10d9acu;
    // NOP
label_10d9b0:
    // 0x10d9b0: 0xc043448  jal         func_10D120
    ctx->pc = 0x10D9B0u;
    SET_GPR_U32(ctx, 31, 0x10D9B8u);
    ctx->pc = 0x10D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9B0u;
            // 0x10d9b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9B8u; }
        if (ctx->pc != 0x10D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9B8u; }
        if (ctx->pc != 0x10D9B8u) { return; }
    }
    ctx->pc = 0x10D9B8u;
label_10d9b8:
    // 0x10d9b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x10d9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x10d9bc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x10d9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x10d9c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10D9C0u;
    {
        const bool branch_taken_0x10d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9C0u;
            // 0x10d9c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9c0) {
            ctx->pc = 0x10D9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9b0;
        }
    }
    ctx->pc = 0x10D9C8u;
label_10d9c8:
    // 0x10d9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9cc: 0xc04341a  jal         func_10D068
    ctx->pc = 0x10D9CCu;
    SET_GPR_U32(ctx, 31, 0x10D9D4u);
    ctx->pc = 0x10D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9CCu;
            // 0x10d9d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D068u;
    if (runtime->hasFunction(0x10D068u)) {
        auto targetFn = runtime->lookupFunction(0x10D068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9D4u; }
        if (ctx->pc != 0x10D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x10d068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9D4u; }
        if (ctx->pc != 0x10D9D4u) { return; }
    }
    ctx->pc = 0x10D9D4u;
label_10d9d4:
    // 0x10d9d4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x10d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x10d9d8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D9D8u;
    {
        const bool branch_taken_0x10d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d9d8) {
            ctx->pc = 0x10D9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9D8u;
            // 0x10d9dc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D9FCu;
            goto label_10d9fc;
        }
    }
    ctx->pc = 0x10D9E0u;
    // 0x10d9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9e8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x10d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x10d9ec: 0xc04368a  jal         func_10DA28
    ctx->pc = 0x10D9ECu;
    SET_GPR_U32(ctx, 31, 0x10D9F4u);
    ctx->pc = 0x10D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9ECu;
            // 0x10d9f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DA28u;
    if (runtime->hasFunction(0x10DA28u)) {
        auto targetFn = runtime->lookupFunction(0x10DA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9F4u; }
        if (ctx->pc != 0x10D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _system_header_0x10da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9F4u; }
        if (ctx->pc != 0x10D9F4u) { return; }
    }
    ctx->pc = 0x10D9F4u;
label_10d9f4:
    // 0x10d9f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D9F4u;
    {
        const bool branch_taken_0x10d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9F4u;
            // 0x10d9f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9f4) {
            ctx->pc = 0x10DA00u;
            goto label_10da00;
        }
    }
    ctx->pc = 0x10D9FCu;
label_10d9fc:
    // 0x10d9fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10da00:
    // 0x10da00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10da04: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10da04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10da08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10da08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10da0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10da0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10da10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10da10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10da14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10da14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10da18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10da18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10da1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10da20: 0x3e00008  jr          $ra
    ctx->pc = 0x10DA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA20u;
            // 0x10da24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DA28u;
}
