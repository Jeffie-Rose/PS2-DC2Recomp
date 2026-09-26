#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrintDirect__11dbgCJISFontFiiPce
// Address: 0x186830 - 0x186ad8
void PrintDirect__11dbgCJISFontFiiPce_0x186830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrintDirect__11dbgCJISFontFiiPce_0x186830");
#endif

    switch (ctx->pc) {
        case 0x18689cu: goto label_18689c;
        case 0x1868a4u: goto label_1868a4;
        case 0x186920u: goto label_186920;
        case 0x186960u: goto label_186960;
        case 0x186990u: goto label_186990;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869f0u: goto label_1869f0;
        case 0x186a74u: goto label_186a74;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aacu: goto label_186aac;
        default: break;
    }

    ctx->pc = 0x186830u;

    // 0x186830: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x186830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x186834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18683c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x18683cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x186840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18684c: 0xafa70470  sw          $a3, 0x470($sp)
    ctx->pc = 0x18684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 7));
    // 0x186850: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186854: 0xffa80480  sd          $t0, 0x480($sp)
    ctx->pc = 0x186854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 8));
    // 0x186858: 0xffa90488  sd          $t1, 0x488($sp)
    ctx->pc = 0x186858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 9));
    // 0x18685c: 0xffaa0490  sd          $t2, 0x490($sp)
    ctx->pc = 0x18685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 10));
    // 0x186860: 0xffab0498  sd          $t3, 0x498($sp)
    ctx->pc = 0x186860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 11));
    // 0x186864: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x186864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    // 0x186868: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x186868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x18686c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18686Cu;
    {
        const bool branch_taken_0x18686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18686Cu;
            // 0x186870: 0xfc800080  sd          $zero, 0x80($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18686c) {
            ctx->pc = 0x18687Cu;
            goto label_18687c;
        }
    }
    ctx->pc = 0x186874u;
    // 0x186874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x186874u;
    {
        const bool branch_taken_0x186874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186874u;
            // 0x186878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186874) {
            ctx->pc = 0x186888u;
            goto label_186888;
        }
    }
    ctx->pc = 0x18687Cu;
label_18687c:
    // 0x18687c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x186880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x186880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186884: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x186884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_186888:
    // 0x186888: 0x8fa50470  lw          $a1, 0x470($sp)
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x18688c: 0x27a204a0  addiu       $v0, $sp, 0x4A0
    ctx->pc = 0x18688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x186890: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186894: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x186894u;
    SET_GPR_U32(ctx, 31, 0x18689Cu);
    ctx->pc = 0x186898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186894u;
            // 0x186898: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (runtime->hasFunction(0x12C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18689Cu; }
        if (ctx->pc != 0x18689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x12c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18689Cu; }
        if (ctx->pc != 0x18689Cu) { return; }
    }
    ctx->pc = 0x18689Cu;
label_18689c:
    // 0x18689c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x18689Cu;
    {
        const bool branch_taken_0x18689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18689c) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x1868A4u;
label_1868a4:
    // 0x1868a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1868a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1868a8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1868a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1868ac: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1868ACu;
    {
        const bool branch_taken_0x1868ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1868B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868ACu;
            // 0x1868b0: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868ac) {
            ctx->pc = 0x1869D0u;
            goto label_1869d0;
        }
    }
    ctx->pc = 0x1868B4u;
    // 0x1868b4: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1868B4u;
    {
        const bool branch_taken_0x1868b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1868B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B4u;
            // 0x1868b8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868b4) {
            ctx->pc = 0x186914u;
            goto label_186914;
        }
    }
    ctx->pc = 0x1868BCu;
    // 0x1868bc: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1868BCu;
    {
        const bool branch_taken_0x1868bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1868C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868BCu;
            // 0x1868c0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868bc) {
            ctx->pc = 0x1868F4u;
            goto label_1868f4;
        }
    }
    ctx->pc = 0x1868C4u;
    // 0x1868c4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1868C4u;
    {
        const bool branch_taken_0x1868c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1868c4) {
            ctx->pc = 0x1868D4u;
            goto label_1868d4;
        }
    }
    ctx->pc = 0x1868CCu;
    // 0x1868cc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1868CCu;
    {
        const bool branch_taken_0x1868cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868cc) {
            ctx->pc = 0x1869ACu;
            goto label_1869ac;
        }
    }
    ctx->pc = 0x1868D4u;
