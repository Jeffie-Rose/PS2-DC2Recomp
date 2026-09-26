#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsMakeObject__12CMenuGeoramaFii
// Address: 0x1f9fc0 - 0x1fa358
void IsMakeObject__12CMenuGeoramaFii_0x1f9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsMakeObject__12CMenuGeoramaFii_0x1f9fc0");
#endif

    switch (ctx->pc) {
        case 0x1fa018u: goto label_1fa018;
        case 0x1fa0ccu: goto label_1fa0cc;
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa138u: goto label_1fa138;
        case 0x1fa150u: goto label_1fa150;
        case 0x1fa17cu: goto label_1fa17c;
        case 0x1fa188u: goto label_1fa188;
        case 0x1fa1a4u: goto label_1fa1a4;
        case 0x1fa1c0u: goto label_1fa1c0;
        case 0x1fa1e4u: goto label_1fa1e4;
        case 0x1fa1fcu: goto label_1fa1fc;
        case 0x1fa21cu: goto label_1fa21c;
        case 0x1fa224u: goto label_1fa224;
        case 0x1fa23cu: goto label_1fa23c;
        case 0x1fa268u: goto label_1fa268;
        case 0x1fa274u: goto label_1fa274;
        case 0x1fa27cu: goto label_1fa27c;
        case 0x1fa28cu: goto label_1fa28c;
        case 0x1fa2a0u: goto label_1fa2a0;
        case 0x1fa2b8u: goto label_1fa2b8;
        case 0x1fa2f8u: goto label_1fa2f8;
        case 0x1fa31cu: goto label_1fa31c;
        case 0x1fa334u: goto label_1fa334;
        default: break;
    }

    ctx->pc = 0x1f9fc0u;

    // 0x1f9fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9fc4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f9fc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f9fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f9fcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f9fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f9fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9fdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9fe4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f9fe8: 0x8c30ca48  lw          $s0, -0x35B8($at)
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1f9fec: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1F9FECu;
    {
        const bool branch_taken_0x1f9fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FECu;
            // 0x1f9ff0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fec) {
            ctx->pc = 0x1FA1D8u;
            goto label_1fa1d8;
        }
    }
    ctx->pc = 0x1F9FF4u;
    // 0x1f9ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ff8: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1F9FF8u;
    {
        const bool branch_taken_0x1f9ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9ff8) {
            ctx->pc = 0x1FA1B0u;
            goto label_1fa1b0;
        }
    }
    ctx->pc = 0x1FA000u;
    // 0x1fa000: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA000u;
    {
        const bool branch_taken_0x1fa000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa000) {
            ctx->pc = 0x1FA010u;
            goto label_1fa010;
        }
    }
    ctx->pc = 0x1FA008u;
    // 0x1fa008: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1FA008u;
    {
        const bool branch_taken_0x1fa008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa008) {
            ctx->pc = 0x1FA324u;
            goto label_1fa324;
        }
    }
    ctx->pc = 0x1FA010u;
label_1fa010:
    // 0x1fa010: 0xc08e834  jal         func_23A0D0
    ctx->pc = 0x1FA010u;
    SET_GPR_U32(ctx, 31, 0x1FA018u);
    ctx->pc = 0x23A0D0u;
    if (runtime->hasFunction(0x23A0D0u)) {
        auto targetFn = runtime->lookupFunction(0x23A0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA018u; }
        if (ctx->pc != 0x1FA018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMakeObject__14CBaseMenuClassFi_0x23a0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA018u; }
        if (ctx->pc != 0x1FA018u) { return; }
    }
    ctx->pc = 0x1FA018u;
label_1fa018:
    // 0x1fa018: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa01c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA01Cu;
    {
        const bool branch_taken_0x1fa01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FA020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA01Cu;
            // 0x1fa020: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa01c) {
            ctx->pc = 0x1FA044u;
            goto label_1fa044;
        }
    }
    ctx->pc = 0x1FA024u;
    // 0x1fa024: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa028: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa02c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa030: 0xac22b7e8  sw          $v0, -0x4818($at)
    ctx->pc = 0x1fa030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948840), GPR_U32(ctx, 2));
    // 0x1fa034: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa038: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa03c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA03Cu;
    {
        const bool branch_taken_0x1fa03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA03Cu;
            // 0x1fa040: 0xac20b7ec  sw          $zero, -0x4814($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa03c) {
            ctx->pc = 0x1FA068u;
            goto label_1fa068;
        }
    }
    ctx->pc = 0x1FA044u;
