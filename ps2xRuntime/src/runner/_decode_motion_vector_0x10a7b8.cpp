#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decode_motion_vector
// Address: 0x10a7b8 - 0x10a840
void _decode_motion_vector_0x10a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decode_motion_vector_0x10a7b8");
#endif

    ctx->pc = 0x10a7b8u;

    // 0x10a7b8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x10a7b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a7c0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x10a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10a7c4: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x10a7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x10a7c8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x10a7c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x10a7cc: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x10A7CCu;
    {
        const bool branch_taken_0x10a7cc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x10A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7CCu;
            // 0x10a7d0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7cc) {
            ctx->pc = 0x10A800u;
            goto label_10a800;
        }
    }
    ctx->pc = 0x10A7D4u;
    // 0x10a7d4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10a7d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10a7dc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x10a7e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10a7e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a7e8: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x10a7e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x10a7ec: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A7ECu;
    {
        const bool branch_taken_0x10a7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7ECu;
            // 0x10a7f0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7ec) {
            ctx->pc = 0x10A834u;
            goto label_10a834;
        }
    }
    ctx->pc = 0x10A7F4u;
    // 0x10a7f4: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10a7f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10A7F8u;
    {
        const bool branch_taken_0x10a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7F8u;
            // 0x10a7fc: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7f8) {
            ctx->pc = 0x10A830u;
            goto label_10a830;
        }
    }
    ctx->pc = 0x10A800u;
label_10a800:
    // 0x10a800: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x10A800u;
    {
        const bool branch_taken_0x10a800 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A800u;
            // 0x10a804: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a800) {
            ctx->pc = 0x10A834u;
            goto label_10a834;
        }
    }
    ctx->pc = 0x10A808u;
    // 0x10a808: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x10a808u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x10a80c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10a810: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x10a814: 0x91823  negu        $v1, $t1
    ctx->pc = 0x10a814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x10a818: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10a81c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x10a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a820: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x10a820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10a824: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A824u;
    {
        const bool branch_taken_0x10a824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A824u;
            // 0x10a828: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a824) {
            ctx->pc = 0x10A830u;
            goto label_10a830;
        }
    }
    ctx->pc = 0x10A82Cu;
    // 0x10a82c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a830:
    // 0x10a830: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x10a830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10a834:
    // 0x10a834: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x10a834u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x10a838: 0x3e00008  jr          $ra
    ctx->pc = 0x10A838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A838u;
            // 0x10a83c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A840u;
}
