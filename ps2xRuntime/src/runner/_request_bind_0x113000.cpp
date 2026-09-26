#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _request_bind
// Address: 0x113000 - 0x1130b0
void _request_bind_0x113000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_bind_0x113000");
#endif

    switch (ctx->pc) {
        case 0x113024u: goto label_113024;
        case 0x113050u: goto label_113050;
        default: break;
    }

    ctx->pc = 0x113000u;

    // 0x113000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113004: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11300c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11300cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113014: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x113018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x113018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11301c: 0xc044b34  jal         func_112CD0
    ctx->pc = 0x11301Cu;
    SET_GPR_U32(ctx, 31, 0x113024u);
    ctx->pc = 0x113020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11301Cu;
            // 0x113020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112CD0u;
    if (runtime->hasFunction(0x112CD0u)) {
        auto targetFn = runtime->lookupFunction(0x112CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113024u; }
        if (ctx->pc != 0x113024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x112cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113024u; }
        if (ctx->pc != 0x113024u) { return; }
    }
    ctx->pc = 0x113024u;
label_113024:
    // 0x113024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113028: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x113028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11302c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x113030: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x113030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x113034: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x113034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x113038: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x113038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x11303c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x11303cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x113040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113044: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x113044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x113048: 0xc044bec  jal         func_112FB0
    ctx->pc = 0x113048u;
    SET_GPR_U32(ctx, 31, 0x113050u);
    ctx->pc = 0x11304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113048u;
            // 0x11304c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112FB0u;
    if (runtime->hasFunction(0x112FB0u)) {
        auto targetFn = runtime->lookupFunction(0x112FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113050u; }
        if (ctx->pc != 0x113050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _search_svdata_0x112fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113050u; }
        if (ctx->pc != 0x113050u) { return; }
    }
    ctx->pc = 0x113050u;
label_113050:
    // 0x113050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113054: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113054u;
    {
        const bool branch_taken_0x113054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113054) {
            ctx->pc = 0x113058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113054u;
            // 0x113058: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11306Cu;
            goto label_11306c;
        }
    }
    ctx->pc = 0x11305Cu;
    // 0x11305c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x11305cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x113060: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x113060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x113064: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113064u;
    {
        const bool branch_taken_0x113064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113064u;
            // 0x113068: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113064) {
            ctx->pc = 0x11307Cu;
            goto label_11307c;
        }
    }
    ctx->pc = 0x11306Cu;
label_11306c:
    // 0x11306c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x11306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x113070: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x113070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x113074: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x113074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x113078: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x113078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_11307c:
    // 0x11307c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113080: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x113080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x113084: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113088: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x113088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x11308c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11308cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113090: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x113094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11309c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1130a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1130a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1130a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a8: 0x8044a0a  j           func_112828
    ctx->pc = 0x1130A8u;
    ctx->pc = 0x1130ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1130A8u;
            // 0x1130ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112828u;
    if (runtime->hasFunction(0x112828u)) {
        auto targetFn = runtime->lookupFunction(0x112828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        isceSifSendCmd_0x112828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1130B0u;
}
