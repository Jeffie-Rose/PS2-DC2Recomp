#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetAddress__15CInventUserDataFv
// Address: 0x1fe970 - 0x1fea30
void ResetAddress__15CInventUserDataFv_0x1fe970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAddress__15CInventUserDataFv_0x1fe970");
#endif

    switch (ctx->pc) {
        case 0x1fe984u: goto label_1fe984;
        case 0x1fea08u: goto label_1fea08;
        default: break;
    }

    ctx->pc = 0x1fe970u;

    // 0x1fe970: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe97c: 0x24860d60  addiu       $a2, $a0, 0xD60
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
    // 0x1fe980: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_1fe984:
    // 0x1fe984: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x1fe984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fe988: 0x895821  addu        $t3, $a0, $t1
    ctx->pc = 0x1fe988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fe98c: 0xad6a041c  sw          $t2, 0x41C($t3)
    ctx->pc = 0x1fe98cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1052), GPR_U32(ctx, 10));
    // 0x1fe990: 0x25432000  addiu       $v1, $t2, 0x2000
    ctx->pc = 0x1fe990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 8192));
    // 0x1fe994: 0xad630434  sw          $v1, 0x434($t3)
    ctx->pc = 0x1fe994u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1076), GPR_U32(ctx, 3));
    // 0x1fe998: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x1fe998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fe99c: 0x25434000  addiu       $v1, $t2, 0x4000
    ctx->pc = 0x1fe99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16384));
    // 0x1fe9a0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1fe9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1fe9a4: 0xad63044c  sw          $v1, 0x44C($t3)
    ctx->pc = 0x1fe9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1100), GPR_U32(ctx, 3));
    // 0x1fe9a8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1fe9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1fe9ac: 0x25436000  addiu       $v1, $t2, 0x6000
    ctx->pc = 0x1fe9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 24576));
    // 0x1fe9b0: 0xad630464  sw          $v1, 0x464($t3)
    ctx->pc = 0x1fe9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1124), GPR_U32(ctx, 3));
    // 0x1fe9b4: 0x1411821  addu        $v1, $t2, $at
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x1fe9b8: 0xad63047c  sw          $v1, 0x47C($t3)
    ctx->pc = 0x1fe9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1148), GPR_U32(ctx, 3));
    // 0x1fe9bc: 0x3401a000  ori         $at, $zero, 0xA000
    ctx->pc = 0x1fe9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1fe9c0: 0x1411821  addu        $v1, $t2, $at
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x1fe9c4: 0xad630494  sw          $v1, 0x494($t3)
    ctx->pc = 0x1fe9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 3));
    // 0x1fe9c8: 0x3401c000  ori         $at, $zero, 0xC000
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1fe9cc: 0x1411821  addu        $v1, $t2, $at
    ctx->pc = 0x1fe9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x1fe9d0: 0xad6304ac  sw          $v1, 0x4AC($t3)
    ctx->pc = 0x1fe9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 3));
    // 0x1fe9d4: 0x3401e000  ori         $at, $zero, 0xE000
    ctx->pc = 0x1fe9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1fe9d8: 0x1411821  addu        $v1, $t2, $at
    ctx->pc = 0x1fe9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x1fe9dc: 0xad6304c4  sw          $v1, 0x4C4($t3)
    ctx->pc = 0x1fe9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1220), GPR_U32(ctx, 3));
    // 0x1fe9e0: 0x28e30016  slti        $v1, $a3, 0x16
    ctx->pc = 0x1fe9e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fe9e4: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FE9E4u;
    {
        const bool branch_taken_0x1fe9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9E4u;
            // 0x1fe9e8: 0x252900c0  addiu       $t1, $t1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9e4) {
            ctx->pc = 0x1FE984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe984;
        }
    }
    ctx->pc = 0x1FE9ECu;
    // 0x1fe9ec: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1fe9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fe9f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE9F0u;
    {
        const bool branch_taken_0x1fe9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9F0u;
            // 0x1fe9f4: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9f0) {
            ctx->pc = 0x1FEA28u;
            goto label_1fea28;
        }
    }
    ctx->pc = 0x1FE9F8u;
    // 0x1fe9f8: 0x74340  sll         $t0, $a3, 13
    ctx->pc = 0x1fe9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 13));
    // 0x1fe9fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1fe9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fea00: 0x348c0  sll         $t1, $v1, 3
    ctx->pc = 0x1fea00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fea04: 0x24860d60  addiu       $a2, $a0, 0xD60
    ctx->pc = 0x1fea04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
label_1fea08:
    // 0x1fea08: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x1fea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fea0c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fea10: 0xac65041c  sw          $a1, 0x41C($v1)
    ctx->pc = 0x1fea10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1052), GPR_U32(ctx, 5));
    // 0x1fea14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1fea18: 0x28e3001e  slti        $v1, $a3, 0x1E
    ctx->pc = 0x1fea18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fea1c: 0x25082000  addiu       $t0, $t0, 0x2000
    ctx->pc = 0x1fea1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8192));
    // 0x1fea20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FEA20u;
    {
        const bool branch_taken_0x1fea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA20u;
            // 0x1fea24: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea20) {
            ctx->pc = 0x1FEA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fea08;
        }
    }
    ctx->pc = 0x1FEA28u;
label_1fea28:
    // 0x1fea28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA30u;
}
