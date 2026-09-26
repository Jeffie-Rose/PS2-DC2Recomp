#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateDir__FPc
// Address: 0x31b940 - 0x31ba38
void CreateDir__FPc_0x31b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateDir__FPc_0x31b940");
#endif

    switch (ctx->pc) {
        case 0x31b95cu: goto label_31b95c;
        case 0x31b96cu: goto label_31b96c;
        case 0x31b974u: goto label_31b974;
        case 0x31b9b4u: goto label_31b9b4;
        case 0x31b9c0u: goto label_31b9c0;
        case 0x31b9c8u: goto label_31b9c8;
        case 0x31b9e4u: goto label_31b9e4;
        case 0x31ba00u: goto label_31ba00;
        default: break;
    }

    ctx->pc = 0x31b940u;

    // 0x31b940: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31b944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b950: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31b950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31b954: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31B954u;
    SET_GPR_U32(ctx, 31, 0x31B95Cu);
    ctx->pc = 0x31B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B954u;
            // 0x31b958: 0x24842d50  addiu       $a0, $a0, 0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B95Cu; }
        if (ctx->pc != 0x31B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B95Cu; }
        if (ctx->pc != 0x31B95Cu) { return; }
    }
    ctx->pc = 0x31B95Cu;
label_31b95c:
    // 0x31b95c: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x31B95Cu;
    {
        const bool branch_taken_0x31b95c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31b95c) {
            ctx->pc = 0x31BA14u;
            goto label_31ba14;
        }
    }
    ctx->pc = 0x31B964u;
    // 0x31b964: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31B964u;
    {
        const bool branch_taken_0x31b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B964u;
            // 0x31b968: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b964) {
            ctx->pc = 0x31BA2Cu;
            goto label_31ba2c;
        }
    }
    ctx->pc = 0x31B96Cu;
label_31b96c:
    // 0x31b96c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B96Cu;
    {
        const bool branch_taken_0x31b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B96Cu;
            // 0x31b970: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b96c) {
            ctx->pc = 0x31B98Cu;
            goto label_31b98c;
        }
    }
    ctx->pc = 0x31B974u;
label_31b974:
    // 0x31b974: 0x0  nop
    ctx->pc = 0x31b974u;
    // NOP
    // 0x31b978: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x31b978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b97c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x31b97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b980: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B980u;
    {
        const bool branch_taken_0x31b980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B980u;
            // 0x31b984: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b980) {
            ctx->pc = 0x31B99Cu;
            goto label_31b99c;
        }
    }
    ctx->pc = 0x31B988u;
    // 0x31b988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31b98c:
    // 0x31b98c: 0x0  nop
    ctx->pc = 0x31b98cu;
    // NOP
    // 0x31b990: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b994: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B994u;
    {
        const bool branch_taken_0x31b994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b994) {
            ctx->pc = 0x31B974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b974;
        }
    }
    ctx->pc = 0x31B99Cu;
label_31b99c:
    // 0x31b99c: 0x0  nop
    ctx->pc = 0x31b99cu;
    // NOP
    // 0x31b9a0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x31b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b9a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b9a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31b9ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31B9ACu;
    SET_GPR_U32(ctx, 31, 0x31B9B4u);
    ctx->pc = 0x31B9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9ACu;
            // 0x31b9b0: 0x24a52d58  addiu       $a1, $a1, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9B4u; }
        if (ctx->pc != 0x31B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9B4u; }
        if (ctx->pc != 0x31B9B4u) { return; }
    }
    ctx->pc = 0x31B9B4u;
label_31b9b4:
    // 0x31b9b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31b9b8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31B9B8u;
    SET_GPR_U32(ctx, 31, 0x31B9C0u);
    ctx->pc = 0x31B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9B8u;
            // 0x31b9bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C0u; }
        if (ctx->pc != 0x31B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C0u; }
        if (ctx->pc != 0x31B9C0u) { return; }
    }
    ctx->pc = 0x31B9C0u;
label_31b9c0:
    // 0x31b9c0: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31B9C0u;
    SET_GPR_U32(ctx, 31, 0x31B9C8u);
    ctx->pc = 0x31B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9C0u;
            // 0x31b9c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C8u; }
        if (ctx->pc != 0x31B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C8u; }
        if (ctx->pc != 0x31B9C8u) { return; }
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31B9C8u;
    {
        const bool branch_taken_0x31b9c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9C8u;
            // 0x31b9cc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9c8) {
            ctx->pc = 0x31BA10u;
            goto label_31ba10;
        }
    }
    ctx->pc = 0x31B9D0u;
    // 0x31b9d0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B9D0u;
    {
        const bool branch_taken_0x31b9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9D0u;
            // 0x31b9d4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9d0) {
            ctx->pc = 0x31B9F8u;
            goto label_31b9f8;
        }
    }
    ctx->pc = 0x31B9D8u;
    // 0x31b9d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31b9dc: 0xc045540  jal         func_115500
    ctx->pc = 0x31B9DCu;
    SET_GPR_U32(ctx, 31, 0x31B9E4u);
    ctx->pc = 0x31B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9DCu;
            // 0x31b9e0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (runtime->hasFunction(0x115500u)) {
        auto targetFn = runtime->lookupFunction(0x115500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9E4u; }
        if (ctx->pc != 0x31B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMkdir_0x115500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9E4u; }
        if (ctx->pc != 0x31B9E4u) { return; }
    }
    ctx->pc = 0x31B9E4u;
label_31b9e4:
    // 0x31b9e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B9E4u;
    {
        const bool branch_taken_0x31b9e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31b9e4) {
            ctx->pc = 0x31B9F4u;
            goto label_31b9f4;
        }
    }
    ctx->pc = 0x31B9ECu;
    // 0x31b9ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31B9ECu;
    {
        const bool branch_taken_0x31b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b9ec) {
            ctx->pc = 0x31BA28u;
            goto label_31ba28;
        }
    }
    ctx->pc = 0x31B9F4u;
label_31b9f4:
    // 0x31b9f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31b9f8:
    // 0x31b9f8: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31B9F8u;
    SET_GPR_U32(ctx, 31, 0x31BA00u);
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA00u; }
        if (ctx->pc != 0x31BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA00u; }
        if (ctx->pc != 0x31BA00u) { return; }
    }
    ctx->pc = 0x31BA00u;
label_31ba00:
    // 0x31ba00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BA00u;
    {
        const bool branch_taken_0x31ba00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31ba00) {
            ctx->pc = 0x31BA10u;
            goto label_31ba10;
        }
    }
    ctx->pc = 0x31BA08u;
    // 0x31ba08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31BA08u;
    {
        const bool branch_taken_0x31ba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba08) {
            ctx->pc = 0x31BA28u;
            goto label_31ba28;
        }
    }
    ctx->pc = 0x31BA10u;
label_31ba10:
    // 0x31ba10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31ba14:
    // 0x31ba14: 0x0  nop
    ctx->pc = 0x31ba14u;
    // NOP
    // 0x31ba18: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x31ba18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ba1c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x31BA1Cu;
    {
        const bool branch_taken_0x31ba1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA1Cu;
            // 0x31ba20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba1c) {
            ctx->pc = 0x31B96Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b96c;
        }
    }
    ctx->pc = 0x31BA24u;
    // 0x31ba24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ba24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ba28:
    // 0x31ba28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ba2c:
    // 0x31ba2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ba2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x31BA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA30u;
            // 0x31ba34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BA38u;
}