label_1868d4:
    // 0x1868d4: 0x0  nop
    ctx->pc = 0x1868d4u;
    // NOP
    // 0x1868d8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x1868d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1868dc: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1868dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1868e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1868e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1868e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1868e8: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x1868e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x1868ec: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1868ECu;
    {
        const bool branch_taken_0x1868ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868ECu;
            // 0x1868f0: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868ec) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x1868F4u;
label_1868f4:
    // 0x1868f4: 0x0  nop
    ctx->pc = 0x1868f4u;
    // NOP
    // 0x1868f8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1868fc: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x186900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186904: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x186904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x186908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18690c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x18690Cu;
    {
        const bool branch_taken_0x18690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18690Cu;
            // 0x186910: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18690c) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x186914u;
label_186914:
    // 0x186914: 0x0  nop
    ctx->pc = 0x186914u;
    // NOP
    // 0x186918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x186918u;
    {
        const bool branch_taken_0x186918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186918u;
            // 0x18691c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186918) {
            ctx->pc = 0x18692Cu;
            goto label_18692c;
        }
    }
    ctx->pc = 0x186920u;
label_186920:
    // 0x186920: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x186920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x186924: 0xa0440438  sb          $a0, 0x438($v0)
    ctx->pc = 0x186924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1080), (uint8_t)GPR_U32(ctx, 4));
    // 0x186928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18692c:
    // 0x18692c: 0x0  nop
    ctx->pc = 0x18692cu;
    // NOP
    // 0x186930: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x186930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x186934: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x186934u;
    {
        const bool branch_taken_0x186934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186934u;
            // 0x186938: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186934) {
            ctx->pc = 0x186948u;
            goto label_186948;
        }
    }
    ctx->pc = 0x18693Cu;
    // 0x18693c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x18693cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186940: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x186940u;
    {
        const bool branch_taken_0x186940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186940) {
            ctx->pc = 0x186920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186920;
        }
    }
    ctx->pc = 0x186948u;
label_186948:
    // 0x186948: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x186948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18694c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18694Cu;
    {
        const bool branch_taken_0x18694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18694Cu;
            // 0x186950: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18694c) {
            ctx->pc = 0x1869ACu;
            goto label_1869ac;
        }
    }
    ctx->pc = 0x186954u;
    // 0x186954: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x186954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x186958: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x186958u;
    SET_GPR_U32(ctx, 31, 0x186960u);
    ctx->pc = 0x18695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186958u;
            // 0x18695c: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186960u; }
        if (ctx->pc != 0x186960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186960u; }
        if (ctx->pc != 0x186960u) { return; }
    }
    ctx->pc = 0x186960u;
label_186960:
    // 0x186960: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186960u;
    {
        const bool branch_taken_0x186960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186960) {
            ctx->pc = 0x18697Cu;
            goto label_18697c;
        }
    }
    ctx->pc = 0x186968u;
    // 0x186968: 0x8e230898  lw          $v1, 0x898($s1)
    ctx->pc = 0x186968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x18696c: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x18696cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x186970: 0x601827  not         $v1, $v1
    ctx->pc = 0x186970u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x186974: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x186974u;
    {
        const bool branch_taken_0x186974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186974u;
            // 0x186978: 0xae230898  sw          $v1, 0x898($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186974) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x18697Cu;
label_18697c:
    // 0x18697c: 0x0  nop
    ctx->pc = 0x18697cu;
    // NOP
    // 0x186980: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x186984: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x186984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x186988: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x186988u;
    SET_GPR_U32(ctx, 31, 0x186990u);
    ctx->pc = 0x18698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186988u;
            // 0x18698c: 0x24a54008  addiu       $a1, $a1, 0x4008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186990u; }
        if (ctx->pc != 0x186990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186990u; }
        if (ctx->pc != 0x186990u) { return; }
    }
    ctx->pc = 0x186990u;
