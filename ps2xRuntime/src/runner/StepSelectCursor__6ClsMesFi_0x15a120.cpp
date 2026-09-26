#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepSelectCursor__6ClsMesFi
// Address: 0x15a120 - 0x15a474
void StepSelectCursor__6ClsMesFi_0x15a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepSelectCursor__6ClsMesFi_0x15a120");
#endif

    switch (ctx->pc) {
        case 0x15a150u: goto label_15a150;
        case 0x15a18cu: goto label_15a18c;
        case 0x15a404u: goto label_15a404;
        default: break;
    }

    ctx->pc = 0x15a120u;

    // 0x15a120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a134: 0x8c831ae4  lw          $v1, 0x1AE4($a0)
    ctx->pc = 0x15a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6884)));
    // 0x15a138: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A138u;
    {
        const bool branch_taken_0x15a138 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A138u;
            // 0x15a13c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a138) {
            ctx->pc = 0x15A148u;
            goto label_15a148;
        }
    }
    ctx->pc = 0x15A140u;
    // 0x15a140: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x15A140u;
    {
        const bool branch_taken_0x15a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A140u;
            // 0x15a144: 0xae201b00  sw          $zero, 0x1B00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a140) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A148u;
label_15a148:
    // 0x15a148: 0xc0567d8  jal         func_159F60
    ctx->pc = 0x15A148u;
    SET_GPR_U32(ctx, 31, 0x15A150u);
    ctx->pc = 0x159F60u;
    if (runtime->hasFunction(0x159F60u)) {
        auto targetFn = runtime->lookupFunction(0x159F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A150u; }
        if (ctx->pc != 0x15A150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGoalCursorXY__6ClsMesFv_0x159f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A150u; }
        if (ctx->pc != 0x15A150u) { return; }
    }
    ctx->pc = 0x15A150u;
label_15a150:
    // 0x15a150: 0x8e231b00  lw          $v1, 0x1B00($s1)
    ctx->pc = 0x15a150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a154: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15A154u;
    {
        const bool branch_taken_0x15a154 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x15A158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A154u;
            // 0x15a158: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a154) {
            ctx->pc = 0x15A178u;
            goto label_15a178;
        }
    }
    ctx->pc = 0x15A15Cu;
    // 0x15a15c: 0x8e241ae8  lw          $a0, 0x1AE8($s1)
    ctx->pc = 0x15a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a164: 0xae241af0  sw          $a0, 0x1AF0($s1)
    ctx->pc = 0x15a164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 4));
    // 0x15a168: 0x8e241aec  lw          $a0, 0x1AEC($s1)
    ctx->pc = 0x15a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a16c: 0xae241af4  sw          $a0, 0x1AF4($s1)
    ctx->pc = 0x15a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 4));
    // 0x15a170: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x15A170u;
    {
        const bool branch_taken_0x15a170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A170u;
            // 0x15a174: 0xae231b00  sw          $v1, 0x1B00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a170) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A178u;
label_15a178:
    // 0x15a178: 0x102000b8  beqz        $at, . + 4 + (0xB8 << 2)
    ctx->pc = 0x15A178u;
    {
        const bool branch_taken_0x15a178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A178u;
            // 0x15a17c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a178) {
            ctx->pc = 0x15A45Cu;
            goto label_15a45c;
        }
    }
    ctx->pc = 0x15A180u;
    // 0x15a180: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15a180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15a184: 0x1420009c  bnez        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x15A184u;
    {
        const bool branch_taken_0x15a184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A184u;
            // 0x15a188: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a184) {
            ctx->pc = 0x15A3F8u;
            goto label_15a3f8;
        }
    }
    ctx->pc = 0x15A18Cu;