label_1fa044:
    // 0x1fa044: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA044u;
    {
        const bool branch_taken_0x1fa044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA044u;
            // 0x1fa048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa044) {
            ctx->pc = 0x1FA06Cu;
            goto label_1fa06c;
        }
    }
    ctx->pc = 0x1FA04Cu;
    // 0x1fa04c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa050: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fa050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa054: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa054u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa058: 0xac20b7e8  sw          $zero, -0x4818($at)
    ctx->pc = 0x1fa058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948840), GPR_U32(ctx, 0));
    // 0x1fa05c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa060: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa064: 0xac22b7ec  sw          $v0, -0x4814($at)
    ctx->pc = 0x1fa064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948844), GPR_U32(ctx, 2));
label_1fa068:
    // 0x1fa068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fa06c:
    // 0x1fa06c: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1FA06Cu;
    {
        const bool branch_taken_0x1fa06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fa06c) {
            ctx->pc = 0x1FA194u;
            goto label_1fa194;
        }
    }
    ctx->pc = 0x1FA074u;
    // 0x1fa074: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fa074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa078: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA078u;
    {
        const bool branch_taken_0x1fa078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA078u;
            // 0x1fa07c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa078) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1FA080u;
    // 0x1fa080: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA080u;
    {
        const bool branch_taken_0x1fa080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fa080) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1FA088u;
    // 0x1fa088: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1FA088u;
    {
        const bool branch_taken_0x1fa088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA088u;
            // 0x1fa08c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa088) {
            ctx->pc = 0x1FA33Cu;
            goto label_1fa33c;
        }
    }
    ctx->pc = 0x1FA090u;
label_1fa090:
    // 0x1fa090: 0x82420108  lb          $v0, 0x108($s2)
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x1fa094: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FA094u;
    {
        const bool branch_taken_0x1fa094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa094) {
            ctx->pc = 0x1FA194u;
            goto label_1fa194;
        }
    }
    ctx->pc = 0x1FA09Cu;
    // 0x1fa09c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fa0a0: 0x3442b7f0  ori         $v0, $v0, 0xB7F0
    ctx->pc = 0x1fa0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47088);
    // 0x1fa0a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fa0a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa0ac: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1FA0ACu;
    {
        const bool branch_taken_0x1fa0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0ACu;
            // 0x1fa0b0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0ac) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA0B4u;
    // 0x1fa0b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fa0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa0b8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0c0: 0x8c23b7dc  lw          $v1, -0x4824($at)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948828)));
    // 0x1fa0c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA0C4u;
    {
        const bool branch_taken_0x1fa0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0C4u;
            // 0x1fa0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0c4) {
            ctx->pc = 0x1FA0F0u;
            goto label_1fa0f0;
        }
    }
    ctx->pc = 0x1FA0CCu;
label_1fa0cc:
    // 0x1fa0cc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa0d0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fa0d4: 0x9022b7c5  lbu         $v0, -0x483B($at)
    ctx->pc = 0x1fa0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948805)));
    // 0x1fa0d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA0D8u;
    {
        const bool branch_taken_0x1fa0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0d8) {
            ctx->pc = 0x1FA0E4u;
            goto label_1fa0e4;
        }
    }
    ctx->pc = 0x1FA0E0u;
    // 0x1fa0e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fa0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0e4:
    // 0x1fa0e4: 0x0  nop
    ctx->pc = 0x1fa0e4u;
    // NOP
    // 0x1fa0e8: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1fa0ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fa0f0:
    // 0x1fa0f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1fa0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa0f4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FA0F4u;
    {
        const bool branch_taken_0x1fa0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0F4u;
            // 0x1fa0f8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0f4) {
            ctx->pc = 0x1FA0CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fa0cc;
        }
    }
    ctx->pc = 0x1FA0FCu;
    // 0x1fa0fc: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x1fa100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA100u;
    {
        const bool branch_taken_0x1fa100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA100u;
            // 0x1fa104: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa100) {
            ctx->pc = 0x1FA120u;
            goto label_1fa120;
        }
    }
    ctx->pc = 0x1FA108u;
    // 0x1fa108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fa108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa10c: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x1FA10Cu;
    SET_GPR_U32(ctx, 31, 0x1FA114u);
    ctx->pc = 0x1FA110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA10Cu;
            // 0x1fa110: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA114u; }
        if (ctx->pc != 0x1FA114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA114u; }
        if (ctx->pc != 0x1FA114u) { return; }
    }
    ctx->pc = 0x1FA114u;
