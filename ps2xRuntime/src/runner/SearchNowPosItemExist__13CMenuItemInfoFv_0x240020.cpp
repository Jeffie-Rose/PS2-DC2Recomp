#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNowPosItemExist__13CMenuItemInfoFv
// Address: 0x240020 - 0x240174
void SearchNowPosItemExist__13CMenuItemInfoFv_0x240020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNowPosItemExist__13CMenuItemInfoFv_0x240020");
#endif

    switch (ctx->pc) {
        case 0x240090u: goto label_240090;
        case 0x2400a0u: goto label_2400a0;
        case 0x240164u: goto label_240164;
        default: break;
    }

    ctx->pc = 0x240020u;

    // 0x240020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240024: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x240024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x240028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24002c: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    // 0x240030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240038: 0x84860114  lh          $a2, 0x114($a0)
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x24003c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240040: 0x8f8794f8  lw          $a3, -0x6B08($gp)
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240044: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x240048: 0x84840014  lh          $a0, 0x14($a0)
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24004c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x240050: 0x8ce70070  lw          $a3, 0x70($a3)
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x240054: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x240054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240058: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x240058u;
    {
        const bool branch_taken_0x240058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240058u;
            // 0x24005c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240058) {
            ctx->pc = 0x2400A8u;
            goto label_2400a8;
        }
    }
    ctx->pc = 0x240060u;
    // 0x240060: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x240060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x240064: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240068: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x24006c: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x240070: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x240074: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x240078: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24007c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x240080: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x240080u;
    {
        const bool branch_taken_0x240080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240080u;
            // 0x240084: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240080) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x240088u;
    // 0x240088: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x240088u;
    SET_GPR_U32(ctx, 31, 0x240090u);
    ctx->pc = 0x24008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240088u;
            // 0x24008c: 0x26040304  addiu       $a0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240090u; }
        if (ctx->pc != 0x240090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240090u; }
        if (ctx->pc != 0x240090u) { return; }
    }
    ctx->pc = 0x240090u;
label_240090:
    // 0x240090: 0x860602fe  lh          $a2, 0x2FE($s0)
    ctx->pc = 0x240090u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x240094: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x240098: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x240098u;
    SET_GPR_U32(ctx, 31, 0x2400A0u);
    ctx->pc = 0x24009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240098u;
            // 0x24009c: 0x26050304  addiu       $a1, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400A0u; }
        if (ctx->pc != 0x2400A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400A0u; }
        if (ctx->pc != 0x2400A0u) { return; }
    }
    ctx->pc = 0x2400A0u;
label_2400a0:
    // 0x2400a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2400A0u;
    {
        const bool branch_taken_0x2400a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400A0u;
            // 0x2400a4: 0x26020304  addiu       $v0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400a0) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x2400A8u;
label_2400a8:
    // 0x2400a8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2400A8u;
    {
        const bool branch_taken_0x2400a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2400ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400A8u;
            // 0x2400ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400a8) {
            ctx->pc = 0x2400D0u;
            goto label_2400d0;
        }
    }
    ctx->pc = 0x2400B0u;
    // 0x2400b0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2400b4: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2400b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2400b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2400bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2400c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2400c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2400c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2400c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2400c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2400C8u;
    {
        const bool branch_taken_0x2400c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400C8u;
            // 0x2400cc: 0x2442002c  addiu       $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400c8) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2400D0u;
    {
        const bool branch_taken_0x2400d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2400D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400D0u;
            // 0x2400d4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400d0) {
            ctx->pc = 0x2400F8u;
            goto label_2400f8;
        }
    }
    ctx->pc = 0x2400D8u;
    // 0x2400d8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2400dc: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2400e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2400e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2400e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2400e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2400ec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2400f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2400F0u;
    {
        const bool branch_taken_0x2400f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400F0u;
            // 0x2400f4: 0x24420170  addiu       $v0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400f0) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x2400F8u;
label_2400f8:
    // 0x2400f8: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2400F8u;
    {
        const bool branch_taken_0x2400f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2400FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400F8u;
            // 0x2400fc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400f8) {
            ctx->pc = 0x240134u;
            goto label_240134;
        }
    }
    ctx->pc = 0x240100u;
    // 0x240100: 0x27838394  addiu       $v1, $gp, -0x7C6C
    ctx->pc = 0x240100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935444));
    // 0x240104: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240108: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x24010c: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x24010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x240110: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240114: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x240118: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24011c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x240120: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x240120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24012c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24012Cu;
    {
        const bool branch_taken_0x24012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24012Cu;
            // 0x240130: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24012c) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x240134u;
label_240134:
    // 0x240134: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240134u;
    {
        const bool branch_taken_0x240134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x240138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240134u;
            // 0x240138: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240134) {
            ctx->pc = 0x240144u;
            goto label_240144;
        }
    }
    ctx->pc = 0x24013Cu;
    // 0x24013c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24013Cu;
    {
        const bool branch_taken_0x24013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24013Cu;
            // 0x240140: 0x8e02017c  lw          $v0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24013c) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x240144u;
label_240144:
    // 0x240144: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240144u;
    {
        const bool branch_taken_0x240144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x240148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240144u;
            // 0x240148: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240144) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x24014Cu;
    // 0x24014c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24014Cu;
    {
        const bool branch_taken_0x24014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24014Cu;
            // 0x240150: 0x8e02017c  lw          $v0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24014c) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x240154u;
label_240154:
    // 0x240154: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240154u;
    {
        const bool branch_taken_0x240154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x240154) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x24015Cu;
    // 0x24015c: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x24015Cu;
    SET_GPR_U32(ctx, 31, 0x240164u);
    ctx->pc = 0x240160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24015Cu;
            // 0x240160: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240164u; }
        if (ctx->pc != 0x240164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240164u; }
        if (ctx->pc != 0x240164u) { return; }
    }
    ctx->pc = 0x240164u;
label_240164:
    // 0x240164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24016c: 0x3e00008  jr          $ra
    ctx->pc = 0x24016Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24016Cu;
            // 0x240170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240174u;
}