label_15a18c:
    // 0x15a18c: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a190: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a194: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a198: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A198u;
    {
        const bool branch_taken_0x15a198 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A198u;
            // 0x15a19c: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a198) {
            ctx->pc = 0x15A1A8u;
            goto label_15a1a8;
        }
    }
    ctx->pc = 0x15A1A0u;
    // 0x15a1a0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a1a4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a1a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a1a8:
    // 0x15a1a8: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a1ac: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a1b0: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a1b4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a1b8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A1B8u;
    {
        const bool branch_taken_0x15a1b8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1B8u;
            // 0x15a1bc: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1b8) {
            ctx->pc = 0x15A1C8u;
            goto label_15a1c8;
        }
    }
    ctx->pc = 0x15A1C0u;
    // 0x15a1c0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a1c4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a1c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a1c8:
    // 0x15a1c8: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a1cc: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a1d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a1d4: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a1d8: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a1dc: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a1e0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a1e4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1E4u;
            // 0x15a1e8: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A1F4u;
            goto label_15a1f4;
        }
    }
    ctx->pc = 0x15A1ECu;
    // 0x15a1ec: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a1f0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a1f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a1f4:
    // 0x15a1f4: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a1f8: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a1fc: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a200: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a204: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A204u;
    {
        const bool branch_taken_0x15a204 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A204u;
            // 0x15a208: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a204) {
            ctx->pc = 0x15A214u;
            goto label_15a214;
        }
    }
    ctx->pc = 0x15A20Cu;
    // 0x15a20c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a210: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a214:
    // 0x15a214: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a218: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a21c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a220: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a224: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a228: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a22c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a230: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A230u;
    {
        const bool branch_taken_0x15a230 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A230u;
            // 0x15a234: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a230) {
            ctx->pc = 0x15A240u;
            goto label_15a240;
        }
    }
    ctx->pc = 0x15A238u;
    // 0x15a238: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a23c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a240:
    // 0x15a240: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a244: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a248: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a24c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a250: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A250u;
    {
        const bool branch_taken_0x15a250 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A250u;
            // 0x15a254: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a250) {
            ctx->pc = 0x15A260u;
            goto label_15a260;
        }
    }
    ctx->pc = 0x15A258u;
    // 0x15a258: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a25c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a260:
    // 0x15a260: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a264: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a268: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a26c: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a270: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a274: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a278: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a27c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A27Cu;
    {
        const bool branch_taken_0x15a27c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A27Cu;
            // 0x15a280: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a27c) {
            ctx->pc = 0x15A28Cu;
            goto label_15a28c;
        }
    }
    ctx->pc = 0x15A284u;
    // 0x15a284: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a288: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a288u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a28c:
    // 0x15a28c: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a290: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a294: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a298: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a29c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A29Cu;
    {
        const bool branch_taken_0x15a29c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A29Cu;
            // 0x15a2a0: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a29c) {
            ctx->pc = 0x15A2ACu;
            goto label_15a2ac;
        }
    }
    ctx->pc = 0x15A2A4u;
    // 0x15a2a4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a2a8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a2ac:
    // 0x15a2ac: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a2b0: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a2b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a2b8: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a2bc: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a2c0: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a2c4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a2c8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A2C8u;
    {
        const bool branch_taken_0x15a2c8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2C8u;
            // 0x15a2cc: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2c8) {
            ctx->pc = 0x15A2D8u;
            goto label_15a2d8;
        }
    }
    ctx->pc = 0x15A2D0u;
    // 0x15a2d0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a2d4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a2d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a2d8:
    // 0x15a2d8: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a2dc: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a2e0: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a2e4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a2e8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A2E8u;
    {
        const bool branch_taken_0x15a2e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2E8u;
            // 0x15a2ec: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2e8) {
            ctx->pc = 0x15A2F8u;
            goto label_15a2f8;
        }
    }
    ctx->pc = 0x15A2F0u;
    // 0x15a2f0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a2f4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a2f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a2f8:
    // 0x15a2f8: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a2fc: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a300: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a304: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a308: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a30c: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a310: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a314: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A314u;
    {
        const bool branch_taken_0x15a314 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A314u;
            // 0x15a318: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a314) {
            ctx->pc = 0x15A324u;
            goto label_15a324;
        }
    }
    ctx->pc = 0x15A31Cu;
    // 0x15a31c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a320: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a324:
    // 0x15a324: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a328: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a32c: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a330: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a334: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A334u;
    {
        const bool branch_taken_0x15a334 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A334u;
            // 0x15a338: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a334) {
            ctx->pc = 0x15A344u;
            goto label_15a344;
        }
    }
    ctx->pc = 0x15A33Cu;
    // 0x15a33c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a340: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a344:
    // 0x15a344: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a348: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a34c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a350: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a354: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a358: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a35c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a360: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A360u;
    {
        const bool branch_taken_0x15a360 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A360u;
            // 0x15a364: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a360) {
            ctx->pc = 0x15A370u;
            goto label_15a370;
        }
    }
    ctx->pc = 0x15A368u;
    // 0x15a368: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a36c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a370:
    // 0x15a370: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a374: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a378: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a37c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a380: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A380u;
    {
        const bool branch_taken_0x15a380 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A380u;
            // 0x15a384: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a380) {
            ctx->pc = 0x15A390u;
            goto label_15a390;
        }
    }
    ctx->pc = 0x15A388u;
    // 0x15a388: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a38c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a38cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a390:
    // 0x15a390: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a394: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a39c: 0xae251b00  sw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
    // 0x15a3a0: 0x8e261af0  lw          $a2, 0x1AF0($s1)
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a3a4: 0x8e251ae8  lw          $a1, 0x1AE8($s1)
    ctx->pc = 0x15a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a3a8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a3ac: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A3ACu;
    {
        const bool branch_taken_0x15a3ac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3ACu;
            // 0x15a3b0: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3ac) {
            ctx->pc = 0x15A3BCu;
            goto label_15a3bc;
        }
    }
    ctx->pc = 0x15A3B4u;
    // 0x15a3b4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a3b8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a3b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a3bc:
    // 0x15a3bc: 0xae251af0  sw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 5));
    // 0x15a3c0: 0x8e261af4  lw          $a2, 0x1AF4($s1)
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a3c4: 0x8e251aec  lw          $a1, 0x1AEC($s1)
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a3c8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a3cc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A3CCu;
    {
        const bool branch_taken_0x15a3cc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3CCu;
            // 0x15a3d0: 0x62843  sra         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3cc) {
            ctx->pc = 0x15A3DCu;
            goto label_15a3dc;
        }
    }
    ctx->pc = 0x15A3D4u;
    // 0x15a3d4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a3d8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_15a3dc:
    // 0x15a3dc: 0xae251af4  sw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 5));
    // 0x15a3e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15a3e4: 0x8e261b00  lw          $a2, 0x1B00($s1)
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a3e8: 0x64282a  slt         $a1, $v1, $a0
    ctx->pc = 0x15a3e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15a3ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a3f0: 0x14a0ff66  bnez        $a1, . + 4 + (-0x9A << 2)
    ctx->pc = 0x15A3F0u;
    {
        const bool branch_taken_0x15a3f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3F0u;
            // 0x15a3f4: 0xae261b00  sw          $a2, 0x1B00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3f0) {
            ctx->pc = 0x15A18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a18c;
        }
    }
    ctx->pc = 0x15A3F8u;