label_1fa114:
    // 0x1fa114: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA114u;
    {
        const bool branch_taken_0x1fa114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa114) {
            ctx->pc = 0x1FA120u;
            goto label_1fa120;
        }
    }
    ctx->pc = 0x1FA11Cu;
    // 0x1fa11c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fa11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa120:
    // 0x1fa120: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA120u;
    {
        const bool branch_taken_0x1fa120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA120u;
            // 0x1fa124: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa120) {
            ctx->pc = 0x1FA144u;
            goto label_1fa144;
        }
    }
    ctx->pc = 0x1FA128u;
    // 0x1fa128: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fa12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa130: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA130u;
    SET_GPR_U32(ctx, 31, 0x1FA138u);
    ctx->pc = 0x1FA134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA130u;
            // 0x1fa134: 0x24a58be0  addiu       $a1, $a1, -0x7420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA138u; }
        if (ctx->pc != 0x1FA138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA138u; }
        if (ctx->pc != 0x1FA138u) { return; }
    }
    ctx->pc = 0x1FA138u;
label_1fa138:
    // 0x1fa138: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fa138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa13c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1FA13Cu;
    {
        const bool branch_taken_0x1fa13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA13Cu;
            // 0x1fa140: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa13c) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA144u;
label_1fa144:
    // 0x1fa144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa148: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA148u;
    SET_GPR_U32(ctx, 31, 0x1FA150u);
    ctx->pc = 0x1FA14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA148u;
            // 0x1fa14c: 0x24a58bf0  addiu       $a1, $a1, -0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA150u; }
        if (ctx->pc != 0x1FA150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA150u; }
        if (ctx->pc != 0x1FA150u) { return; }
    }
    ctx->pc = 0x1FA150u;
label_1fa150:
    // 0x1fa150: 0xc7809090  lwc1        $f0, -0x6F70($gp)
    ctx->pc = 0x1fa150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa154: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1fa154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fa158: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa160: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa160u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa168: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fa168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1fa16c: 0x8c22b7f0  lw          $v0, -0x4810($at)
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fa170: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1fa170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1fa174: 0xc087720  jal         func_21DC80
    ctx->pc = 0x1FA174u;
    SET_GPR_U32(ctx, 31, 0x1FA17Cu);
    ctx->pc = 0x1FA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA174u;
            // 0x1fa178: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA17Cu; }
        if (ctx->pc != 0x1FA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA17Cu; }
        if (ctx->pc != 0x1FA17Cu) { return; }
    }
    ctx->pc = 0x1FA17Cu;
label_1fa17c:
    // 0x1fa17c: 0x8e450100  lw          $a1, 0x100($s2)
    ctx->pc = 0x1fa17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x1fa180: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FA180u;
    SET_GPR_U32(ctx, 31, 0x1FA188u);
    ctx->pc = 0x1FA184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA180u;
            // 0x1fa184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA188u; }
        if (ctx->pc != 0x1FA188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA188u; }
        if (ctx->pc != 0x1FA188u) { return; }
    }
    ctx->pc = 0x1FA188u;
