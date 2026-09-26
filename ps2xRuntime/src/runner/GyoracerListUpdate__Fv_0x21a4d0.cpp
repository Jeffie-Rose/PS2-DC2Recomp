#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoracerListUpdate__Fv
// Address: 0x21a4d0 - 0x21a5c4
void GyoracerListUpdate__Fv_0x21a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoracerListUpdate__Fv_0x21a4d0");
#endif

    switch (ctx->pc) {
        case 0x21a4fcu: goto label_21a4fc;
        case 0x21a520u: goto label_21a520;
        case 0x21a52cu: goto label_21a52c;
        case 0x21a544u: goto label_21a544;
        case 0x21a57cu: goto label_21a57c;
        case 0x21a5acu: goto label_21a5ac;
        default: break;
    }

    ctx->pc = 0x21a4d0u;

    // 0x21a4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a4d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a4d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a4e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a4ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4f0: 0x8f8292a4  lw          $v0, -0x6D5C($gp)
    ctx->pc = 0x21a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a4f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4f8: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x21a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
label_21a4fc:
    // 0x21a4fc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21a500: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x21a504: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21a508: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x21a508u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a50c: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x21a50cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21a510: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x21A510u;
    {
        const bool branch_taken_0x21a510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a510) {
            ctx->pc = 0x21A54Cu;
            goto label_21a54c;
        }
    }
    ctx->pc = 0x21A518u;
    // 0x21a518: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21A518u;
    SET_GPR_U32(ctx, 31, 0x21A520u);
    ctx->pc = 0x21A51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A518u;
            // 0x21a51c: 0x8f849290  lw          $a0, -0x6D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A520u; }
        if (ctx->pc != 0x21A520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A520u; }
        if (ctx->pc != 0x21A520u) { return; }
    }
    ctx->pc = 0x21A520u;
label_21a520:
    // 0x21a520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a524: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21A524u;
    SET_GPR_U32(ctx, 31, 0x21A52Cu);
    ctx->pc = 0x21A528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A524u;
            // 0x21a528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A52Cu; }
        if (ctx->pc != 0x21A52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A52Cu; }
        if (ctx->pc != 0x21A52Cu) { return; }
    }
    ctx->pc = 0x21A52Cu;
label_21a52c:
    // 0x21a52c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21A52Cu;
    {
        const bool branch_taken_0x21a52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A52Cu;
            // 0x21a530: 0x8f8392a4  lw          $v1, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a52c) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A534u;
    // 0x21a534: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21a538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21a538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a53c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21A53Cu;
    SET_GPR_U32(ctx, 31, 0x21A544u);
    ctx->pc = 0x21A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A53Cu;
            // 0x21a540: 0x24641801  addiu       $a0, $v1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A544u; }
        if (ctx->pc != 0x21A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A544u; }
        if (ctx->pc != 0x21A544u) { return; }
    }
    ctx->pc = 0x21A544u;
label_21a544:
    // 0x21a544: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21A544u;
    {
        const bool branch_taken_0x21a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a544) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A54Cu;
label_21a54c:
    // 0x21a54c: 0x0  nop
    ctx->pc = 0x21a54cu;
    // NOP
    // 0x21a550: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x21a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21a554: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21a554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21a558: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x21a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x21a55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21a564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a568: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A568u;
    {
        const bool branch_taken_0x21a568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A568u;
            // 0x21a56c: 0x8f8492a4  lw          $a0, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a568) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A570u;
    // 0x21a570: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x21a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x21a574: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21A574u;
    SET_GPR_U32(ctx, 31, 0x21A57Cu);
    ctx->pc = 0x21A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A574u;
            // 0x21a578: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A57Cu; }
        if (ctx->pc != 0x21A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A57Cu; }
        if (ctx->pc != 0x21A57Cu) { return; }
    }
    ctx->pc = 0x21A57Cu;
label_21a57c:
    // 0x21a57c: 0x0  nop
    ctx->pc = 0x21a57cu;
    // NOP
    // 0x21a580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a584: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x21a584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a588: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21a588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x21a58c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A58Cu;
            // 0x21a590: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a4fc;
        }
    }
    ctx->pc = 0x21A594u;
    // 0x21a594: 0x8f8292a4  lw          $v0, -0x6D5C($gp)
    ctx->pc = 0x21a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a598: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21a59c: 0xac430184  sw          $v1, 0x184($v0)
    ctx->pc = 0x21a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 3));
    // 0x21a5a0: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a5a4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21A5A4u;
    SET_GPR_U32(ctx, 31, 0x21A5ACu);
    ctx->pc = 0x21A5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5A4u;
            // 0x21a5a8: 0x24051389  addiu       $a1, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5ACu; }
        if (ctx->pc != 0x21A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5ACu; }
        if (ctx->pc != 0x21A5ACu) { return; }
    }
    ctx->pc = 0x21A5ACu;
label_21a5ac:
    // 0x21a5ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5BCu;
            // 0x21a5c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A5C4u;
}
