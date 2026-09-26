#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitDrawList__14CPosDataManageFv
// Address: 0x22b040 - 0x22b0d0
void InitDrawList__14CPosDataManageFv_0x22b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDrawList__14CPosDataManageFv_0x22b040");
#endif

    switch (ctx->pc) {
        case 0x22b050u: goto label_22b050;
        case 0x22b06cu: goto label_22b06c;
        default: break;
    }

    ctx->pc = 0x22b040u;

    // 0x22b040: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22b044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b048: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22B048u;
    {
        const bool branch_taken_0x22b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B048u;
            // 0x22b04c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b048) {
            ctx->pc = 0x22B0B8u;
            goto label_22b0b8;
        }
    }
    ctx->pc = 0x22B050u;
label_22b050:
    // 0x22b050: 0xacc50070  sw          $a1, 0x70($a2)
    ctx->pc = 0x22b050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 5));
    // 0x22b054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b058: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x22b058u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x22b05c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b060: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22b064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22B064u;
    {
        const bool branch_taken_0x22b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B064u;
            // 0x22b068: 0x682823  subu        $a1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b064) {
            ctx->pc = 0x22B098u;
            goto label_22b098;
        }
    }
    ctx->pc = 0x22B06Cu;
label_22b06c:
    // 0x22b06c: 0x0  nop
    ctx->pc = 0x22b06cu;
    // NOP
    // 0x22b070: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x22b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x22b074: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x22b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22b078: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B078u;
    {
        const bool branch_taken_0x22b078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B078u;
            // 0x22b07c: 0x919c0  sll         $v1, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b078) {
            ctx->pc = 0x22B08Cu;
            goto label_22b08c;
        }
    }
    ctx->pc = 0x22B080u;
    // 0x22b080: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x22b080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x22b084: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22B084u;
    {
        const bool branch_taken_0x22b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B084u;
            // 0x22b088: 0xc33821  addu        $a3, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b084) {
            ctx->pc = 0x22B0A4u;
            goto label_22b0a4;
        }
    }
    ctx->pc = 0x22B08Cu;
label_22b08c:
    // 0x22b08c: 0x0  nop
    ctx->pc = 0x22b08cu;
    // NOP
    // 0x22b090: 0x254a0080  addiu       $t2, $t2, 0x80
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
    // 0x22b094: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22b098:
    // 0x22b098: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22b09c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22B09Cu;
    {
        const bool branch_taken_0x22b09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b09c) {
            ctx->pc = 0x22B06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b06c;
        }
    }
    ctx->pc = 0x22B0A4u;
label_22b0a4:
    // 0x22b0a4: 0x0  nop
    ctx->pc = 0x22b0a4u;
    // NOP
    // 0x22b0a8: 0xacc70074  sw          $a3, 0x74($a2)
    ctx->pc = 0x22b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 7));
    // 0x22b0ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22b0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0b0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B0B0u;
    {
        const bool branch_taken_0x22b0b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0B0u;
            // 0x22b0b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0b0) {
            ctx->pc = 0x22B0C8u;
            goto label_22b0c8;
        }
    }
    ctx->pc = 0x22B0B8u;
label_22b0b8:
    // 0x22b0b8: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x22b0b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x22b0bc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x22b0bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b0c0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x22B0C0u;
    {
        const bool branch_taken_0x22b0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b0c0) {
            ctx->pc = 0x22B050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b050;
        }
    }
    ctx->pc = 0x22B0C8u;
label_22b0c8:
    // 0x22b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x22B0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B0D0u;
}
