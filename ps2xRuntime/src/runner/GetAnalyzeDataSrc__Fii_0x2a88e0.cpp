#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnalyzeDataSrc__Fii
// Address: 0x2a88e0 - 0x2a89b4
void GetAnalyzeDataSrc__Fii_0x2a88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnalyzeDataSrc__Fii_0x2a88e0");
#endif

    switch (ctx->pc) {
        case 0x2a894cu: goto label_2a894c;
        default: break;
    }

    ctx->pc = 0x2a88e0u;

    // 0x2a88e0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A88E0u;
    {
        const bool branch_taken_0x2a88e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A88E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88E0u;
            // 0x2a88e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88e0) {
            ctx->pc = 0x2A88F8u;
            goto label_2a88f8;
        }
    }
    ctx->pc = 0x2A88E8u;
    // 0x2a88e8: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x2a88e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a88ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A88ECu;
    {
        const bool branch_taken_0x2a88ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a88ec) {
            ctx->pc = 0x2A8900u;
            goto label_2a8900;
        }
    }
    ctx->pc = 0x2A88F4u;
    // 0x2a88f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a88f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88f8:
    // 0x2a88f8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2A88F8u;
    {
        const bool branch_taken_0x2a88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a88f8) {
            ctx->pc = 0x2A89ACu;
            goto label_2a89ac;
        }
    }
    ctx->pc = 0x2A8900u;
label_2a8900:
    // 0x2a8900: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8900u;
    {
        const bool branch_taken_0x2a8900 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8900u;
            // 0x2a8904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8900) {
            ctx->pc = 0x2A8918u;
            goto label_2a8918;
        }
    }
    ctx->pc = 0x2A8908u;
    // 0x2a8908: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2a8908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a890c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A890Cu;
    {
        const bool branch_taken_0x2a890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A890Cu;
            // 0x2a8910: 0xa0082a  slt         $at, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a890c) {
            ctx->pc = 0x2A8920u;
            goto label_2a8920;
        }
    }
    ctx->pc = 0x2A8914u;
    // 0x2a8914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8918:
    // 0x2a8918: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A8918u;
    {
        const bool branch_taken_0x2a8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8918) {
            ctx->pc = 0x2A89ACu;
            goto label_2a89ac;
        }
    }
    ctx->pc = 0x2A8920u;
label_2a8920:
    // 0x2a8920: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8920u;
    {
        const bool branch_taken_0x2a8920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8920u;
            // 0x2a8924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8920) {
            ctx->pc = 0x2A8974u;
            goto label_2a8974;
        }
    }
    ctx->pc = 0x2A8928u;
    // 0x2a8928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a892c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a8930: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a8934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8938: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x2a8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
    // 0x2a893c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a893cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a8940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8944: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2a8944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2a8948: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a8948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a894c:
    // 0x2a894c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x2a894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a8950: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2a8954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8954u;
    {
        const bool branch_taken_0x2a8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8954u;
            // 0x2a8958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8954) {
            ctx->pc = 0x2A8964u;
            goto label_2a8964;
        }
    }
    ctx->pc = 0x2A895Cu;
    // 0x2a895c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A895Cu;
    {
        const bool branch_taken_0x2a895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a895c) {
            ctx->pc = 0x2A89ACu;
            goto label_2a89ac;
        }
    }
    ctx->pc = 0x2A8964u;
label_2a8964:
    // 0x2a8964: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a8964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a8968: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2a8968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a896c: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A896Cu;
    {
        const bool branch_taken_0x2a896c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A896Cu;
            // 0x2a8970: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a896c) {
            ctx->pc = 0x2A894Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a894c;
        }
    }
    ctx->pc = 0x2A8974u;
label_2a8974:
    // 0x2a8974: 0x0  nop
    ctx->pc = 0x2a8974u;
    // NOP
    // 0x2a8978: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2a8978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a897c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a8980: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a8980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a8984: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2a8984u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8988: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2a8988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
    // 0x2a898c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8990: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2a8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a8994: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a8994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a8998: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2a8998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2a899c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a899cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a89a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a89a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a89a8: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_2a89ac:
    // 0x2a89ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A89ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A89B4u;
}