label_186990:
    // 0x186990: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186990u;
    {
        const bool branch_taken_0x186990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186990) {
            ctx->pc = 0x1869ACu;
            goto label_1869ac;
        }
    }
    ctx->pc = 0x186998u;
    // 0x186998: 0x8e2308ac  lw          $v1, 0x8AC($s1)
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
    // 0x18699c: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x18699cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1869a0: 0x601827  not         $v1, $v1
    ctx->pc = 0x1869a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1869a4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1869A4u;
    {
        const bool branch_taken_0x1869a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869A4u;
            // 0x1869a8: 0xae2308ac  sw          $v1, 0x8AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869a4) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x1869ACu;
label_1869ac:
    // 0x1869ac: 0x0  nop
    ctx->pc = 0x1869acu;
    // NOP
    // 0x1869b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1869b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1869b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1869b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869b8: 0x2442204d  addiu       $v0, $v0, 0x204D
    ctx->pc = 0x1869b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8269));
    // 0x1869bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1869bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1869c0: 0xc0618e0  jal         func_186380
    ctx->pc = 0x1869C0u;
    SET_GPR_U32(ctx, 31, 0x1869C8u);
    ctx->pc = 0x1869C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869C0u;
            // 0x1869c4: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186380u;
    if (runtime->hasFunction(0x186380u)) {
        auto targetFn = runtime->lookupFunction(0x186380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869C8u; }
        if (ctx->pc != 0x1869C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___putc__11dbgCJISFontFUl_0x186380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869C8u; }
        if (ctx->pc != 0x1869C8u) { return; }
    }
    ctx->pc = 0x1869C8u;
label_1869c8:
    // 0x1869c8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1869C8u;
    {
        const bool branch_taken_0x1869c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869C8u;
            // 0x1869cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869c8) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x1869D0u;
label_1869d0:
    // 0x1869d0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1869d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1869d4: 0x288200a1  slti        $v0, $a0, 0xA1
    ctx->pc = 0x1869d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x1869d8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1869D8u;
    {
        const bool branch_taken_0x1869d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1869DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869D8u;
            // 0x1869dc: 0x288100e0  slti        $at, $a0, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869d8) {
            ctx->pc = 0x186A7Cu;
            goto label_186a7c;
        }
    }
    ctx->pc = 0x1869E0u;
    // 0x1869e0: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1869E0u;
    {
        const bool branch_taken_0x1869e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869e0) {
            ctx->pc = 0x186A7Cu;
            goto label_186a7c;
        }
    }
    ctx->pc = 0x1869E8u;
    // 0x1869e8: 0xc06180c  jal         func_186030
    ctx->pc = 0x1869E8u;
    SET_GPR_U32(ctx, 31, 0x1869F0u);
    ctx->pc = 0x186030u;
    if (runtime->hasFunction(0x186030u)) {
        auto targetFn = runtime->lookupFunction(0x186030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869F0u; }
        if (ctx->pc != 0x1869F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ascii2serno__FUc_0x186030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869F0u; }
        if (ctx->pc != 0x1869F0u) { return; }
    }
    ctx->pc = 0x1869F0u;
