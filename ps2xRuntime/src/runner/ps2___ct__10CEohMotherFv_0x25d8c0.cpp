#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CEohMotherFv
// Address: 0x25d8c0 - 0x25da34
void ps2___ct__10CEohMotherFv_0x25d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CEohMotherFv_0x25d8c0");
#endif

    switch (ctx->pc) {
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d908u: goto label_25d908;
        default: break;
    }

    ctx->pc = 0x25d8c0u;

    // 0x25d8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d8d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8d4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25d8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d8d8:
    // 0x25d8d8: 0xc097534  jal         func_25D4D0
    ctx->pc = 0x25D8D8u;
    SET_GPR_U32(ctx, 31, 0x25D8E0u);
    ctx->pc = 0x25D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8D8u;
            // 0x25d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D4D0u;
    if (runtime->hasFunction(0x25D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x25D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8E0u; }
        if (ctx->pc != 0x25D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__4CEohFv_0x25d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8E0u; }
        if (ctx->pc != 0x25D8E0u) { return; }
    }
    ctx->pc = 0x25D8E0u;
label_25d8e0:
    // 0x25d8e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x25d8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25d8e4: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x25d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x25d8e8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x25d8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25d8ec: 0x0  nop
    ctx->pc = 0x25d8ecu;
    // NOP
    // 0x25d8f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25D8F0u;
    {
        const bool branch_taken_0x25d8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d8f0) {
            ctx->pc = 0x25D8D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d8d8;
        }
    }
    ctx->pc = 0x25D8F8u;
    // 0x25d8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d900: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d908:
    // 0x25d908: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x25d908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x25d90c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x25d910: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x25d910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x25d914: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25d914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25d918: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x25d918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x25d91c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x25d91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x25d920: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x25d920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x25d924: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x25d924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x25d928: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x25d928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x25d92c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x25d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x25d930: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x25d930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x25d934: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x25d934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x25d938: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x25d938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x25d93c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x25d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x25d940: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x25d940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x25d944: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x25d944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x25d948: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x25d948u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x25d94c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x25d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x25d950: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x25d950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x25d954: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x25d954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x25d958: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x25d958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x25d95c: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x25d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x25d960: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x25d960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x25d964: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x25d964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x25d968: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x25d968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x25d96c: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x25d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x25d970: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x25d970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x25d974: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x25d974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x25d978: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x25d978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x25d97c: 0xace40034  sw          $a0, 0x34($a3)
    ctx->pc = 0x25d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 4));
    // 0x25d980: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x25d980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
    // 0x25d984: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x25d984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x25d988: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x25d988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x25d98c: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x25d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x25d990: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x25d990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x25d994: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x25d994u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x25d998: 0xace40040  sw          $a0, 0x40($a3)
    ctx->pc = 0x25d998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 4));
    // 0x25d99c: 0xace40044  sw          $a0, 0x44($a3)
    ctx->pc = 0x25d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 4));
    // 0x25d9a0: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x25d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
    // 0x25d9a4: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x25d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x25d9a8: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x25d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x25d9ac: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x25d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x25d9b0: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x25d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x25d9b4: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x25d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x25d9b8: 0xace40050  sw          $a0, 0x50($a3)
    ctx->pc = 0x25d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 4));
    // 0x25d9bc: 0xace40054  sw          $a0, 0x54($a3)
    ctx->pc = 0x25d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 4));
    // 0x25d9c0: 0xace30058  sw          $v1, 0x58($a3)
    ctx->pc = 0x25d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 3));
    // 0x25d9c4: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x25d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x25d9c8: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x25d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x25d9cc: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x25d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x25d9d0: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x25d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x25d9d4: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x25d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x25d9d8: 0xace40060  sw          $a0, 0x60($a3)
    ctx->pc = 0x25d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 4));
    // 0x25d9dc: 0xace40064  sw          $a0, 0x64($a3)
    ctx->pc = 0x25d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 4));
    // 0x25d9e0: 0xace30068  sw          $v1, 0x68($a3)
    ctx->pc = 0x25d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 3));
    // 0x25d9e4: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x25d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x25d9e8: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x25d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x25d9ec: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x25d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x25d9f0: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x25d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x25d9f4: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x25d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x25d9f8: 0xace40070  sw          $a0, 0x70($a3)
    ctx->pc = 0x25d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 4));
    // 0x25d9fc: 0xace40074  sw          $a0, 0x74($a3)
    ctx->pc = 0x25d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 4));
    // 0x25da00: 0xace30078  sw          $v1, 0x78($a3)
    ctx->pc = 0x25da00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 3));
    // 0x25da04: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x25da04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x25da08: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x25da08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x25da0c: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x25da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x25da10: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x25da10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x25da14: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x25DA14u;
    {
        const bool branch_taken_0x25da14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA14u;
            // 0x25da18: 0xace0007c  sw          $zero, 0x7C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da14) {
            ctx->pc = 0x25D908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d908;
        }
    }
    ctx->pc = 0x25DA1Cu;
    // 0x25da1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25da1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25da24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25da24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25da28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25da28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25da2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA2Cu;
            // 0x25da30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DA34u;
}
