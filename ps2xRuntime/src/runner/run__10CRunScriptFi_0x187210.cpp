#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: run__10CRunScriptFi
// Address: 0x187210 - 0x187360
void run__10CRunScriptFi_0x187210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("run__10CRunScriptFi_0x187210");
#endif

    switch (ctx->pc) {
        case 0x187274u: goto label_187274;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872f8u: goto label_1872f8;
        case 0x187320u: goto label_187320;
        case 0x187344u: goto label_187344;
        default: break;
    }

    ctx->pc = 0x187210u;

    // 0x187210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18721c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x187220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187220u;
    {
        const bool branch_taken_0x187220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187220u;
            // 0x187224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187220) {
            ctx->pc = 0x187230u;
            goto label_187230;
        }
    }
    ctx->pc = 0x187228u;
    // 0x187228: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x187228u;
    {
        const bool branch_taken_0x187228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18722Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187228u;
            // 0x18722c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187228) {
            ctx->pc = 0x187350u;
            goto label_187350;
        }
    }
    ctx->pc = 0x187230u;
label_187230:
    // 0x187230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x187230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x187234: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x187234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x187238: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18723c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x18723cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x187240: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187240u;
    {
        const bool branch_taken_0x187240 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x187244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187240u;
            // 0x187244: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187240) {
            ctx->pc = 0x18725Cu;
            goto label_18725c;
        }
    }
    ctx->pc = 0x187248u;
    // 0x187248: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18724c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187250: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187254: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187254u;
    {
        const bool branch_taken_0x187254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187254u;
            // 0x187258: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187254) {
            ctx->pc = 0x1872A4u;
            goto label_1872a4;
        }
    }
    ctx->pc = 0x18725Cu;
label_18725c:
    // 0x18725c: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x187260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187264: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x187268: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x187268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x18726c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18726Cu;
    {
        const bool branch_taken_0x18726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18726Cu;
            // 0x187270: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18726c) {
            ctx->pc = 0x187298u;
            goto label_187298;
        }
    }
    ctx->pc = 0x187274u;
label_187274:
    // 0x187274: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187278: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187278u;
    {
        const bool branch_taken_0x187278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x187278) {
            ctx->pc = 0x187290u;
            goto label_187290;
        }
    }
    ctx->pc = 0x187280u;
    // 0x187280: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187284: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x187284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x187288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187288u;
    {
        const bool branch_taken_0x187288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187288u;
            // 0x18728c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187288) {
            ctx->pc = 0x1872A4u;
            goto label_1872a4;
        }
    }
    ctx->pc = 0x187290u;
label_187290:
    // 0x187290: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x187294: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x187294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_187298:
    // 0x187298: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x187298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18729c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18729Cu;
    {
        const bool branch_taken_0x18729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18729c) {
            ctx->pc = 0x187274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187274;
        }
    }
    ctx->pc = 0x1872A4u;
label_1872a4:
    // 0x1872a4: 0x0  nop
    ctx->pc = 0x1872a4u;
    // NOP
    // 0x1872a8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1872a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1872ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1872ACu;
    {
        const bool branch_taken_0x1872ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1872B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872ACu;
            // 0x1872b0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872ac) {
            ctx->pc = 0x1872C4u;
            goto label_1872c4;
        }
    }
    ctx->pc = 0x1872B4u;
    // 0x1872b4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1872B4u;
    SET_GPR_U32(ctx, 31, 0x1872BCu);
    ctx->pc = 0x1872B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1872B4u;
            // 0x1872b8: 0x24844130  addiu       $a0, $a0, 0x4130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872BCu; }
        if (ctx->pc != 0x1872BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872BCu; }
        if (ctx->pc != 0x1872BCu) { return; }
    }
    ctx->pc = 0x1872BCu;
label_1872bc:
    // 0x1872bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1872BCu;
    {
        const bool branch_taken_0x1872bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872BCu;
            // 0x1872c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872bc) {
            ctx->pc = 0x187350u;
            goto label_187350;
        }
    }
    ctx->pc = 0x1872C4u;
label_1872c4:
    // 0x1872c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1872c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1872c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1872c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872cc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1872ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1872d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1872d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1872d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1872d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1872d8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1872d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1872dc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1872e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1872e4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1872e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1872e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1872e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1872ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1872f0: 0xc061b54  jal         func_186D50
    ctx->pc = 0x1872F0u;
    SET_GPR_U32(ctx, 31, 0x1872F8u);
    ctx->pc = 0x1872F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1872F0u;
            // 0x1872f4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872F8u; }
        if (ctx->pc != 0x1872F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872F8u; }
        if (ctx->pc != 0x1872F8u) { return; }
    }
    ctx->pc = 0x1872F8u;
label_1872f8:
    // 0x1872f8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1872fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1872fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187300: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x187300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187304: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187308: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18730c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18730cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187310: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x187310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187314: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x187314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x187318: 0xc049c86  jal         func_127218
    ctx->pc = 0x187318u;
    SET_GPR_U32(ctx, 31, 0x187320u);
    ctx->pc = 0x18731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187318u;
            // 0x18731c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187320u; }
        if (ctx->pc != 0x187320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187320u; }
        if (ctx->pc != 0x187320u) { return; }
    }
    ctx->pc = 0x187320u;
label_187320:
    // 0x187320: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187328: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18732c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187330: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x187330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x187334: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187338: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x187338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x18733c: 0xc061cf0  jal         func_1873C0
    ctx->pc = 0x18733Cu;
    SET_GPR_U32(ctx, 31, 0x187344u);
    ctx->pc = 0x187340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18733Cu;
            // 0x187340: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873C0u;
    if (runtime->hasFunction(0x1873C0u)) {
        auto targetFn = runtime->lookupFunction(0x1873C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187344u; }
        if (ctx->pc != 0x187344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exe__10CRunScriptFP8vmcode_t_0x1873c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187344u; }
        if (ctx->pc != 0x187344u) { return; }
    }
    ctx->pc = 0x187344u;
label_187344:
    // 0x187344: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x187348: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18734c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_187350:
    // 0x187350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187358: 0x3e00008  jr          $ra
    ctx->pc = 0x187358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187358u;
            // 0x18735c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187360u;
}
