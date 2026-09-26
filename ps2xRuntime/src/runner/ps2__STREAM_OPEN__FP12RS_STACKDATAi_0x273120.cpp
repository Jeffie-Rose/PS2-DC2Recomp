#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_OPEN__FP12RS_STACKDATAi
// Address: 0x273120 - 0x273238
void ps2__STREAM_OPEN__FP12RS_STACKDATAi_0x273120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_OPEN__FP12RS_STACKDATAi_0x273120");
#endif

    switch (ctx->pc) {
        case 0x27313cu: goto label_27313c;
        case 0x27318cu: goto label_27318c;
        case 0x27319cu: goto label_27319c;
        case 0x2731bcu: goto label_2731bc;
        case 0x2731ccu: goto label_2731cc;
        case 0x2731dcu: goto label_2731dc;
        case 0x2731e8u: goto label_2731e8;
        case 0x273208u: goto label_273208;
        case 0x273214u: goto label_273214;
        case 0x273220u: goto label_273220;
        default: break;
    }

    ctx->pc = 0x273120u;

    // 0x273120: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x273120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x273124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x273128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27312c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273130: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x273130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273134: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273134u;
    SET_GPR_U32(ctx, 31, 0x27313Cu);
    ctx->pc = 0x273138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273134u;
            // 0x273138: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27313Cu; }
        if (ctx->pc != 0x27313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27313Cu; }
        if (ctx->pc != 0x27313Cu) { return; }
    }
    ctx->pc = 0x27313Cu;
label_27313c:
    // 0x27313c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273140: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x273140u;
    {
        const bool branch_taken_0x273140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x273144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273140u;
            // 0x273144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273140) {
            ctx->pc = 0x2731F4u;
            goto label_2731f4;
        }
    }
    ctx->pc = 0x273148u;
    // 0x273148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27314c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27314Cu;
    {
        const bool branch_taken_0x27314c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x27314c) {
            ctx->pc = 0x27315Cu;
            goto label_27315c;
        }
    }
    ctx->pc = 0x273154u;
    // 0x273154: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x273154u;
    {
        const bool branch_taken_0x273154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273154u;
            // 0x273158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273154) {
            ctx->pc = 0x273224u;
            goto label_273224;
        }
    }
    ctx->pc = 0x27315Cu;
label_27315c:
    // 0x27315c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273160: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x273160u;
    {
        const bool branch_taken_0x273160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x273160) {
            ctx->pc = 0x2731CCu;
            goto label_2731cc;
        }
    }
    ctx->pc = 0x273168u;
    // 0x273168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273168u;
    {
        const bool branch_taken_0x273168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273168u;
            // 0x27316c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273168) {
            ctx->pc = 0x273178u;
            goto label_273178;
        }
    }
    ctx->pc = 0x273170u;
    // 0x273170: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x273170u;
    {
        const bool branch_taken_0x273170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273170u;
            // 0x273174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273170) {
            ctx->pc = 0x2731ECu;
            goto label_2731ec;
        }
    }
    ctx->pc = 0x273178u;
label_273178:
    // 0x273178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27317c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273180: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x273180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x273184: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273184u;
    SET_GPR_U32(ctx, 31, 0x27318Cu);
    ctx->pc = 0x273188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273184u;
            // 0x273188: 0xac22e568  sw          $v0, -0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27318Cu; }
        if (ctx->pc != 0x27318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27318Cu; }
        if (ctx->pc != 0x27318Cu) { return; }
    }
    ctx->pc = 0x27318Cu;
label_27318c:
    // 0x27318c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27318cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x273190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273194: 0xc09cbf4  jal         func_272FD0
    ctx->pc = 0x273194u;
    SET_GPR_U32(ctx, 31, 0x27319Cu);
    ctx->pc = 0x273198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273194u;
            // 0x273198: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272FD0u;
    if (runtime->hasFunction(0x272FD0u)) {
        auto targetFn = runtime->lookupFunction(0x272FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27319Cu; }
        if (ctx->pc != 0x27319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VpkFileNameFromVoiceNo__FPci_0x272fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27319Cu; }
        if (ctx->pc != 0x27319Cu) { return; }
    }
    ctx->pc = 0x27319Cu;
label_27319c:
    // 0x27319c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27319Cu;
    {
        const bool branch_taken_0x27319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2731A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27319Cu;
            // 0x2731a0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27319c) {
            ctx->pc = 0x2731ACu;
            goto label_2731ac;
        }
    }
    ctx->pc = 0x2731A4u;
    // 0x2731a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2731A4u;
    {
        const bool branch_taken_0x2731a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731A4u;
            // 0x2731a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731a4) {
            ctx->pc = 0x273224u;
            goto label_273224;
        }
    }
    ctx->pc = 0x2731ACu;
