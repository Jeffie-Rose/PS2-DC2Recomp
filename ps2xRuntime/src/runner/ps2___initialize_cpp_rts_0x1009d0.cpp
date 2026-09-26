#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __initialize_cpp_rts
// Address: 0x1009d0 - 0x100a2c
void ps2___initialize_cpp_rts_0x1009d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___initialize_cpp_rts_0x1009d0");
#endif

    switch (ctx->pc) {
        case 0x1009d0u: goto label_1009d0;
        case 0x1009d4u: goto label_1009d4;
        case 0x1009d8u: goto label_1009d8;
        case 0x1009dcu: goto label_1009dc;
        case 0x1009e0u: goto label_1009e0;
        case 0x1009e4u: goto label_1009e4;
        case 0x1009e8u: goto label_1009e8;
        case 0x1009ecu: goto label_1009ec;
        case 0x1009f0u: goto label_1009f0;
        case 0x1009f4u: goto label_1009f4;
        case 0x1009f8u: goto label_1009f8;
        case 0x1009fcu: goto label_1009fc;
        case 0x100a00u: goto label_100a00;
        case 0x100a04u: goto label_100a04;
        case 0x100a08u: goto label_100a08;
        case 0x100a0cu: goto label_100a0c;
        case 0x100a10u: goto label_100a10;
        case 0x100a14u: goto label_100a14;
        case 0x100a18u: goto label_100a18;
        case 0x100a1cu: goto label_100a1c;
        case 0x100a20u: goto label_100a20;
        case 0x100a24u: goto label_100a24;
        case 0x100a28u: goto label_100a28;
        default: break;
    }

    ctx->pc = 0x1009d0u;

label_1009d0:
    // 0x1009d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1009d4:
    // 0x1009d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1009d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1009d8:
    // 0x1009d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1009d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1009dc:
    // 0x1009dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1009dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1009e0:
    // 0x1009e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1009e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1009e4:
    // 0x1009e4: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1009e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1009e8:
    // 0x1009e8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1009ec:
    if (ctx->pc == 0x1009ECu) {
        ctx->pc = 0x1009ECu;
            // 0x1009ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1009F0u;
        goto label_1009f0;
    }
    ctx->pc = 0x1009E8u;
    {
        const bool branch_taken_0x1009e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009E8u;
            // 0x1009ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009e8) {
            ctx->pc = 0x100A14u;
            goto label_100a14;
        }
    }
    ctx->pc = 0x1009F0u;
label_1009f0:
    // 0x1009f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1009f4:
    // 0x1009f4: 0x40f809  jalr        $v0
label_1009f8:
    if (ctx->pc == 0x1009F8u) {
        ctx->pc = 0x1009FCu;
        goto label_1009fc;
    }
    ctx->pc = 0x1009F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1009FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1009FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1009FCu; }
            if (ctx->pc != 0x1009FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1009FCu;
label_1009fc:
    // 0x1009fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1009fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_100a00:
    // 0x100a00: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x100a00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_100a04:
    // 0x100a04: 0x0  nop
    ctx->pc = 0x100a04u;
    // NOP
label_100a08:
    // 0x100a08: 0x0  nop
    ctx->pc = 0x100a08u;
    // NOP
label_100a0c:
    // 0x100a0c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_100a10:
    if (ctx->pc == 0x100A10u) {
        ctx->pc = 0x100A14u;
        goto label_100a14;
    }
    ctx->pc = 0x100A0Cu;
    {
        const bool branch_taken_0x100a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a0c) {
            ctx->pc = 0x1009F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1009f0;
        }
    }
    ctx->pc = 0x100A14u;
label_100a14:
    // 0x100a14: 0x0  nop
    ctx->pc = 0x100a14u;
    // NOP
label_100a18:
    // 0x100a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100a1c:
    // 0x100a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100a20:
    // 0x100a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100a24:
    // 0x100a24: 0x3e00008  jr          $ra
label_100a28:
    if (ctx->pc == 0x100A28u) {
        ctx->pc = 0x100A28u;
            // 0x100a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x100A2Cu;
        goto label_fallthrough_0x100a24;
    }
    ctx->pc = 0x100A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A24u;
            // 0x100a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x100a24:
    ctx->pc = 0x100A2Cu;
}