label_1fa188:
    // 0x1fa188: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fa188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa18c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1FA18Cu;
    {
        const bool branch_taken_0x1fa18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA18Cu;
            // 0x1fa190: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa18c) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA194u;
label_1fa194:
    // 0x1fa194: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fa198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa19c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA19Cu;
    SET_GPR_U32(ctx, 31, 0x1FA1A4u);
    ctx->pc = 0x1FA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA19Cu;
            // 0x1fa1a0: 0x24a58c10  addiu       $a1, $a1, -0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1A4u; }
        if (ctx->pc != 0x1FA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1A4u; }
        if (ctx->pc != 0x1FA1A4u) { return; }
    }
    ctx->pc = 0x1FA1A4u;
label_1fa1a4:
    // 0x1fa1a4: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1fa1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fa1a8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FA1A8u;
    {
        const bool branch_taken_0x1fa1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1A8u;
            // 0x1fa1ac: 0xa6400002  sh          $zero, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1a8) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA1B0u;
label_1fa1b0:
    // 0x1fa1b0: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1FA1B0u;
    {
        const bool branch_taken_0x1fa1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1B0u;
            // 0x1fa1b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1b0) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA1B8u;
    // 0x1fa1b8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA1B8u;
    SET_GPR_U32(ctx, 31, 0x1FA1C0u);
    ctx->pc = 0x1FA1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1B8u;
            // 0x1fa1bc: 0x24a58c28  addiu       $a1, $a1, -0x73D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1C0u; }
        if (ctx->pc != 0x1FA1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1C0u; }
        if (ctx->pc != 0x1FA1C0u) { return; }
    }
    ctx->pc = 0x1FA1C0u;
label_1fa1c0:
    // 0x1fa1c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa1c4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa1c8: 0xac20b7f0  sw          $zero, -0x4810($at)
    ctx->pc = 0x1fa1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948848), GPR_U32(ctx, 0));
    // 0x1fa1cc: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1fa1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fa1d0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1FA1D0u;
    {
        const bool branch_taken_0x1fa1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1D0u;
            // 0x1fa1d4: 0xa6400002  sh          $zero, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1d0) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA1D8u;
label_1fa1d8:
    // 0x1fa1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1dc: 0xc087654  jal         func_21D950
    ctx->pc = 0x1FA1DCu;
    SET_GPR_U32(ctx, 31, 0x1FA1E4u);
    ctx->pc = 0x1FA1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1DCu;
            // 0x1fa1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1E4u; }
        if (ctx->pc != 0x1FA1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1E4u; }
        if (ctx->pc != 0x1FA1E4u) { return; }
    }
    ctx->pc = 0x1FA1E4u;
label_1fa1e4:
    // 0x1fa1e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fa1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa1ec: 0x1622003d  bne         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FA1ECu;
    {
        const bool branch_taken_0x1fa1ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1ECu;
            // 0x1fa1f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1ec) {
            ctx->pc = 0x1FA2E4u;
            goto label_1fa2e4;
        }
    }
    ctx->pc = 0x1FA1F4u;
    // 0x1fa1f4: 0xc064220  jal         func_190880
    ctx->pc = 0x1FA1F4u;
    SET_GPR_U32(ctx, 31, 0x1FA1FCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1FCu; }
        if (ctx->pc != 0x1FA1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1FCu; }
        if (ctx->pc != 0x1FA1FCu) { return; }
    }
    ctx->pc = 0x1FA1FCu;
label_1fa1fc:
    // 0x1fa1fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa200: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fa204: 0x3442b7f0  ori         $v0, $v0, 0xB7F0
    ctx->pc = 0x1fa204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47088);
    // 0x1fa208: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fa20c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa210: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa214: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x1FA214u;
    SET_GPR_U32(ctx, 31, 0x1FA21Cu);
    ctx->pc = 0x1FA218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA214u;
            // 0x1fa218: 0x8e460100  lw          $a2, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA21Cu; }
        if (ctx->pc != 0x1FA21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA21Cu; }
        if (ctx->pc != 0x1FA21Cu) { return; }
    }
    ctx->pc = 0x1FA21Cu;