label_2731ac:
    // 0x2731ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2731acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2731b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2731b4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2731B4u;
    SET_GPR_U32(ctx, 31, 0x2731BCu);
    ctx->pc = 0x2731B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2731B4u;
            // 0x2731b8: 0x24a5cac8  addiu       $a1, $a1, -0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731BCu; }
        if (ctx->pc != 0x2731BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731BCu; }
        if (ctx->pc != 0x2731BCu) { return; }
    }
    ctx->pc = 0x2731BCu;
label_2731bc:
    // 0x2731bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2731bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2731c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2731c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2731c4: 0xc09cba8  jal         func_272EA0
    ctx->pc = 0x2731C4u;
    SET_GPR_U32(ctx, 31, 0x2731CCu);
    ctx->pc = 0x2731C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2731C4u;
            // 0x2731c8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272EA0u;
    if (runtime->hasFunction(0x272EA0u)) {
        auto targetFn = runtime->lookupFunction(0x272EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731CCu; }
        if (ctx->pc != 0x2731CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamOpenFromFPL__FiPcPc_0x272ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731CCu; }
        if (ctx->pc != 0x2731CCu) { return; }
    }
    ctx->pc = 0x2731CCu;
label_2731cc:
    // 0x2731cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2731d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2731d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731d4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2731D4u;
    SET_GPR_U32(ctx, 31, 0x2731DCu);
    ctx->pc = 0x2731D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2731D4u;
            // 0x2731d8: 0xac20e568  sw          $zero, -0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731DCu; }
        if (ctx->pc != 0x2731DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731DCu; }
        if (ctx->pc != 0x2731DCu) { return; }
    }
    ctx->pc = 0x2731DCu;
label_2731dc:
    // 0x2731dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2731dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731e0: 0xc09cbd8  jal         func_272F60
    ctx->pc = 0x2731E0u;
    SET_GPR_U32(ctx, 31, 0x2731E8u);
    ctx->pc = 0x2731E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2731E0u;
            // 0x2731e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272F60u;
    if (runtime->hasFunction(0x272F60u)) {
        auto targetFn = runtime->lookupFunction(0x272F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731E8u; }
        if (ctx->pc != 0x2731E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamOpen__FiPc_0x272f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731E8u; }
        if (ctx->pc != 0x2731E8u) { return; }
    }
    ctx->pc = 0x2731E8u;
label_2731e8:
    // 0x2731e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2731e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2731ec:
    // 0x2731ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2731ECu;
    {
        const bool branch_taken_0x2731ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731ECu;
            // 0x2731f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731ec) {
            ctx->pc = 0x273228u;
            goto label_273228;
        }
    }
    ctx->pc = 0x2731F4u;
label_2731f4:
    // 0x2731f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2731f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2731f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2731f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731fc: 0xac22e568  sw          $v0, -0x1A98($at)
    ctx->pc = 0x2731fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 2));
    // 0x273200: 0xc097e48  jal         func_25F920
    ctx->pc = 0x273200u;
    SET_GPR_U32(ctx, 31, 0x273208u);
    ctx->pc = 0x273204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273200u;
            // 0x273204: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273208u; }
        if (ctx->pc != 0x273208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273208u; }
        if (ctx->pc != 0x273208u) { return; }
    }
    ctx->pc = 0x273208u;
label_273208:
    // 0x273208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27320c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27320Cu;
    SET_GPR_U32(ctx, 31, 0x273214u);
    ctx->pc = 0x273210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27320Cu;
            // 0x273210: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273214u; }
        if (ctx->pc != 0x273214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273214u; }
        if (ctx->pc != 0x273214u) { return; }
    }
    ctx->pc = 0x273214u;
label_273214:
    // 0x273214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273218: 0xc09cba8  jal         func_272EA0
    ctx->pc = 0x273218u;
    SET_GPR_U32(ctx, 31, 0x273220u);
    ctx->pc = 0x27321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273218u;
            // 0x27321c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272EA0u;
    if (runtime->hasFunction(0x272EA0u)) {
        auto targetFn = runtime->lookupFunction(0x272EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273220u; }
        if (ctx->pc != 0x273220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamOpenFromFPL__FiPcPc_0x272ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273220u; }
        if (ctx->pc != 0x273220u) { return; }
    }
    ctx->pc = 0x273220u;
label_273220:
    // 0x273220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273224:
    // 0x273224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_273228:
    // 0x273228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27322c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273230: 0x3e00008  jr          $ra
    ctx->pc = 0x273230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273230u;
            // 0x273234: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273238u;
}
