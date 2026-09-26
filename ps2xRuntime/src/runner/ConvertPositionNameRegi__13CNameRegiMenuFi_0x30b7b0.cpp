#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertPositionNameRegi__13CNameRegiMenuFi
// Address: 0x30b7b0 - 0x30b970
void ConvertPositionNameRegi__13CNameRegiMenuFi_0x30b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertPositionNameRegi__13CNameRegiMenuFi_0x30b7b0");
#endif

    switch (ctx->pc) {
        case 0x30b7ccu: goto label_30b7cc;
        case 0x30b7e8u: goto label_30b7e8;
        default: break;
    }

    ctx->pc = 0x30b7b0u;

    // 0x30b7b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x30b7b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30b7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7c4: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30B7C4u;
    SET_GPR_U32(ctx, 31, 0x30B7CCu);
    ctx->pc = 0x30B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7C4u;
            // 0x30b7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7CCu; }
        if (ctx->pc != 0x30B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7CCu; }
        if (ctx->pc != 0x30B7CCu) { return; }
    }
    ctx->pc = 0x30B7CCu;
label_30b7cc:
    // 0x30b7cc: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x30B7CCu;
    {
        const bool branch_taken_0x30b7cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7CCu;
            // 0x30b7d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7cc) {
            ctx->pc = 0x30B850u;
            goto label_30b850;
        }
    }
    ctx->pc = 0x30B7D4u;
    // 0x30b7d4: 0x8e27011c  lw          $a3, 0x11C($s1)
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30b7d8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x30b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x30b7dc: 0x24c6e300  addiu       $a2, $a2, -0x1D00
    ctx->pc = 0x30b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959872));
    // 0x30b7e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30b7e4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_30b7e8:
    // 0x30b7e8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x30b7e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30b7ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30b7f0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30b7f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x30b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x30b7f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x30b7fc: 0x0  nop
    ctx->pc = 0x30b7fcu;
    // NOP
    // 0x30b800: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30B800u;
    {
        const bool branch_taken_0x30b800 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x30b800) {
            ctx->pc = 0x30B7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b7e8;
        }
    }
    ctx->pc = 0x30B808u;
    // 0x30b808: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x30b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b80c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x30b80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30b810: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x30b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b814: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B814u;
    {
        const bool branch_taken_0x30b814 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x30B818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B814u;
            // 0x30b818: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b814) {
            ctx->pc = 0x30B824u;
            goto label_30b824;
        }
    }
    ctx->pc = 0x30B81Cu;
    // 0x30b81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b820: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x30b820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_30b824:
    // 0x30b824: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x30b824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30b828: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x30b828u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30b82c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30b830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30b834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30b834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b838: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x30b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x30b83c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30b840: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30b844: 0x80630030  lb          $v1, 0x30($v1)
    ctx->pc = 0x30b844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x30b848: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x30b848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x30b84c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b850:
    // 0x30b850: 0x16030042  bne         $s0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x30B850u;
    {
        const bool branch_taken_0x30b850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B850u;
            // 0x30b854: 0x27838600  addiu       $v1, $gp, -0x7A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b850) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B858u;
    // 0x30b858: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x30b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x30b85c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30b860: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30b860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b864: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B864u;
    {
        const bool branch_taken_0x30b864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B864u;
            // 0x30b868: 0x83001a  div         $zero, $a0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b864) {
            ctx->pc = 0x30B870u;
            goto label_30b870;
        }
    }
    ctx->pc = 0x30B86Cu;
    // 0x30b86c: 0x1cd  break       0, 7
    ctx->pc = 0x30b86cu;
    runtime->handleBreak(rdram, ctx);