label_1fa21c:
    // 0x1fa21c: 0xc07e374  jal         func_1F8DD0
    ctx->pc = 0x1FA21Cu;
    SET_GPR_U32(ctx, 31, 0x1FA224u);
    ctx->pc = 0x1FA220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA21Cu;
            // 0x1fa220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DD0u;
    if (runtime->hasFunction(0x1F8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA224u; }
        if (ctx->pc != 0x1FA224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateGeoramaPartsList__12CMenuGeoramaFv_0x1f8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA224u; }
        if (ctx->pc != 0x1FA224u) { return; }
    }
    ctx->pc = 0x1FA224u;
label_1fa224:
    // 0x1fa224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa228: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fa22c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa230: 0xa3829040  sb          $v0, -0x6FC0($gp)
    ctx->pc = 0x1fa230u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fa234: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA234u;
    SET_GPR_U32(ctx, 31, 0x1FA23Cu);
    ctx->pc = 0x1FA238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA234u;
            // 0x1fa238: 0x24a58c38  addiu       $a1, $a1, -0x73C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA23Cu; }
        if (ctx->pc != 0x1FA23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA23Cu; }
        if (ctx->pc != 0x1FA23Cu) { return; }
    }
    ctx->pc = 0x1FA23Cu;
label_1fa23c:
    // 0x1fa23c: 0xc7809094  lwc1        $f0, -0x6F6C($gp)
    ctx->pc = 0x1fa23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa240: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1fa244: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa24c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa254: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fa254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1fa258: 0x8c22b7f0  lw          $v0, -0x4810($at)
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fa25c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1fa25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1fa260: 0xc087720  jal         func_21DC80
    ctx->pc = 0x1FA260u;
    SET_GPR_U32(ctx, 31, 0x1FA268u);
    ctx->pc = 0x1FA264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA260u;
            // 0x1fa264: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA268u; }
        if (ctx->pc != 0x1FA268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA268u; }
        if (ctx->pc != 0x1FA268u) { return; }
    }
    ctx->pc = 0x1FA268u;
label_1fa268:
    // 0x1fa268: 0x8e450100  lw          $a1, 0x100($s2)
    ctx->pc = 0x1fa268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x1fa26c: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FA26Cu;
    SET_GPR_U32(ctx, 31, 0x1FA274u);
    ctx->pc = 0x1FA270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA26Cu;
            // 0x1fa270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA274u; }
        if (ctx->pc != 0x1FA274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA274u; }
        if (ctx->pc != 0x1FA274u) { return; }
    }
    ctx->pc = 0x1FA274u;
label_1fa274:
    // 0x1fa274: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA274u;
    {
        const bool branch_taken_0x1fa274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA274u;
            // 0x1fa278: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa274) {
            ctx->pc = 0x1FA2BCu;
            goto label_1fa2bc;
        }
    }
    ctx->pc = 0x1FA27Cu;
label_1fa27c:
    // 0x1fa27c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa27cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa280: 0x8c24b7f0  lw          $a0, -0x4810($at)
    ctx->pc = 0x1fa280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fa284: 0xc06d5cc  jal         func_1B5730
    ctx->pc = 0x1FA284u;
    SET_GPR_U32(ctx, 31, 0x1FA28Cu);
    ctx->pc = 0x1FA288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA284u;
            // 0x1fa288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5730u;
    if (runtime->hasFunction(0x1B5730u)) {
        auto targetFn = runtime->lookupFunction(0x1B5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA28Cu; }
        if (ctx->pc != 0x1FA28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__14CEditPartsInfoFi_0x1b5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA28Cu; }
        if (ctx->pc != 0x1FA28Cu) { return; }
    }
    ctx->pc = 0x1FA28Cu;
label_1fa28c:
    // 0x1fa28c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fa28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa290: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA290u;
    {
        const bool branch_taken_0x1fa290 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa290) {
            ctx->pc = 0x1FA2B8u;
            goto label_1fa2b8;
        }
    }
    ctx->pc = 0x1FA298u;
    // 0x1fa298: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FA298u;
    SET_GPR_U32(ctx, 31, 0x1FA2A0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2A0u; }
        if (ctx->pc != 0x1FA2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2A0u; }
        if (ctx->pc != 0x1FA2A0u) { return; }
    }
    ctx->pc = 0x1FA2A0u;
