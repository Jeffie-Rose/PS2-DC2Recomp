#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchDoorParts__11CAutoMapGenFv
// Address: 0x1d78d0 - 0x1d7974
void SearchDoorParts__11CAutoMapGenFv_0x1d78d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchDoorParts__11CAutoMapGenFv_0x1d78d0");
#endif

    switch (ctx->pc) {
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d7914u: goto label_1d7914;
        default: break;
    }

    ctx->pc = 0x1d78d0u;

    // 0x1d78d0: 0x8c8a01cc  lw          $t2, 0x1CC($a0)
    ctx->pc = 0x1d78d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d78d4: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D78D4u;
    {
        const bool branch_taken_0x1d78d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78D4u;
            // 0x1d78d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78d4) {
            ctx->pc = 0x1D78E4u;
            goto label_1d78e4;
        }
    }
    ctx->pc = 0x1D78DCu;
    // 0x1d78dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D78DCu;
    {
        const bool branch_taken_0x1d78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d78dc) {
            ctx->pc = 0x1D796Cu;
            goto label_1d796c;
        }
    }
    ctx->pc = 0x1D78E4u;
label_1d78e4:
    // 0x1d78e4: 0x848201ba  lh          $v0, 0x1BA($a0)
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 442)));
    // 0x1d78e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D78E8u;
    {
        const bool branch_taken_0x1d78e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78E8u;
            // 0x1d78ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78e8) {
            ctx->pc = 0x1D7960u;
            goto label_1d7960;
        }
    }
    ctx->pc = 0x1D78F0u;
label_1d78f0:
    // 0x1d78f0: 0x848501b8  lh          $a1, 0x1B8($a0)
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d78f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d78f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d78f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78fc: 0xe53018  mult        $a2, $a3, $a1
    ctx->pc = 0x1d78fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d7900: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d7904: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d7904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d7908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d7908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d790c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D790Cu;
    {
        const bool branch_taken_0x1d790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D790Cu;
            // 0x1d7910: 0x1433021  addu        $a2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d790c) {
            ctx->pc = 0x1D794Cu;
            goto label_1d794c;
        }
    }
    ctx->pc = 0x1D7914u;
label_1d7914:
    // 0x1d7914: 0x0  nop
    ctx->pc = 0x1d7914u;
    // NOP
    // 0x1d7918: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x1d7918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1d791c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7920: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d7920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d7924: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7924u;
    {
        const bool branch_taken_0x1d7924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7924) {
            ctx->pc = 0x1D7944u;
            goto label_1d7944;
        }
    }
    ctx->pc = 0x1D792Cu;
    // 0x1d792c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1d792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d7930: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1d7930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d7934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7938: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d7938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d793c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D793Cu;
    {
        const bool branch_taken_0x1d793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D793Cu;
            // 0x1d7940: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d793c) {
            ctx->pc = 0x1D796Cu;
            goto label_1d796c;
        }
    }
    ctx->pc = 0x1D7944u;
label_1d7944:
    // 0x1d7944: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x1d7944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x1d7948: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d794c:
    // 0x1d794c: 0x0  nop
    ctx->pc = 0x1d794cu;
    // NOP
    // 0x1d7950: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d7950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d7954: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D7954u;
    {
        const bool branch_taken_0x1d7954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7954) {
            ctx->pc = 0x1D7914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7914;
        }
    }
    ctx->pc = 0x1D795Cu;
    // 0x1d795c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d7960:
    // 0x1d7960: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D7960u;
    {
        const bool branch_taken_0x1d7960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7960) {
            ctx->pc = 0x1D78F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d78f0;
        }
    }
    ctx->pc = 0x1D7968u;
    // 0x1d7968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d796c:
    // 0x1d796c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D796Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7974u;
}