label_1869f0:
    // 0x1869f0: 0x24032134  addiu       $v1, $zero, 0x2134
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8500));
    // 0x1869f4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1869F4u;
    {
        const bool branch_taken_0x1869f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1869f4) {
            ctx->pc = 0x186A28u;
            goto label_186a28;
        }
    }
    ctx->pc = 0x1869FCu;
    // 0x1869fc: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x1869fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x186a00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x186A00u;
    {
        const bool branch_taken_0x186a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a00) {
            ctx->pc = 0x186A28u;
            goto label_186a28;
        }
    }
    ctx->pc = 0x186A08u;
    // 0x186a08: 0xfe200080  sd          $zero, 0x80($s1)
    ctx->pc = 0x186a08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 0));
    // 0x186a0c: 0x64620001  daddiu      $v0, $v1, 0x1
    ctx->pc = 0x186a0cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x186a10: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x186a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x186a14: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x186a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x186a18: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x186a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x186a1c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x186a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186a20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x186A20u;
    {
        const bool branch_taken_0x186a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A20u;
            // 0x186a24: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a20) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x186A28u;
label_186a28:
    // 0x186a28: 0x24032135  addiu       $v1, $zero, 0x2135
    ctx->pc = 0x186a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8501));
    // 0x186a2c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x186A2Cu;
    {
        const bool branch_taken_0x186a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186a2c) {
            ctx->pc = 0x186A60u;
            goto label_186a60;
        }
    }
    ctx->pc = 0x186A34u;
    // 0x186a34: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x186a34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x186a38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x186A38u;
    {
        const bool branch_taken_0x186a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a38) {
            ctx->pc = 0x186A60u;
            goto label_186a60;
        }
    }
    ctx->pc = 0x186A40u;
    // 0x186a40: 0xfe200080  sd          $zero, 0x80($s1)
    ctx->pc = 0x186a40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 0));
    // 0x186a44: 0x64620002  daddiu      $v0, $v1, 0x2
    ctx->pc = 0x186a44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2);
    // 0x186a48: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x186a4c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x186a50: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x186a54: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x186a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186A58u;
    {
        const bool branch_taken_0x186a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A58u;
            // 0x186a5c: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a58) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x186A60u;
label_186a60:
    // 0x186a60: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x186a60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
label_186a64:
    // 0x186a64: 0x0  nop
    ctx->pc = 0x186a64u;
    // NOP
    // 0x186a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a6c: 0xc0618e0  jal         func_186380
    ctx->pc = 0x186A6Cu;
    SET_GPR_U32(ctx, 31, 0x186A74u);
    ctx->pc = 0x186A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A6Cu;
            // 0x186a70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186380u;
    if (runtime->hasFunction(0x186380u)) {
        auto targetFn = runtime->lookupFunction(0x186380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A74u; }
        if (ctx->pc != 0x186A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___putc__11dbgCJISFontFUl_0x186380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A74u; }
        if (ctx->pc != 0x186A74u) { return; }
    }
    ctx->pc = 0x186A74u;
label_186a74:
    // 0x186a74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186A74u;
    {
        const bool branch_taken_0x186a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A74u;
            // 0x186a78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a74) {
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x186A7Cu;
label_186a7c:
    // 0x186a7c: 0x0  nop
    ctx->pc = 0x186a7cu;
    // NOP
    // 0x186a80: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x186a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x186a84: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x186a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x186a88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x186a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x186a8c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x186a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x186a90: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x186a94: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x186a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x186a98: 0xc0617f4  jal         func_185FD0
    ctx->pc = 0x186A98u;
    SET_GPR_U32(ctx, 31, 0x186AA0u);
    ctx->pc = 0x186A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A98u;
            // 0x186a9c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185FD0u;
    if (runtime->hasFunction(0x185FD0u)) {
        auto targetFn = runtime->lookupFunction(0x185FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA0u; }
        if (ctx->pc != 0x186AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SjisToSerno__FUl_0x185fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA0u; }
        if (ctx->pc != 0x186AA0u) { return; }
    }
    ctx->pc = 0x186AA0u;
label_186aa0:
    // 0x186aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186aa4: 0xc0618e0  jal         func_186380
    ctx->pc = 0x186AA4u;
    SET_GPR_U32(ctx, 31, 0x186AACu);
    ctx->pc = 0x186AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AA4u;
            // 0x186aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186380u;
    if (runtime->hasFunction(0x186380u)) {
        auto targetFn = runtime->lookupFunction(0x186380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AACu; }
        if (ctx->pc != 0x186AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___putc__11dbgCJISFontFUl_0x186380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AACu; }
        if (ctx->pc != 0x186AACu) { return; }
    }
    ctx->pc = 0x186AACu;
label_186aac:
    // 0x186aac: 0x0  nop
    ctx->pc = 0x186aacu;
    // NOP
    // 0x186ab0: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x186ab0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186ab4: 0x14a0ff7b  bnez        $a1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x186AB4u;
    {
        const bool branch_taken_0x186ab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x186AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AB4u;
            // 0x186ab8: 0x5263c  dsll32      $a0, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ab4) {
            ctx->pc = 0x1868A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1868a4;
        }
    }
    ctx->pc = 0x186ABCu;
    // 0x186abc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186ac0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x186ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x186ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x186AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AD0u;
            // 0x186ad4: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186AD8u;
}