label_1fa2a0:
    // 0x1fa2a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2a4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1fa2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1fa2a8: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x1fa2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x1fa2ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fa2b0: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x1FA2B0u;
    SET_GPR_U32(ctx, 31, 0x1FA2B8u);
    ctx->pc = 0x1FA2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2B0u;
            // 0x1fa2b4: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2B8u; }
        if (ctx->pc != 0x1FA2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2B8u; }
        if (ctx->pc != 0x1FA2B8u) { return; }
    }
    ctx->pc = 0x1FA2B8u;
label_1fa2b8:
    // 0x1fa2b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa2bc:
    // 0x1fa2bc: 0x0  nop
    ctx->pc = 0x1fa2bcu;
    // NOP
    // 0x1fa2c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa2c4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa2c8: 0x8c22b7dc  lw          $v0, -0x4824($at)
    ctx->pc = 0x1fa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948828)));
    // 0x1fa2cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1fa2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fa2d0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FA2D0u;
    {
        const bool branch_taken_0x1fa2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2D0u;
            // 0x1fa2d4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2d0) {
            ctx->pc = 0x1FA27Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fa27c;
        }
    }
    ctx->pc = 0x1FA2D8u;
    // 0x1fa2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa2dc: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1fa2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fa2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fa2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fa2e4:
    // 0x1fa2e4: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA2E4u;
    {
        const bool branch_taken_0x1fa2e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2E4u;
            // 0x1fa2e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2e4) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA2ECu;
    // 0x1fa2ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2f0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA2F0u;
    SET_GPR_U32(ctx, 31, 0x1FA2F8u);
    ctx->pc = 0x1FA2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2F0u;
            // 0x1fa2f4: 0x24a58c48  addiu       $a1, $a1, -0x73B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2F8u; }
        if (ctx->pc != 0x1FA2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2F8u; }
        if (ctx->pc != 0x1FA2F8u) { return; }
    }
    ctx->pc = 0x1FA2F8u;
label_1fa2f8:
    // 0x1fa2f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fa2fc: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x1fa2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1fa300: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fa304: 0x3421b7c4  ori         $at, $at, 0xB7C4
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47044);
    // 0x1fa308: 0x2413021  addu        $a2, $s2, $at
    ctx->pc = 0x1fa308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa30c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa310: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fa310u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fa314: 0xc07e7a4  jal         func_1F9E90
    ctx->pc = 0x1FA314u;
    SET_GPR_U32(ctx, 31, 0x1FA31Cu);
    ctx->pc = 0x1FA318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA314u;
            // 0x1fa318: 0x8c25b7f0  lw          $a1, -0x4810($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E90u;
    if (runtime->hasFunction(0x1F9E90u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA31Cu; }
        if (ctx->pc != 0x1FA31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsgPartsItemInfo__FP7CDC2MesP14CEditPartsInfoP21MENUFORM_MAKEBRD_INFO_0x1f9e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA31Cu; }
        if (ctx->pc != 0x1FA31Cu) { return; }
    }
    ctx->pc = 0x1FA31Cu;
label_1fa31c:
    // 0x1fa31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA31Cu;
    {
        const bool branch_taken_0x1fa31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA31Cu;
            // 0x1fa320: 0xa6400002  sh          $zero, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa31c) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA324u;
label_1fa324:
    // 0x1fa324: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA324u;
    {
        const bool branch_taken_0x1fa324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA324u;
            // 0x1fa328: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa324) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA32Cu;
    // 0x1fa32c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FA32Cu;
    SET_GPR_U32(ctx, 31, 0x1FA334u);
    ctx->pc = 0x1FA330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA32Cu;
            // 0x1fa330: 0x24a58c58  addiu       $a1, $a1, -0x73A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA334u; }
        if (ctx->pc != 0x1FA334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA334u; }
        if (ctx->pc != 0x1FA334u) { return; }
    }
    ctx->pc = 0x1FA334u;
label_1fa334:
    // 0x1fa334: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x1fa334u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
label_1fa338:
    // 0x1fa338: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa33c:
    // 0x1fa33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fa340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fa344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa350: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA350u;
            // 0x1fa354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA358u;
}
