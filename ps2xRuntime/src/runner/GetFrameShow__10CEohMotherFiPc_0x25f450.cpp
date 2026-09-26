#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFrameShow__10CEohMotherFiPc
// Address: 0x25f450 - 0x25f51c
void GetFrameShow__10CEohMotherFiPc_0x25f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFrameShow__10CEohMotherFiPc_0x25f450");
#endif

    switch (ctx->pc) {
        case 0x25f4b4u: goto label_25f4b4;
        default: break;
    }

    ctx->pc = 0x25f450u;

    // 0x25f450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f454: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F454u;
    {
        const bool branch_taken_0x25f454 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F454u;
            // 0x25f458: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f454) {
            ctx->pc = 0x25F468u;
            goto label_25f468;
        }
    }
    ctx->pc = 0x25F45Cu;
    // 0x25f45c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F460u;
    {
        const bool branch_taken_0x25f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F460u;
            // 0x25f464: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f460) {
            ctx->pc = 0x25F470u;
            goto label_25f470;
        }
    }
    ctx->pc = 0x25F468u;
label_25f468:
    // 0x25f468: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25F468u;
    {
        const bool branch_taken_0x25f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F468u;
            // 0x25f46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f468) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F470u;
label_25f470:
    // 0x25f470: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f474: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f478: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f47c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x25F47Cu;
    {
        const bool branch_taken_0x25f47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f47c) {
            ctx->pc = 0x25F4E4u;
            goto label_25f4e4;
        }
    }
    ctx->pc = 0x25F484u;
    // 0x25f484: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F484u;
    {
        const bool branch_taken_0x25f484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f484) {
            ctx->pc = 0x25F494u;
            goto label_25f494;
        }
    }
    ctx->pc = 0x25F48Cu;
    // 0x25f48c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25F48Cu;
    {
        const bool branch_taken_0x25f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F48Cu;
            // 0x25f490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f48c) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F494u;
label_25f494:
    // 0x25f494: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25f498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F498u;
    {
        const bool branch_taken_0x25f498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f498) {
            ctx->pc = 0x25F4A8u;
            goto label_25f4a8;
        }
    }
    ctx->pc = 0x25F4A0u;
    // 0x25f4a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25F4A0u;
    {
        const bool branch_taken_0x25f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4A0u;
            // 0x25f4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4a0) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F4A8u;
label_25f4a8:
    // 0x25f4a8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x25f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25f4ac: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25F4ACu;
    SET_GPR_U32(ctx, 31, 0x25F4B4u);
    ctx->pc = 0x25F4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4ACu;
            // 0x25f4b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4B4u; }
        if (ctx->pc != 0x25F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4B4u; }
        if (ctx->pc != 0x25F4B4u) { return; }
    }
    ctx->pc = 0x25F4B4u;
label_25f4b4:
    // 0x25f4b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F4B4u;
    {
        const bool branch_taken_0x25f4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f4b4) {
            ctx->pc = 0x25F4C4u;
            goto label_25f4c4;
        }
    }
    ctx->pc = 0x25F4BCu;
    // 0x25f4bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25F4BCu;
    {
        const bool branch_taken_0x25f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4BCu;
            // 0x25f4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4bc) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F4C4u;
label_25f4c4:
    // 0x25f4c4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25f4c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F4C8u;
    {
        const bool branch_taken_0x25f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f4c8) {
            ctx->pc = 0x25F4D8u;
            goto label_25f4d8;
        }
    }
    ctx->pc = 0x25F4D0u;
    // 0x25f4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F4D0u;
    {
        const bool branch_taken_0x25f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4D0u;
            // 0x25f4d4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4d0) {
            ctx->pc = 0x25F4DCu;
            goto label_25f4dc;
        }
    }
    ctx->pc = 0x25F4D8u;
label_25f4d8:
    // 0x25f4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f4dc:
    // 0x25f4dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25F4DCu;
    {
        const bool branch_taken_0x25f4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4DCu;
            // 0x25f4e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4dc) {
            ctx->pc = 0x25F514u;
            goto label_25f514;
        }
    }
    ctx->pc = 0x25F4E4u;
label_25f4e4:
    // 0x25f4e4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25f4e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F4E8u;
    {
        const bool branch_taken_0x25f4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f4e8) {
            ctx->pc = 0x25F4F8u;
            goto label_25f4f8;
        }
    }
    ctx->pc = 0x25F4F0u;
    // 0x25f4f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25F4F0u;
    {
        const bool branch_taken_0x25f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4F0u;
            // 0x25f4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4f0) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F4F8u;
label_25f4f8:
    // 0x25f4f8: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25f4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F4FCu;
    {
        const bool branch_taken_0x25f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f4fc) {
            ctx->pc = 0x25F50Cu;
            goto label_25f50c;
        }
    }
    ctx->pc = 0x25F504u;
    // 0x25f504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F504u;
    {
        const bool branch_taken_0x25f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F504u;
            // 0x25f508: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f504) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F50Cu;
label_25f50c:
    // 0x25f50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f510:
    // 0x25f510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f514:
    // 0x25f514: 0x3e00008  jr          $ra
    ctx->pc = 0x25F514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F514u;
            // 0x25f518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F51Cu;
}
