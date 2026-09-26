#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitFlush
// Address: 0x10d088 - 0x10d120
void _sysbitFlush_0x10d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitFlush_0x10d088");
#endif

    switch (ctx->pc) {
        case 0x10d0b8u: goto label_10d0b8;
        default: break;
    }

    ctx->pc = 0x10d088u;

    // 0x10d088: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10d088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d08c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x10d08cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d090: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x10d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10d094: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x10d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x10d098: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x10d098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10d09c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x10d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x10d0a0: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x10d0a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x10d0a4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10D0A4u;
    {
        const bool branch_taken_0x10d0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0A4u;
            // 0x10d0a8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0a4) {
            ctx->pc = 0x10D10Cu;
            goto label_10d10c;
        }
    }
    ctx->pc = 0x10D0ACu;
    // 0x10d0ac: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x10d0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x10d0b0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10d0b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0b4: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x10d0b4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_10d0b8:
    // 0x10d0b8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x10d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10d0bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x10d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x10d0c0: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10d0c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x10d0c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d0c8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x10d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10d0cc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x10d0ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d0d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x10d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x10d0d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d0d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10d0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10d0dc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x10d0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x10d0e0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x10d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x10d0e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D0E4u;
    {
        const bool branch_taken_0x10d0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0E4u;
            // 0x10d0e8: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0e4) {
            ctx->pc = 0x10D0F4u;
            goto label_10d0f4;
        }
    }
    ctx->pc = 0x10D0ECu;
    // 0x10d0ec: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10d0f0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x10d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_10d0f4:
    // 0x10d0f4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x10d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x10d0f8: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x10d0f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x10d0fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10D0FCu;
    {
        const bool branch_taken_0x10d0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0FCu;
            // 0x10d100: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0fc) {
            ctx->pc = 0x10D0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d0b8;
        }
    }
    ctx->pc = 0x10D104u;
    // 0x10d104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D104u;
    {
        const bool branch_taken_0x10d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D104u;
            // 0x10d108: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d104) {
            ctx->pc = 0x10D118u;
            goto label_10d118;
        }
    }
    ctx->pc = 0x10D10Cu;
label_10d10c:
    // 0x10d10c: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x10d10cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10d110: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10d110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d114: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x10d114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_10d118:
    // 0x10d118: 0x3e00008  jr          $ra
    ctx->pc = 0x10D118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D118u;
            // 0x10d11c: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D120u;
}
