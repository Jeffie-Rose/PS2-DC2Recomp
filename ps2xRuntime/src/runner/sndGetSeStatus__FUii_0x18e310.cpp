#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetSeStatus__FUii
// Address: 0x18e310 - 0x18e408
void sndGetSeStatus__FUii_0x18e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetSeStatus__FUii_0x18e310");
#endif

    switch (ctx->pc) {
        case 0x18e330u: goto label_18e330;
        case 0x18e338u: goto label_18e338;
        case 0x18e344u: goto label_18e344;
        default: break;
    }

    ctx->pc = 0x18e310u;

    // 0x18e310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e314: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e318: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E318u;
    {
        const bool branch_taken_0x18e318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E318u;
            // 0x18e31c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e318) {
            ctx->pc = 0x18E328u;
            goto label_18e328;
        }
    }
    ctx->pc = 0x18E320u;
    // 0x18e320: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18E320u;
    {
        const bool branch_taken_0x18e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E320u;
            // 0x18e324: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e320) {
            ctx->pc = 0x18E400u;
            goto label_18e400;
        }
    }
    ctx->pc = 0x18E328u;
label_18e328:
    // 0x18e328: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18E328u;
    SET_GPR_U32(ctx, 31, 0x18E330u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E330u; }
        if (ctx->pc != 0x18E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E330u; }
        if (ctx->pc != 0x18E330u) { return; }
    }
    ctx->pc = 0x18E330u;
label_18e330:
    // 0x18e330: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18E330u;
    SET_GPR_U32(ctx, 31, 0x18E338u);
    ctx->pc = 0x18E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E330u;
            // 0x18e334: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E338u; }
        if (ctx->pc != 0x18E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E338u; }
        if (ctx->pc != 0x18E338u) { return; }
    }
    ctx->pc = 0x18E338u;
label_18e338:
    // 0x18e338: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e33c: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E33Cu;
    SET_GPR_U32(ctx, 31, 0x18E344u);
    ctx->pc = 0x18E340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E33Cu;
            // 0x18e340: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E344u; }
        if (ctx->pc != 0x18E344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E344u; }
        if (ctx->pc != 0x18E344u) { return; }
    }
    ctx->pc = 0x18E344u;
label_18e344:
    // 0x18e344: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E344u;
    {
        const bool branch_taken_0x18e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e344) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E34Cu;
    // 0x18e34c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18E34Cu;
    {
        const bool branch_taken_0x18e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E34Cu;
            // 0x18e350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e34c) {
            ctx->pc = 0x18E3FCu;
            goto label_18e3fc;
        }
    }
    ctx->pc = 0x18E354u;
label_18e354:
    // 0x18e354: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E354u;
    {
        const bool branch_taken_0x18e354 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E354u;
            // 0x18e358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e354) {
            ctx->pc = 0x18E36Cu;
            goto label_18e36c;
        }
    }
    ctx->pc = 0x18E35Cu;
    // 0x18e35c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18e360: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18e360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e364: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E364u;
    {
        const bool branch_taken_0x18e364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E364u;
            // 0x18e368: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e364) {
            ctx->pc = 0x18E374u;
            goto label_18e374;
        }
    }
    ctx->pc = 0x18E36Cu;
label_18e36c:
    // 0x18e36c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E36Cu;
    {
        const bool branch_taken_0x18e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e36c) {
            ctx->pc = 0x18E384u;
            goto label_18e384;
        }
    }
    ctx->pc = 0x18E374u;
label_18e374:
    // 0x18e374: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18e374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18e378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e37c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e380: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18e384:
    // 0x18e384: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E384u;
    {
        const bool branch_taken_0x18e384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e384) {
            ctx->pc = 0x18E394u;
            goto label_18e394;
        }
    }
    ctx->pc = 0x18E38Cu;
    // 0x18e38c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18E38Cu;
    {
        const bool branch_taken_0x18e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E38Cu;
            // 0x18e390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e38c) {
            ctx->pc = 0x18E3FCu;
            goto label_18e3fc;
        }
    }
    ctx->pc = 0x18E394u;
label_18e394:
    // 0x18e394: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E394u;
    {
        const bool branch_taken_0x18e394 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18E398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E394u;
            // 0x18e398: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e394) {
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E39Cu;
    // 0x18e39c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e3a0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18e3a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e3a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3A4u;
    {
        const bool branch_taken_0x18e3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3a4) {
            ctx->pc = 0x18E3B8u;
            goto label_18e3b8;
        }
    }
    ctx->pc = 0x18E3ACu;
    // 0x18e3ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18e3acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e3b0:
    // 0x18e3b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E3B0u;
    {
        const bool branch_taken_0x18e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3b0) {
            ctx->pc = 0x18E3CCu;
            goto label_18e3cc;
        }
    }
    ctx->pc = 0x18E3B8u;
label_18e3b8:
    // 0x18e3b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e3bc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18e3c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e3c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e3cc:
    // 0x18e3cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3CCu;
    {
        const bool branch_taken_0x18e3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3cc) {
            ctx->pc = 0x18E3DCu;
            goto label_18e3dc;
        }
    }
    ctx->pc = 0x18E3D4u;
    // 0x18e3d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18E3D4u;
    {
        const bool branch_taken_0x18e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3D4u;
            // 0x18e3d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d4) {
            ctx->pc = 0x18E3FCu;
            goto label_18e3fc;
        }
    }
    ctx->pc = 0x18E3DCu;
label_18e3dc:
    // 0x18e3dc: 0x80640004  lb          $a0, 0x4($v1)
    ctx->pc = 0x18e3dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18e3e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e3e4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3E4u;
    {
        const bool branch_taken_0x18e3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18e3e4) {
            ctx->pc = 0x18E3F4u;
            goto label_18e3f4;
        }
    }
    ctx->pc = 0x18E3ECu;
    // 0x18e3ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3ECu;
    {
        const bool branch_taken_0x18e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3ECu;
            // 0x18e3f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3ec) {
            ctx->pc = 0x18E3FCu;
            goto label_18e3fc;
        }
    }
    ctx->pc = 0x18E3F4u;
label_18e3f4:
    // 0x18e3f4: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x18e3f8: 0x0  nop
    ctx->pc = 0x18e3f8u;
    // NOP
label_18e3fc:
    // 0x18e3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e400:
    // 0x18e400: 0x3e00008  jr          $ra
    ctx->pc = 0x18E400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E400u;
            // 0x18e404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E408u;
}
