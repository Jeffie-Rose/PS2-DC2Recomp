#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CInventUserDataFv
// Address: 0x1fe880 - 0x1fe968
void Initialize__15CInventUserDataFv_0x1fe880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CInventUserDataFv_0x1fe880");
#endif

    switch (ctx->pc) {
        case 0x1fe8b0u: goto label_1fe8b0;
        case 0x1fe8c4u: goto label_1fe8c4;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe950u: goto label_1fe950;
        default: break;
    }

    ctx->pc = 0x1fe880u;

    // 0x1fe880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe888: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fe888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fe88c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1fe88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fe890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe89c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fe89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fe8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fe8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fe8a8: 0xc049c86  jal         func_127218
    ctx->pc = 0x1FE8A8u;
    SET_GPR_U32(ctx, 31, 0x1FE8B0u);
    ctx->pc = 0x1FE8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8A8u;
            // 0x1fe8ac: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8B0u; }
        if (ctx->pc != 0x1FE8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8B0u; }
        if (ctx->pc != 0x1FE8B0u) { return; }
    }
    ctx->pc = 0x1FE8B0u;
label_1fe8b0:
    // 0x1fe8b0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1fe8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1fe8b4: 0x26040d60  addiu       $a0, $s0, 0xD60
    ctx->pc = 0x1fe8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3424));
    // 0x1fe8b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8bc: 0xc049c86  jal         func_127218
    ctx->pc = 0x1FE8BCu;
    SET_GPR_U32(ctx, 31, 0x1FE8C4u);
    ctx->pc = 0x1FE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8BCu;
            // 0x1fe8c0: 0x3446c000  ori         $a2, $v0, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8C4u; }
        if (ctx->pc != 0x1FE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8C4u; }
        if (ctx->pc != 0x1FE8C4u) { return; }
    }
    ctx->pc = 0x1FE8C4u;
label_1fe8c4:
    // 0x1fe8c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8cc:
    // 0x1fe8cc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1fe8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fe8d0: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x1FE8D0u;
    SET_GPR_U32(ctx, 31, 0x1FE8D8u);
    ctx->pc = 0x1FE8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8D0u;
            // 0x1fe8d4: 0x24440408  addiu       $a0, $v0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8D8u; }
        if (ctx->pc != 0x1FE8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8D8u; }
        if (ctx->pc != 0x1FE8D8u) { return; }
    }
    ctx->pc = 0x1FE8D8u;
label_1fe8d8:
    // 0x1fe8d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe8dc: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1fe8e0: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x1fe8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fe8e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE8E4u;
    {
        const bool branch_taken_0x1fe8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe8e4) {
            ctx->pc = 0x1FE8CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe8cc;
        }
    }
    ctx->pc = 0x1FE8ECu;
    // 0x1fe8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fe8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8f4:
    // 0x1fe8f4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1fe8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe8f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1fe8fc: 0xa48006d8  sh          $zero, 0x6D8($a0)
    ctx->pc = 0x1fe8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1752), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe900: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1fe900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe904: 0xa48006da  sh          $zero, 0x6DA($a0)
    ctx->pc = 0x1fe904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1754), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe908: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fe90c: 0xa48006dc  sh          $zero, 0x6DC($a0)
    ctx->pc = 0x1fe90cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1756), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe910: 0xa48006de  sh          $zero, 0x6DE($a0)
    ctx->pc = 0x1fe910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1758), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe914: 0xa48006e0  sh          $zero, 0x6E0($a0)
    ctx->pc = 0x1fe914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1760), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe918: 0xa48006e2  sh          $zero, 0x6E2($a0)
    ctx->pc = 0x1fe918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1762), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe91c: 0xa48006e4  sh          $zero, 0x6E4($a0)
    ctx->pc = 0x1fe91cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1764), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe920: 0xa48006e6  sh          $zero, 0x6E6($a0)
    ctx->pc = 0x1fe920u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1766), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe924: 0xa48006e8  sh          $zero, 0x6E8($a0)
    ctx->pc = 0x1fe924u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1768), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe928: 0xa48006ea  sh          $zero, 0x6EA($a0)
    ctx->pc = 0x1fe928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1770), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe92c: 0xa48006ec  sh          $zero, 0x6EC($a0)
    ctx->pc = 0x1fe92cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1772), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe930: 0xa48006ee  sh          $zero, 0x6EE($a0)
    ctx->pc = 0x1fe930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1774), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe934: 0xa48006f0  sh          $zero, 0x6F0($a0)
    ctx->pc = 0x1fe934u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1776), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe938: 0xa48006f2  sh          $zero, 0x6F2($a0)
    ctx->pc = 0x1fe938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1778), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe93c: 0xa48006f4  sh          $zero, 0x6F4($a0)
    ctx->pc = 0x1fe93cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1780), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fe940: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE940u;
    {
        const bool branch_taken_0x1fe940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE940u;
            // 0x1fe944: 0xa48006f6  sh          $zero, 0x6F6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1782), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe940) {
            ctx->pc = 0x1FE8F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe8f4;
        }
    }
    ctx->pc = 0x1FE948u;
    // 0x1fe948: 0xc07fa5c  jal         func_1FE970
    ctx->pc = 0x1FE948u;
    SET_GPR_U32(ctx, 31, 0x1FE950u);
    ctx->pc = 0x1FE94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE948u;
            // 0x1fe94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE970u;
    if (runtime->hasFunction(0x1FE970u)) {
        auto targetFn = runtime->lookupFunction(0x1FE970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE950u; }
        if (ctx->pc != 0x1FE950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetAddress__15CInventUserDataFv_0x1fe970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE950u; }
        if (ctx->pc != 0x1FE950u) { return; }
    }
    ctx->pc = 0x1FE950u;
label_1fe950:
    // 0x1fe950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe95c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe960: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE960u;
            // 0x1fe964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE968u;
}