label_30b870:
    // 0x30b870: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b874: 0x3010  mfhi        $a2
    ctx->pc = 0x30b874u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x30b878: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B878u;
    {
        const bool branch_taken_0x30b878 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B878u;
            // 0x30b87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b878) {
            ctx->pc = 0x30B884u;
            goto label_30b884;
        }
    }
    ctx->pc = 0x30B880u;
    // 0x30b880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b884:
    // 0x30b884: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30b884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30b888: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x30b888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x30b88c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x30b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30b890: 0x2484e3c0  addiu       $a0, $a0, -0x1C40
    ctx->pc = 0x30b890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960064));
    // 0x30b894: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x30b894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30b898: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x30b898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30b89c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30b8a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30b8a4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30b8a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b8a8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b8a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b8ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B8ACu;
    {
        const bool branch_taken_0x30b8ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8ACu;
            // 0x30b8b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8ac) {
            ctx->pc = 0x30B8BCu;
            goto label_30b8bc;
        }
    }
    ctx->pc = 0x30B8B4u;
    // 0x30b8b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x30B8B4u;
    {
        const bool branch_taken_0x30b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8B4u;
            // 0x30b8b8: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8b4) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B8BCu;
label_30b8bc:
    // 0x30b8bc: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x30b8bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x30b8c0: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B8C4u;
    {
        const bool branch_taken_0x30b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8C4u;
            // 0x30b8c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8c4) {
            ctx->pc = 0x30B8D4u;
            goto label_30b8d4;
        }
    }
    ctx->pc = 0x30B8CCu;
    // 0x30b8cc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x30B8CCu;
    {
        const bool branch_taken_0x30b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8CCu;
            // 0x30b8d0: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8cc) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B8D4u;
label_30b8d4:
    // 0x30b8d4: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x30b8d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30b8d8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b8d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b8dc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B8DCu;
    {
        const bool branch_taken_0x30b8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8DCu;
            // 0x30b8e0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8dc) {
            ctx->pc = 0x30B8FCu;
            goto label_30b8fc;
        }
    }
    ctx->pc = 0x30B8E4u;
    // 0x30b8e4: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x30b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x30b8e8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b8ec: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30B8ECu;
    {
        const bool branch_taken_0x30b8ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30B8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8ECu;
            // 0x30b8f0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8ec) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B8F4u;
    // 0x30b8f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30B8F4u;
    {
        const bool branch_taken_0x30b8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8F4u;
            // 0x30b8f8: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8f4) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B8FCu;
label_30b8fc:
    // 0x30b8fc: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x30b8fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x30b900: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b904: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B904u;
    {
        const bool branch_taken_0x30b904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B904u;
            // 0x30b908: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b904) {
            ctx->pc = 0x30B914u;
            goto label_30b914;
        }
    }
    ctx->pc = 0x30B90Cu;
    // 0x30b90c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30B90Cu;
    {
        const bool branch_taken_0x30b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B90Cu;
            // 0x30b910: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b90c) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B914u;
label_30b914:
    // 0x30b914: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x30b914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30b918: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b91c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B91Cu;
    {
        const bool branch_taken_0x30b91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B91Cu;
            // 0x30b920: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b91c) {
            ctx->pc = 0x30B92Cu;
            goto label_30b92c;
        }
    }
    ctx->pc = 0x30B924u;
    // 0x30b924: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30B924u;
    {
        const bool branch_taken_0x30b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B924u;
            // 0x30b928: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b924) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B92Cu;
label_30b92c:
    // 0x30b92c: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x30b92cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x30b930: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x30b930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b934: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B934u;
    {
        const bool branch_taken_0x30b934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B934u;
            // 0x30b938: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b934) {
            ctx->pc = 0x30B958u;
            goto label_30b958;
        }
    }
    ctx->pc = 0x30B93Cu;
    // 0x30b93c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30b940: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x30b940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x30b944: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b948: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B948u;
    {
        const bool branch_taken_0x30b948 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B948u;
            // 0x30b94c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b948) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B950u;
    // 0x30b950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30B950u;
    {
        const bool branch_taken_0x30b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B950u;
            // 0x30b954: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b950) {
            ctx->pc = 0x30B95Cu;
            goto label_30b95c;
        }
    }
    ctx->pc = 0x30B958u;
label_30b958:
    // 0x30b958: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x30b958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_30b95c:
    // 0x30b95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b968: 0x3e00008  jr          $ra
    ctx->pc = 0x30B968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B968u;
            // 0x30b96c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B970u;
}
