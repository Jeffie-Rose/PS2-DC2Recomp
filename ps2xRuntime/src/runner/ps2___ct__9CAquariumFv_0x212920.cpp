#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CAquariumFv
// Address: 0x212920 - 0x212a18
void ps2___ct__9CAquariumFv_0x212920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CAquariumFv_0x212920");
#endif

    switch (ctx->pc) {
        case 0x21293cu: goto label_21293c;
        case 0x212944u: goto label_212944;
        case 0x21294cu: goto label_21294c;
        case 0x212954u: goto label_212954;
        case 0x21295cu: goto label_21295c;
        case 0x212960u: goto label_212960;
        case 0x212968u: goto label_212968;
        case 0x212988u: goto label_212988;
        case 0x212994u: goto label_212994;
        case 0x2129d8u: goto label_2129d8;
        case 0x212a00u: goto label_212a00;
        default: break;
    }

    ctx->pc = 0x212920u;

    // 0x212920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21292c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212934: 0xc04e640  jal         func_139900
    ctx->pc = 0x212934u;
    SET_GPR_U32(ctx, 31, 0x21293Cu);
    ctx->pc = 0x212938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212934u;
            // 0x212938: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21293Cu; }
        if (ctx->pc != 0x21293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21293Cu; }
        if (ctx->pc != 0x21293Cu) { return; }
    }
    ctx->pc = 0x21293Cu;
label_21293c:
    // 0x21293c: 0xc04e640  jal         func_139900
    ctx->pc = 0x21293Cu;
    SET_GPR_U32(ctx, 31, 0x212944u);
    ctx->pc = 0x212940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21293Cu;
            // 0x212940: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212944u; }
        if (ctx->pc != 0x212944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212944u; }
        if (ctx->pc != 0x212944u) { return; }
    }
    ctx->pc = 0x212944u;
label_212944:
    // 0x212944: 0xc04e640  jal         func_139900
    ctx->pc = 0x212944u;
    SET_GPR_U32(ctx, 31, 0x21294Cu);
    ctx->pc = 0x212948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212944u;
            // 0x212948: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21294Cu; }
        if (ctx->pc != 0x21294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21294Cu; }
        if (ctx->pc != 0x21294Cu) { return; }
    }
    ctx->pc = 0x21294Cu;
label_21294c:
    // 0x21294c: 0xc083eb8  jal         func_20FAE0
    ctx->pc = 0x21294Cu;
    SET_GPR_U32(ctx, 31, 0x212954u);
    ctx->pc = 0x212950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21294Cu;
            // 0x212950: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FAE0u;
    if (runtime->hasFunction(0x20FAE0u)) {
        auto targetFn = runtime->lookupFunction(0x20FAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212954u; }
        if (ctx->pc != 0x212954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8CAquaMesFv_0x20fae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212954u; }
        if (ctx->pc != 0x212954u) { return; }
    }
    ctx->pc = 0x212954u;
label_212954:
    // 0x212954: 0xc04e640  jal         func_139900
    ctx->pc = 0x212954u;
    SET_GPR_U32(ctx, 31, 0x21295Cu);
    ctx->pc = 0x212958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212954u;
            // 0x212958: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21295Cu; }
        if (ctx->pc != 0x21295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21295Cu; }
        if (ctx->pc != 0x21295Cu) { return; }
    }
    ctx->pc = 0x21295Cu;
label_21295c:
    // 0x21295c: 0x26110194  addiu       $s1, $s0, 0x194
    ctx->pc = 0x21295cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_212960:
    // 0x212960: 0xc04e640  jal         func_139900
    ctx->pc = 0x212960u;
    SET_GPR_U32(ctx, 31, 0x212968u);
    ctx->pc = 0x212964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212960u;
            // 0x212964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212968u; }
        if (ctx->pc != 0x212968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212968u; }
        if (ctx->pc != 0x212968u) { return; }
    }
    ctx->pc = 0x212968u;
label_212968:
    // 0x212968: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x212968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x21296c: 0x260202b4  addiu       $v0, $s0, 0x2B4
    ctx->pc = 0x21296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    // 0x212970: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x212970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x212974: 0x0  nop
    ctx->pc = 0x212974u;
    // NOP
    // 0x212978: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212978u;
    {
        const bool branch_taken_0x212978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212978) {
            ctx->pc = 0x212960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212960;
        }
    }
    ctx->pc = 0x212980u;
    // 0x212980: 0xc04e640  jal         func_139900
    ctx->pc = 0x212980u;
    SET_GPR_U32(ctx, 31, 0x212988u);
    ctx->pc = 0x212984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212980u;
            // 0x212984: 0x26040394  addiu       $a0, $s0, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 916));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212988u; }
        if (ctx->pc != 0x212988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212988u; }
        if (ctx->pc != 0x212988u) { return; }
    }
    ctx->pc = 0x212988u;
label_212988:
    // 0x212988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21298c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212994:
    // 0x212994: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x212994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x212998: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x212998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21299c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x21299cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x2129a0: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x2129a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2129a4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x2129a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x2129a8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2129a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2129ac: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x2129acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x2129b0: 0xacc30044  sw          $v1, 0x44($a2)
    ctx->pc = 0x2129b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
    // 0x2129b4: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x2129b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x2129b8: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x2129b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
    // 0x2129bc: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x2129bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x2129c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2129C0u;
    {
        const bool branch_taken_0x2129c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2129C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129C0u;
            // 0x2129c4: 0xacc30054  sw          $v1, 0x54($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129c0) {
            ctx->pc = 0x212994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212994;
        }
    }
    ctx->pc = 0x2129C8u;
    // 0x2129c8: 0x2881000d  slti        $at, $a0, 0xD
    ctx->pc = 0x2129c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2129cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2129CCu;
    {
        const bool branch_taken_0x2129cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129CCu;
            // 0x2129d0: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129cc) {
            ctx->pc = 0x2129F8u;
            goto label_2129f8;
        }
    }
    ctx->pc = 0x2129D4u;
    // 0x2129d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2129d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2129d8:
    // 0x2129d8: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2129dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2129dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2129e0: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2129e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2129e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2129e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2129e8: 0x2882000d  slti        $v0, $a0, 0xD
    ctx->pc = 0x2129e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2129ec: 0x0  nop
    ctx->pc = 0x2129ecu;
    // NOP
    // 0x2129f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2129F0u;
    {
        const bool branch_taken_0x2129f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2129f0) {
            ctx->pc = 0x2129D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2129d8;
        }
    }
    ctx->pc = 0x2129F8u;
label_2129f8:
    // 0x2129f8: 0xc084a88  jal         func_212A20
    ctx->pc = 0x2129F8u;
    SET_GPR_U32(ctx, 31, 0x212A00u);
    ctx->pc = 0x2129FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2129F8u;
            // 0x2129fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    if (runtime->hasFunction(0x212A20u)) {
        auto targetFn = runtime->lookupFunction(0x212A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A00u; }
        if (ctx->pc != 0x212A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CAquariumFv_0x212a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A00u; }
        if (ctx->pc != 0x212A00u) { return; }
    }
    ctx->pc = 0x212A00u;
label_212a00:
    // 0x212a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x212a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a10: 0x3e00008  jr          $ra
    ctx->pc = 0x212A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A10u;
            // 0x212a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212A18u;
}