label_15a3f8:
    // 0x15a3f8: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x15a3f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15a3fc: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A3FCu;
    {
        const bool branch_taken_0x15a3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a3fc) {
            ctx->pc = 0x15A45Cu;
            goto label_15a45c;
        }
    }
    ctx->pc = 0x15A404u;
label_15a404:
    // 0x15a404: 0x8e251af0  lw          $a1, 0x1AF0($s1)
    ctx->pc = 0x15a404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6896)));
    // 0x15a408: 0x8e241ae8  lw          $a0, 0x1AE8($s1)
    ctx->pc = 0x15a408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6888)));
    // 0x15a40c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15a410: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A410u;
    {
        const bool branch_taken_0x15a410 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A410u;
            // 0x15a414: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a410) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A418u;
    // 0x15a418: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x15a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a41c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_15a420:
    // 0x15a420: 0xae241af0  sw          $a0, 0x1AF0($s1)
    ctx->pc = 0x15a420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 4));
    // 0x15a424: 0x8e251af4  lw          $a1, 0x1AF4($s1)
    ctx->pc = 0x15a424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x15a428: 0x8e241aec  lw          $a0, 0x1AEC($s1)
    ctx->pc = 0x15a428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x15a42c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15a430: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A430u;
    {
        const bool branch_taken_0x15a430 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A430u;
            // 0x15a434: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a430) {
            ctx->pc = 0x15A440u;
            goto label_15a440;
        }
    }
    ctx->pc = 0x15A438u;
    // 0x15a438: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x15a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a43c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x15a43cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_15a440:
    // 0x15a440: 0xae241af4  sw          $a0, 0x1AF4($s1)
    ctx->pc = 0x15a440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 4));
    // 0x15a444: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a448: 0x8e251b00  lw          $a1, 0x1B00($s1)
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6912)));
    // 0x15a44c: 0x70202a  slt         $a0, $v1, $s0
    ctx->pc = 0x15a44cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15a450: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a454: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15A454u;
    {
        const bool branch_taken_0x15a454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A454u;
            // 0x15a458: 0xae251b00  sw          $a1, 0x1B00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a454) {
            ctx->pc = 0x15A404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a404;
        }
    }
    ctx->pc = 0x15A45Cu;
label_15a45c:
    // 0x15a45c: 0x0  nop
    ctx->pc = 0x15a45cu;
    // NOP
label_15a460:
    // 0x15a460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a46c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A46Cu;
            // 0x15a470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A474u;
}
