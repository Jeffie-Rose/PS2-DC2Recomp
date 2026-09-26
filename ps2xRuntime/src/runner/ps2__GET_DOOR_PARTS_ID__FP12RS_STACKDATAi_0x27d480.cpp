#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DOOR_PARTS_ID__FP12RS_STACKDATAi
// Address: 0x27d480 - 0x27d500
void ps2__GET_DOOR_PARTS_ID__FP12RS_STACKDATAi_0x27d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DOOR_PARTS_ID__FP12RS_STACKDATAi_0x27d480");
#endif

    switch (ctx->pc) {
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4dcu: goto label_27d4dc;
        case 0x27d4e8u: goto label_27d4e8;
        default: break;
    }

    ctx->pc = 0x27d480u;

    // 0x27d480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d494: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D494u;
    {
        const bool branch_taken_0x27d494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D494u;
            // 0x27d498: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d494) {
            ctx->pc = 0x27D4A4u;
            goto label_27d4a4;
        }
    }
    ctx->pc = 0x27D49Cu;
    // 0x27d49c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27D49Cu;
    {
        const bool branch_taken_0x27d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D49Cu;
            // 0x27d4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d49c) {
            ctx->pc = 0x27D4ECu;
            goto label_27d4ec;
        }
    }
    ctx->pc = 0x27D4A4u;
label_27d4a4:
    // 0x27d4a4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27d4a8: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x27D4A8u;
    SET_GPR_U32(ctx, 31, 0x27D4B0u);
    ctx->pc = 0x27D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4A8u;
            // 0x27d4ac: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4B0u; }
        if (ctx->pc != 0x27D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4B0u; }
        if (ctx->pc != 0x27D4B0u) { return; }
    }
    ctx->pc = 0x27D4B0u;
label_27d4b0:
    // 0x27d4b0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x27d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x27d4b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4b8: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x27D4B8u;
    SET_GPR_U32(ctx, 31, 0x27D4C0u);
    ctx->pc = 0x27D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4B8u;
            // 0x27d4bc: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (runtime->hasFunction(0x1D78D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D78D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4C0u; }
        if (ctx->pc != 0x27D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDoorParts__11CAutoMapGenFv_0x1d78d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4C0u; }
        if (ctx->pc != 0x27D4C0u) { return; }
    }
    ctx->pc = 0x27D4C0u;
label_27d4c0:
    // 0x27d4c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4c4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D4C4u;
    {
        const bool branch_taken_0x27d4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4C4u;
            // 0x27d4c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4c4) {
            ctx->pc = 0x27D4DCu;
            goto label_27d4dc;
        }
    }
    ctx->pc = 0x27D4CCu;
    // 0x27d4cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D4CCu;
    {
        const bool branch_taken_0x27d4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4CCu;
            // 0x27d4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4cc) {
            ctx->pc = 0x27D4E0u;
            goto label_27d4e0;
        }
    }
    ctx->pc = 0x27D4D4u;
    // 0x27d4d4: 0xc057544  jal         func_15D510
    ctx->pc = 0x27D4D4u;
    SET_GPR_U32(ctx, 31, 0x27D4DCu);
    ctx->pc = 0x27D4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4D4u;
            // 0x27d4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D510u;
    if (runtime->hasFunction(0x15D510u)) {
        auto targetFn = runtime->lookupFunction(0x15D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4DCu; }
        if (ctx->pc != 0x27D4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertParts__4CMapFP9CMapParts_0x15d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4DCu; }
        if (ctx->pc != 0x27D4DCu) { return; }
    }
    ctx->pc = 0x27D4DCu;
label_27d4dc:
    // 0x27d4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d4e0:
    // 0x27d4e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D4E0u;
    SET_GPR_U32(ctx, 31, 0x27D4E8u);
    ctx->pc = 0x27D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4E0u;
            // 0x27d4e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4E8u; }
        if (ctx->pc != 0x27D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4E8u; }
        if (ctx->pc != 0x27D4E8u) { return; }
    }
    ctx->pc = 0x27D4E8u;
label_27d4e8:
    // 0x27d4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d4ec:
    // 0x27d4ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4F8u;
            // 0x27d4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D500u;
}
