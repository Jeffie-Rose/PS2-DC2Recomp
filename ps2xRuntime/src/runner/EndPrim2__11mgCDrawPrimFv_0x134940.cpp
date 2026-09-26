#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndPrim2__11mgCDrawPrimFv
// Address: 0x134940 - 0x134a1c
void EndPrim2__11mgCDrawPrimFv_0x134940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndPrim2__11mgCDrawPrimFv_0x134940");
#endif

    switch (ctx->pc) {
        case 0x13495cu: goto label_13495c;
        default: break;
    }

    ctx->pc = 0x134940u;

    // 0x134940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134948: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x13494c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13494Cu;
    {
        const bool branch_taken_0x13494c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13494c) {
            ctx->pc = 0x134964u;
            goto label_134964;
        }
    }
    ctx->pc = 0x134954u;
    // 0x134954: 0xc04d170  jal         func_1345C0
    ctx->pc = 0x134954u;
    SET_GPR_U32(ctx, 31, 0x13495Cu);
    ctx->pc = 0x1345C0u;
    if (runtime->hasFunction(0x1345C0u)) {
        auto targetFn = runtime->lookupFunction(0x1345C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13495Cu; }
        if (ctx->pc != 0x13495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndDma__11mgCDrawPrimFv_0x1345c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13495Cu; }
        if (ctx->pc != 0x13495Cu) { return; }
    }
    ctx->pc = 0x13495Cu;
label_13495c:
    // 0x13495c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13495Cu;
            // 0x134960: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13495c) {
            ctx->pc = 0x134A14u;
            goto label_134a14;
        }
    }
    ctx->pc = 0x134964u;
label_134964:
    // 0x134964: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134968: 0x8c8a00e0  lw          $t2, 0xE0($a0)
    ctx->pc = 0x134968u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x13496c: 0xca2823  subu        $a1, $a2, $t2
    ctx->pc = 0x13496cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x134970: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x134974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134970u;
            // 0x134974: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134970) {
            ctx->pc = 0x134980u;
            goto label_134980;
        }
    }
    ctx->pc = 0x134978u;
    // 0x134978: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x13497c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_134980:
    // 0x134980: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x134980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134984: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x134988: 0xc32823  subu        $a1, $a2, $v1
    ctx->pc = 0x134988u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13498c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13498Cu;
    {
        const bool branch_taken_0x13498c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x134990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13498Cu;
            // 0x134990: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13498c) {
            ctx->pc = 0x13499Cu;
            goto label_13499c;
        }
    }
    ctx->pc = 0x134994u;
    // 0x134994: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x134994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x134998: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_13499c:
    // 0x13499c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1349a0: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1349a4: 0xc32823  subu        $a1, $a2, $v1
    ctx->pc = 0x1349a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1349a8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349A8u;
    {
        const bool branch_taken_0x1349a8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349A8u;
            // 0x1349ac: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a8) {
            ctx->pc = 0x1349B8u;
            goto label_1349b8;
        }
    }
    ctx->pc = 0x1349B0u;
    // 0x1349b0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1349b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1349b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1349b8:
    // 0x1349b8: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349B8u;
    {
        const bool branch_taken_0x1349b8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1349BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349B8u;
            // 0x1349bc: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349b8) {
            ctx->pc = 0x1349C8u;
            goto label_1349c8;
        }
    }
    ctx->pc = 0x1349C0u;
    // 0x1349c0: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349C0u;
    {
        const bool branch_taken_0x1349c0 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x1349c0) {
            ctx->pc = 0x1349D0u;
            goto label_1349d0;
        }
    }
    ctx->pc = 0x1349C8u;
label_1349c8:
    // 0x1349c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1349C8u;
    {
        const bool branch_taken_0x1349c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349C8u;
            // 0x1349cc: 0xac8a00dc  sw          $t2, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349c8) {
            ctx->pc = 0x134A10u;
            goto label_134a10;
        }
    }
    ctx->pc = 0x1349D0u;
label_1349d0:
    // 0x1349d0: 0x8c8600ec  lw          $a2, 0xEC($a0)
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1349d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1349d8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1349d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1349dc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1349dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1349e0: 0x1032825  or          $a1, $t0, $v1
    ctx->pc = 0x1349e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1349e4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1349e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1349e8: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1349e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1349ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1349ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1349f0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1349f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1349f4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1349F4u;
    {
        const bool branch_taken_0x1349f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1349F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349F4u;
            // 0x1349f8: 0x123001a  div         $zero, $t1, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349f4) {
            ctx->pc = 0x134A00u;
            goto label_134a00;
        }
    }
    ctx->pc = 0x1349FCu;
    // 0x1349fc: 0x1cd  break       0, 7
    ctx->pc = 0x1349fcu;
    runtime->handleBreak(rdram, ctx);
label_134a00:
    // 0x134a00: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x134a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x134a04: 0x2012  mflo        $a0
    ctx->pc = 0x134a04u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x134a08: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x134a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x134a0c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x134a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_134a10:
    // 0x134a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134a14:
    // 0x134a14: 0x3e00008  jr          $ra
    ctx->pc = 0x134A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A14u;
            // 0x134a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134A1Cu;
}
